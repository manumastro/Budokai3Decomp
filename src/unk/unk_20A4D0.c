#include "common.h"
void func_0013B160(void *p);
void func_0013B0B0(u8 *);
void func_0013B110(s32);
void func_0013B060(s32);
extern s32 D_00470238;
void amModel_SetCurrent(s32, s32);
void func_00208D60(s32);
void func_00209C50(void);
void func_00209D70(void *);
void func_0013B960(u8 *);

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
s32 func_0020BBD0(u8 *, s32);
void func_00244190(u8 *);
void func_002475E0(u8 *);
s32 func_00218690(void);
extern u8 *gWave;
extern u8 *D_0046FDD0;
extern s32 D_00470670;
extern u8 D_0046A3C8[];
/* .rodata of this unit starts at 0x3699A0 (see the yaml): this table, then the switch table of func_0020AD30. */
extern void func_00214B50();
extern void func_00214870();
extern void func_002145E0();
extern void func_00214370();
extern void func_00213F30();
extern void func_00213AE0();
extern void func_00213570();
extern void func_00213180();
extern void func_00212DA0();
extern void func_002129B0();
extern void func_00212730();
void (*const D_004699A0[11])(s32) = {
    func_00214B50,
    func_00214870,
    func_002145E0,
    func_00214370,
    func_00213F30,
    func_00213AE0,
    func_00213570,
    func_00213180,
    func_00212DA0,
    func_002129B0,
    func_00212730,
};
extern void (*D_00469CC0[])(s32);
extern void Obj_ResetF38(s32);
extern void func_00208D70(s32);
void func_002184F0(void);
void func_00243ED0(void);
void func_00247280(void);
void Hm_Exit(void);
void func_00243F20(void);
void func_002472F0(void);
void Adx_TaskStopCheck(void);
void memset(void *, s32, s32);
s32 amCdFs_ReadFileId(s32, s32, s32);
extern void (*jtbl_00469CC4[])(void *);
extern u8 D_0044BA90[];
extern void amAdx_Pause(s32, s32);
void func_0020D780(void *);
void func_002194C0(u8 *);
extern u8 *gBattle;
void amAdx_SetVolume(s32, f32);
s32 Hm_IsBusy(void);
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
void func_00211D80(u8 *a);
void func_002186D0(u8 *p);
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
void func_0020D5C0(void *a, s32 b, void *c, u8 *d);
void func_0020B600(void);
void func_0020BA60();
void func_0020CCF0(s16, void *);
s32 amMotion_FindBone(s32, void *);
void func_00146ED0(void *a, void *b, f32 s);
extern void (*D_00469CC8[])(void *);
void amAdx_Stop(s32);
void amHeap_Free(void *);
extern s32 D_00568B94[];
extern u8 D_00568C14[];

#if 0
void func_0020A4D0(s32 idx) {
    u8 *p;
    V4Q *q;
    V4Q d;
    V4Q c;
    V4Q b;
    V4Q a;
    V4Q *pb = (V4Q *)&b;
    V4Q *pd = (V4Q *)&d;
    V4Q *pc = (V4Q *)&c;

    idx *= 0xF0;
    p = D_005687D0 + idx;
    q = (V4Q *)(p + 0x20);
    a.x = *(f32 *)(p + 0x0);
    a.y = *(f32 *)(p + 0x4);
    a.z = *(f32 *)(p + 0x8);
    a.w = 0x3F800000;
    pb->x = *(f32 *)(p + 0x10);
    b.y = *(f32 *)(p + 0x4);
    b.z = *(f32 *)(p + 0x8);
    b.w = 0x3F800000;
    pc->x = *(f32 *)(p + 0x0);
    c.y = *(f32 *)(p + 0x14);
    c.z = *(f32 *)(p + 0x8);
    c.w = 0x3F800000;
    pd->x = *(f32 *)(p + 0x10);
    d.y = *(f32 *)(p + 0x14);
    d.z = *(f32 *)(p + 0x8);
    d.w = 0x3F800000;
    func_00136870(1, 0x812, 0, -1, 0x44, 0);
    func_00137920(&a, q, pb, q + 1);
    func_00137920(pc, q + 2, pd, q + 3);
    amDraw_FlushPacket();
}
// differs: 5 of 71: only the idx*0xF0 chain (the original keeps both temps of sll/subu in v0 and the product in a0; here the subu goes to a0); vector layout, saved registers and calls match
#endif
extern u8 D_0046A380[];
void func_00209F40(s32);
extern u8 D_00469CD8[];
void func_00216880(void);
extern void (*D_00469CCC[])(void *);
extern s8 D_004703F4;
void amMotSet_Apply(void *, s32, f32);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020A4D0);


extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

extern u8 D_0051D9A8[];

#if 0
s32 func_0020A5F0(s32 idx) {
    u8 *p;
    f32 f0;
    f32 f1;
    f32 f2;
    f32 f3;
    s32 bits;

    p = D_005687D0 + idx * 0xF0;
    f3 = *(f32 *)(p + 0xE4);
    if (f3 < 0.0f) {
        return 1;
    }
    f2 = *(f32 *)(p + 0xE0);
    f2 = f3 / f2;
    f0 = f3 - *(f32 *)D_0051D9A8;
    f1 = 1.0f - f2;
    *(f32 *)(p + 0xE4) = f0;
    __asm__ volatile (
        "lqc2 $vf1, 0(%1)\n"
        "lqc2 $vf2, 0(%2)\n"
        "mfc1 %0, %4\n"
        "qmtc2.ni %0, $vf3\n"
        "vsub.xyzw $vf2, $vf2, $vf1\n"
        "vaddax.xyzw ACC, $vf1, $vf0x\n"
        "vmaddx.xyzw $vf2, $vf2, $vf3x\n"
        "sqc2 $vf2, 0(%3)\n"
        : "=r"(bits) : "r"(p + 0x60), "r"(p + 0xA0), "r"(p + 0x20), "f"(f1) : "memory");
    __asm__ volatile (
        "lqc2 $vf1, 0(%1)\n"
        "lqc2 $vf2, 0(%2)\n"
        "mfc1 %0, %4\n"
        "qmtc2.ni %0, $vf3\n"
        "vsub.xyzw $vf2, $vf2, $vf1\n"
        "vaddax.xyzw ACC, $vf1, $vf0x\n"
        "vmaddx.xyzw $vf2, $vf2, $vf3x\n"
        "sqc2 $vf2, 0(%3)\n"
        : "=r"(bits) : "r"(p + 0x70), "r"(p + 0xB0), "r"(p + 0x30), "f"(f1) : "memory");
    __asm__ volatile (
        "lqc2 $vf1, 0(%1)\n"
        "lqc2 $vf2, 0(%2)\n"
        "mfc1 %0, %4\n"
        "qmtc2.ni %0, $vf3\n"
        "vsub.xyzw $vf2, $vf2, $vf1\n"
        "vaddax.xyzw ACC, $vf1, $vf0x\n"
        "vmaddx.xyzw $vf2, $vf2, $vf3x\n"
        "sqc2 $vf2, 0(%3)\n"
        : "=r"(bits) : "r"(p + 0x80), "r"(p + 0xC0), "r"(p + 0x40), "f"(f1) : "memory");
    __asm__ volatile (
        "lqc2 $vf1, 0(%1)\n"
        "lqc2 $vf2, 0(%2)\n"
        "mfc1 %0, %4\n"
        "qmtc2.ni %0, $vf3\n"
        "vsub.xyzw $vf2, $vf2, $vf1\n"
        "vaddax.xyzw ACC, $vf1, $vf0x\n"
        "vmaddx.xyzw $vf2, $vf2, $vf3x\n"
        "sqc2 $vf2, 0(%3)\n"
        : "=r"(bits) : "r"(p + 0x90), "r"(p + 0xD0), "r"(p + 0x50), "f"(f1) : "memory");
    return 0;
}
// differs: float registers swapped (the f2 and f3 of the divide and the 0x1.0 constant in f1 against f0), about 40 instructions differ after the permutation search
#endif
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
#ifndef S128_DEFINED
#define S128_DEFINED
typedef __int128 s128;
#endif
void func_0020AA20(s32 arg0, u8 *arg1) {
    u8 *temp_s1;
    s32 temp_v1;
    u8 *temp_s0;
    func_0020A7F0(arg0);
    temp_s0 = D_005684C0 + (arg0 << 6);
    temp_s1 = D_005685C0 + (arg0 << 7);
    memset(temp_s0, 0, 0x40);
    memset(temp_s1, 0, 0x80);
    *(s32 *)((u8 *)temp_s0 + 4) = 0x10005;
    *(s32 *)((u8 *)temp_s1 + 4) = 0x20005;
    *(u8 **)((u8 *)temp_s0 + 0x24) = temp_s1;
    *(f32 *)((u8 *)temp_s0 + 0x30) = (f32)*(f32 *)((u8 *)arg1 + 0x10);
    *(f32 *)((u8 *)temp_s0 + 0x34) = (f32)*(f32 *)((u8 *)arg1 + 8);
    *(f32 *)((u8 *)temp_s0 + 0x38) = (f32)*(f32 *)((u8 *)arg1 + 0xC);
    *(s32 *)((u8 *)temp_s1 + 8) = (s32)((*(s32 *)((u8 *)arg1 + 4) << 0x10) + *(s32 *)((u8 *)arg1 + 0));
    *(s128 *)((u8 *)temp_s1 + 0x30) = (s128)*(s128 *)((u8 *)arg1 + 0x20);
    *(s128 *)((u8 *)temp_s1 + 0x40) = (s128)*(s128 *)((u8 *)arg1 + 0x20);
    *(f32 *)((u8 *)temp_s1 + 0x50) = (f32)*(f32 *)((u8 *)arg1 + 0x14);
    *(f32 *)((u8 *)temp_s1 + 0x54) = (f32)*(f32 *)((u8 *)arg1 + 0x18);
    *(s32 *)((u8 *)temp_s1 + 0x7C) = (s32)*(s32 *)((u8 *)arg1 + 0x1C);
    temp_v1 = *(s32 *)((u8 *)arg1 + 0);
    switch (temp_v1) {
        case 0:
            *(f32 *)((u8 *)temp_s1 + 0x58) = (f32)*(f32 *)((u8 *)arg1 + 0x30);
            *(f32 *)((u8 *)temp_s1 + 0x5C) = (f32)*(f32 *)((u8 *)arg1 + 0x34);
            *(f32 *)((u8 *)temp_s1 + 0x60) = (f32)*(f32 *)((u8 *)arg1 + 0x38);
            *(f32 *)((u8 *)temp_s1 + 0x64) = (f32)*(f32 *)((u8 *)arg1 + 0x3C);
            break;

        case 1:
            *(f32 *)((u8 *)temp_s1 + 0x68) = (f32)*(f32 *)((u8 *)arg1 + 0x30);
            *(f32 *)((u8 *)temp_s1 + 0x6C) = (f32)*(f32 *)((u8 *)arg1 + 0x34);
            *(f32 *)((u8 *)temp_s1 + 0x70) = (f32)*(f32 *)((u8 *)arg1 + 0x38);
            *(f32 *)((u8 *)temp_s1 + 0x74) = (f32)*(f32 *)((u8 *)arg1 + 0x3C);
            *(f32 *)((u8 *)temp_s1 + 0x78) = (f32)*(f32 *)((u8 *)arg1 + 0x40);
            break;
    }

    D_005687C0[arg0] = func_002096D0((s32)temp_s0, 0x10002, 0);
}

void func_0020ABB0(void) {
    D_005687CC[0] = 0;
    D_005687C8[0] = 0;
    D_005687C4[0] = 0;
    D_005687C0[0] = 0;
}
extern f32 func_0011F220(f32);
extern f32 func_0011F4C0(f32);
s32 func_0012EAE0(s32);
void func_00146F30(void *p);
void func_0020ABE0(V4Q *out, f32 a) {
    f32 y = func_0011F220(a);
    f32 r;
    f32 t;
    f32 ang;
    y = y + ((1.0f - y) * (f32)((u32)func_0012EAE0(8) & 0xFF)) / 255.0f;
    ang = 6.2831855f * ((f32)((u32)func_0012EAE0(8) & 0xFF) / 255.0f);
    t = 1.0f - y * y;
    /* FAKEMATCH: sqrt.s as inline asm; the compiler intrinsic (sqrtf) puts two hazard nops after it and hoists the f12 move, the original has neither */
    __asm__ volatile ("sqrt.s %0, %1" : "=f"(r) : "f"(t));
    out->x = r * func_0011F220(ang);
    out->y = y;
    out->z = r * func_0011F4C0(ang);
    out->w = 0x3F800000;
    func_00146F30(out);
}
/* Returns a base address in the 0x3000000 range chosen by sel (0..8), plus a and idx scaled; sel outside 0..8 returns whatever v0 held (no default in the original). */
s32 func_0020AD30(s32 a, s32 sel, s32 idx) {
    s32 r;
    switch (sel) {
    case 0:
        r = 0x3015000 + (a << 11) + (idx << 5);
        break;
    case 1:
        r = 0x3019000 + (a << 11) + (idx << 5);
        break;
    case 2:
        r = 0x3011000 + (a << 11) + (idx << 5);
        break;
    case 3:
        r = 0x3010000 + (idx << 5);
        break;
    case 4:
        r = 0x3002000 + idx * 48;
        break;
    case 5:
        r = 0x3006000 + a * 0x600 + idx * 48;
        break;
    case 6:
        r = 0x3004000 + a * 0x600 + idx * 48;
        break;
    case 7:
        r = 0x3001000 + (idx << 5);
        break;
    case 8:
        r = 0x3035000 + (a << 11) + (idx << 5);
        break;
    }
    return r;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020AE80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020B020);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020B1C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020B360);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020B600);
void DrawFlags_Apply(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_00133980(f32 a, f32 b, f32 c, f32 d);
void func_0013BC30(f32 a, f32 b, f32 c);
void func_0013E0A0(s32);
extern u8 D_00495718[];
extern u8 D_00495758[];
void func_0020BA60(p) u8 *p; {
    Copy16A t20;

    if (*(s32 *)(p + 0x88) != 0) {
        D_00470238 = 0;
        amModel_SetCurrent(*(s32 *)(p + 0x88), *(s32 *)(p + 0x20E4));
    }
    if (*(s32 *)(p + 0x20EC) & 8) {
        DrawFlags_Apply(0x700, 0, 0, 0x200, 0);
        func_00133980(*(f32 *)(p + 0x30), *(f32 *)(p + 0x34), *(f32 *)(p + 0x38), *(f32 *)(p + 0x2128));
    } else {
        DrawFlags_Apply(0x700, 0, 0, 0x300, 0);
        func_00133980(1.0f, 1.0f, 1.0f, *(f32 *)(p + 0x2128));
    }
    if (*(s32 *)(p + 0x20EC) & 0x80) {
        func_0013B160(p + 0x40);
        __asm__ volatile (
            "sqc2 $vf31, 0(%0)\n"
            "vmove.xyzw $vf28, $vf24\n"
            "vmove.xyzw $vf29, $vf25\n"
            "vmove.xyzw $vf30, $vf26\n"
            "vmove.xyzw $vf31, $vf27\n"
            : : "r"(&t20) : "memory");
        func_0020D5C0(p + 0x40, 0, &t20, (u8 *)7);
    }
    *(f32 *)D_00495718 = *(f32 *)(p + 0x2120);
    *(f32 *)D_00495758 = *(f32 *)(p + 0x2124);
    func_0013B0B0((u8 *)0);
    func_0013B960(p + 0x40);
    func_0013BC30(*(f32 *)(p + 0x2130), *(f32 *)(p + 0x2130), *(f32 *)(p + 0x2130));
    func_0013E0A0(*(s32 *)(p + 0x94));
    func_0013B110(1);
    *(s32 *)D_00495718 = 0;
    *(s32 *)D_00495758 = 0;
    DrawFlags_Apply(0, 0x700, 0, 0, 0);
}
extern void amMotion_Update(void *m, s32 x);

extern void amMotion_Update(void *m, s32 x);

extern void amMotion_Update(void *m, s32 x);

extern void amMotion_Update(void *m, s32 x);

extern void amMotion_Update(void *m, s32 x);

extern void amMotion_Update(void *m, s32 x);

extern void amMotion_Update(void *m, s32 x);

extern void amMotion_Update(void *m, s32 x);

#if 0
s32 func_0020BBD0(u8 *p, s32 s) {
    f32 lim;
    f32 f2;
    s32 v;
    u8 *obj;
    u8 *a3;
    s32 i;
    s32 off;

    lim = *(f32 *)(p + 0x20F8) - 1.0f;
    if (gBattle != 0) {
        v = *(s32 *)(gBattle + 0x88EC);
    } else {
        v = 0;
    }
    if (v != 0) {
        return 0;
    }
    if (*(u8 **)(p + 0x9C) == 0) {
        return 0;
    }
    if (*(s32 *)(p + 0x20EC) & 0x10) {
        *(f32 *)(p + 0x20F0) = *(f32 *)(p + 0x20F0) + *(f32 *)(p + 0x20FC);
    } else {
        if (gBattle != 0) {
            f2 = *(f32 *)(gBattle + 0x88F0);
        } else {
            if (D_004703F4 != 3) {
                f2 = 1.0f;
            } else {
                f2 = 1.2f;
            }
        }
        *(f32 *)(p + 0x20F0) = *(f32 *)(p + 0x20F0) + *(f32 *)(p + 0x20FC) * f2;
    }
    if (*(f32 *)(p + 0x20F0) < 0.0f) {
        *(f32 *)(p + 0x20F0) = 0.0f;
    }
    if (*(f32 *)(p + 0x20F0) > lim) {
        if (s != 0) {
            *(f32 *)(p + 0x20F0) = *(f32 *)(p + 0x20F0) - lim;
        } else {
            *(f32 *)(p + 0x20F0) = lim;
        }
        s = 1;
    } else {
        s = 0;
    }
    obj = *(u8 **)(p + 0x9C);
    a3 = obj + 0x41C;
    if (*(s32 *)(obj + 0x41C) != *(s32 *)(p + 0x2100)) {
        if (0 < *(s32 *)(obj + 0x418)) {
            i = 0;
            off = 0;
            do {
                *(s32 *)(*(u8 **)(a3 + 0x10) + off + 0x30) = -1;
                *(s32 *)(*(u8 **)(a3 + 0x10) + off + 0x34) = -1;
                *(s32 *)(*(u8 **)(a3 + 0x10) + off + 0x38) = -1;
                i++;
                off += 0x40;
            } while (i < *(s32 *)(obj + 0x418));
        }
        *(f32 *)(a3 + 0xC) = -1.0f;
    }
    *(s32 *)a3 = *(s32 *)(p + 0x2100);
    *(f32 *)(*(u8 **)(p + 0x9C) + 0x424) = *(f32 *)(p + 0x20F0);
    amMotion_Update(*(u8 **)(p + 0x9C), 0);
    return s;
}
// differs: the motion constant (1.2f or 1.0f) is loaded in another order: the original loads the lui of 0x3F99 into the beq delay slot and the lb of D_004703F4 is laid out before the gBattle branch; 84 of the instructions differ after the first shift
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020BBD0);
#if 0
void func_0020BDB0(u8 *p) {
    f32 k;
    f32 f1;

    if ((gBattle != 0) ? *(s32 *)(gBattle + 0x88EC) : 0) {
        return;
    }
    if (gBattle == 0) {
        k = (D_004703F4 == 3) ? 1.2f : 1.0f;
    } else {
        k = *(f32 *)(gBattle + 0x88F0);
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
        *(s32 *)(gWave + 0x84) -= 1;
        break;
    case 0x2:
        *(s32 *)(gWave + 0x7C) -= 1;
        break;
    case 0x40:
        *(s32 *)(gWave + 0x80) -= 1;
        break;
    case 0x4:
        *(s32 *)(gWave + 0x88) -= 1;
        break;
    case 0x10:
        *(s32 *)(gWave + 0x8C) -= 1;
        break;
    case 0x80:
        *(s32 *)(gWave + 0x90) -= 1;
        break;
    case 0x100:
        *(s32 *)(gWave + 0x94) -= 1;
        break;
    case 0x400:
        *(s32 *)(gWave + 0x98) -= 1;
        break;
    case 0x800:
        *(s32 *)(gWave + 0x9C) -= 1;
        break;
    }
    func_00209F40((s32)p);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020CCF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020CF60);
#if 0
void func_0020D120(u8 *out, u8 *x, s32 mode, f32 s) {
    Copy16A t40;
    u8 *a;
    u8 *b;
    s32 h;

    __asm__ volatile (
        "lqc2 $vf1, 0(%0)\n"
        "lqc2 $vf2, 0(%1)\n"
        "vsub.xyz $vf1, $vf1, $vf2\n"
        "sqc2 $vf1, 0(%2)\n"
        : : "r"(*(u8 **)(x + 0x1354) + 0x650), "r"(x + 0x650), "r"(&t40) : "memory");
    func_00146ED0(&t40, &t40, s);
    switch (mode) {
    case 0x19:
        h = 0x3F000000;
        a = x + 0x720;
        b = x + 0x710;
        __asm__ volatile (
            "mtc1 %2, $f0\n"
            "lqc2 $vf1, 0(%0)\n"
            "lqc2 $vf2, 0(%1)\n"
            "mfc1 %2, $f0\n"
            "nop\n"
            "qmtc2.ni %2, $vf3\n"
            "vsub.xyz $vf2, $vf2, $vf1\n"
            "vaddax.xyz ACC, $vf1, $vf0x\n"
            "vmaddx.xyz $vf1, $vf2, $vf3x\n"
            "sqc2 $vf1, 0(%3)\n"
            : "+r"(h) : "r"(a), "r"(b), "r"(out) : "memory");
        break;
    case 0x17:
        h = 0x3F000000;
        a = x + 0x740;
        b = x + 0x730;
        __asm__ volatile (
            "mtc1 %2, $f0\n"
            "lqc2 $vf1, 0(%0)\n"
            "lqc2 $vf2, 0(%1)\n"
            "mfc1 %2, $f0\n"
            "nop\n"
            "qmtc2.ni %2, $vf3\n"
            "vsub.xyz $vf2, $vf2, $vf1\n"
            "vaddax.xyz ACC, $vf1, $vf0x\n"
            "vmaddx.xyz $vf1, $vf2, $vf3x\n"
            "sqc2 $vf1, 0(%3)\n"
            : "+r"(h) : "r"(a), "r"(b), "r"(out) : "memory");
        break;
    case 0x18:
        h = 0x3F000000;
        a = x + 0x6E0;
        b = x + 0x6D0;
        __asm__ volatile (
            "mtc1 %2, $f0\n"
            "lqc2 $vf1, 0(%0)\n"
            "lqc2 $vf2, 0(%1)\n"
            "mfc1 %2, $f0\n"
            "nop\n"
            "qmtc2.ni %2, $vf3\n"
            "vsub.xyz $vf2, $vf2, $vf1\n"
            "vaddax.xyz ACC, $vf1, $vf0x\n"
            "vmaddx.xyz $vf1, $vf2, $vf3x\n"
            "sqc2 $vf1, 0(%3)\n"
            : "+r"(h) : "r"(a), "r"(b), "r"(out) : "memory");
        break;
    default:
        __asm__ volatile (
            "lqc2 $vf1, 0(%0)\n"
            "sqc2 $vf1, 0(%1)\n"
            : : "r"(x + 0x650 + mode * 16), "r"(out) : "memory");
        break;
    }
    __asm__ volatile (
        "lqc2 $vf1, 0(%0)\n"
        "lqc2 $vf2, 0(%1)\n"
        "vadd.xyz $vf1, $vf1, $vf2\n"
        "sqc2 $vf1, 0(%0)\n"
        : : "r"(out), "r"(&t40) : "memory");
}
// differs: 34 of 89 instructions differ: the mode switch is laid out in the other order (the original tests 0x19, 0x17, 0x18 with beq and places the 0x19 block last; a switch emits 0x18 first, an if chain puts the 0x19 block before the test), and the lerp asm takes the 0.5f constant in a0 instead of v1
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020D120);
void func_00146ED0(void *a, void *b, f32 s);

void func_00146ED0(void *a, void *b, f32 s);

void func_00146ED0(void *a, void *b, f32 s);

void func_00146ED0(void *a, void *b, f32 s);

void func_00146ED0(void *a, void *b, f32 s);

void func_00146ED0(void *a, void *b, f32 s);

void func_00146ED0(void *a, void *b, f32 s);

void func_00146ED0(void *a, void *b, f32 s);

void func_00146ED0(void *a, void *b, f32 s);

void func_00146ED0(void *a, void *b, f32 s);

void func_00146ED0(void *a, void *b, f32 s);

void func_00146ED0(void *a, void *b, f32 s);

void func_00146ED0(void *a, void *b, f32 s);

void func_00146ED0(void *a, void *b, f32 s);

#if 0
void func_0020D290(u8 *o, u8 *b, s32 mode, f32 f) {
    Copy16A t40;

    __asm__ volatile (
        "lqc2 $vf1, 0(%0)\n"
        "lqc2 $vf2, 0(%1)\n"
        "vsub.xyz $vf1, $vf1, $vf2\n"
        "sqc2 $vf1, 0(%2)\n"
        : : "r"(*(u8 **)(gBattle + 0x264)), "r"(b + 0x650), "r"(&t40) : "memory");
    func_00146ED0(&t40, &t40, f);
    if (mode == 0x19) {
        __asm__ volatile (
            "lqc2 $vf1, 0(%0)\n"
            "lqc2 $vf2, 0(%1)\n"
            "qmtc2.ni %2, $vf3\n"
            "vsub.xyz $vf2, $vf2, $vf1\n"
            "vaddax.xyz ACC, $vf1, $vf0x\n"
            "vmaddx.xyz $vf1, $vf2, $vf3x\n"
            "sqc2 $vf1, 0(%3)\n"
            : : "r"(b + 0x720), "r"(b + 0x710), "r"(0x3F000000), "r"(o) : "memory");
    }
    else if (mode == 0x17) {
        __asm__ volatile (
            "lqc2 $vf1, 0(%0)\n"
            "lqc2 $vf2, 0(%1)\n"
            "qmtc2.ni %2, $vf3\n"
            "vsub.xyz $vf2, $vf2, $vf1\n"
            "vaddax.xyz ACC, $vf1, $vf0x\n"
            "vmaddx.xyz $vf1, $vf2, $vf3x\n"
            "sqc2 $vf1, 0(%3)\n"
            : : "r"(b + 0x740), "r"(b + 0x730), "r"(0x3F000000), "r"(o) : "memory");
    }
    else if (mode == 0x18) {
        __asm__ volatile (
            "lqc2 $vf1, 0(%0)\n"
            "lqc2 $vf2, 0(%1)\n"
            "qmtc2.ni %2, $vf3\n"
            "vsub.xyz $vf2, $vf2, $vf1\n"
            "vaddax.xyz ACC, $vf1, $vf0x\n"
            "vmaddx.xyz $vf1, $vf2, $vf3x\n"
            "sqc2 $vf1, 0(%3)\n"
            : : "r"(b + 0x6E0), "r"(b + 0x6D0), "r"(0x3F000000), "r"(o) : "memory");
    }
    else {
        __asm__ volatile (
            "lqc2 $vf1, 0(%0)\n"
            "sqc2 $vf1, 0(%1)\n"
            : : "r"(b + mode * 16 + 0x650), "r"(o) : "memory");
    }
    __asm__ volatile (
        "lqc2 $vf1, 0(%0)\n"
        "lqc2 $vf2, 0(%1)\n"
        "vadd.xyz $vf1, $vf1, $vf2\n"
        "sqc2 $vf1, 0(%0)\n"
        : : "r"(o), "r"(&t40) : "memory");
}
// differs: about 70 lines differ: the prologue stores the parameters to saved registers in another order (the table-address computation comes first here), and the mode switch is laid out differently (the six case orders all give 70 to 71 differing lines)
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020D290);
#if 0
void func_0020D400(u8 *out, u8 *x, s32 k) {
    switch (k) {
    case 0x18:
        __asm__ volatile (
            "lqc2 $vf1, 0(%0)\n"
            "lqc2 $vf2, 0(%1)\n"
            "qmtc2.ni %2, $vf3\n"
            "vsub.xyz $vf2, $vf2, $vf1\n"
            "vaddax.xyz ACC, $vf1, $vf0x\n"
            "vmaddx.xyz $vf1, $vf2, $vf3x\n"
            "sqc2 $vf1, 0(%3)\n"
            : : "r"(x + 0x6E0), "r"(x + 0x6D0), "r"(0x3F000000), "r"(out) : "memory");
        break;
    case 0x17:
        __asm__ volatile (
            "lqc2 $vf1, 0(%0)\n"
            "lqc2 $vf2, 0(%1)\n"
            "qmtc2.ni %2, $vf3\n"
            "vsub.xyz $vf2, $vf2, $vf1\n"
            "vaddax.xyz ACC, $vf1, $vf0x\n"
            "vmaddx.xyz $vf1, $vf2, $vf3x\n"
            "sqc2 $vf1, 0(%3)\n"
            : : "r"(x + 0x740), "r"(x + 0x730), "r"(0x3F000000), "r"(out) : "memory");
        break;
    case 0x19:
        __asm__ volatile (
            "lqc2 $vf1, 0(%0)\n"
            "lqc2 $vf2, 0(%1)\n"
            "qmtc2.ni %2, $vf3\n"
            "vsub.xyz $vf2, $vf2, $vf1\n"
            "vaddax.xyz ACC, $vf1, $vf0x\n"
            "vmaddx.xyz $vf1, $vf2, $vf3x\n"
            "sqc2 $vf1, 0(%3)\n"
            : : "r"(x + 0x720), "r"(x + 0x710), "r"(0x3F000000), "r"(out) : "memory");
        break;
    default:
        __asm__ volatile (
            "lqc2 $vf1, 0(%0)\n"
            "sqc2 $vf1, 0(%1)\n"
            : : "r"(x + k * 16 + 0x650), "r"(out) : "memory");
        break;
    }
}
// differs: the switch on 0x18, 0x17, 0x19 is laid out as a beq chain in the other order (blocks 0x18, 0x17, 0x19 then the default copy), and the 0.5f constant comes from lui and mtc1 in the original; the four blocks match
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020D400);
void func_0020D500(u8 *out, u8 *src, u8 *x, s32 idx) {
    Copy16A blk[4];

    func_0013B160(x);
    func_0013B960(*(u8 **)(*(u8 **)(x + 0xB88) + 0x408) + idx * 64);
    __asm__ volatile (
        "sqc2 $vf28, 0(%0)\n"
        "sqc2 $vf29, 0x10(%0)\n"
        "sqc2 $vf30, 0x20(%0)\n"
        "sqc2 $vf31, 0x30(%0)\n"
        "vmove.xyzw $vf28, $vf24\n"
        "vmove.xyzw $vf29, $vf25\n"
        "vmove.xyzw $vf30, $vf26\n"
        "vmove.xyzw $vf31, $vf27\n"
        : : "r"(&blk[0]) : "memory");
    func_0013B0B0(0);
    func_0013B960((u8 *)&blk[0]);
    __asm__ volatile (
        "lqc2 $vf1, 0(%0)\n"
        "vmulax.xyzw ACC, $vf28, $vf1x\n"
        "vmadday.xyzw ACC, $vf29, $vf1y\n"
        "vmaddaz.xyzw ACC, $vf30, $vf1z\n"
        "vmaddw.xyzw $vf1, $vf31, $vf0w\n"
        "sqc2 $vf1, 0(%1)\n"
        : : "r"(src), "r"(out) : "memory");
    func_0013B110(1);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020D5C0);
void func_0020D780(void *out) {
    Copy16A tmp;
    u8 *p;

    p = *(u8 **)(gBattle + 0x264);
    __asm__ volatile (
        "addiu $v1, %0, 0x10\n"
        "lqc2 $vf1, 0($v1)\n"
        "lqc2 $vf2, 0(%0)\n"
        "vsub.xyz $vf1, $vf1, $vf2\n"
        "sqc2 $vf1, 0(%1)\n"
        : : "r"(p), "r"(&tmp) : "memory");
    __asm__ volatile ("lqc2 $vf1, 0(%0)\n\tsqc2 $vf1, 0(%1)" : : "r"(&tmp), "r"(out) : "memory");
}
#if 0
typedef struct V4A {
    f32 x;
    f32 y;
    f32 z;
    s32 w;
} __attribute__((aligned(16))) V4A;
typedef struct Cfg20 {
    V4A v;
    f32 e;
} Cfg20;
extern u8 D_0044BA20[];
extern s32 D_0046FD5C;
s32 amDraw3d_SetTexFrame(s32, s32, s32, void *);
void amDraw3d_Flip(void *, s32);
void amDraw_SetScissor(void *, s32);
void func_00133780(s32, s32);
s32 amGs_SetReg32(s32, s32);
s32 amDma_Request(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00136E80(s32, u8 *, s32, s32, s32);
void func_00137560(void *, void *);
void func_00131B90(void *);
void func_00131F00(void *, f32, f32);
void func_00132DF0(s32);
void func_0020D7C0(void) {
    u64 q;
    u8 c80[96];
    Cfg20 c70;
    f32 v50[4];
    f32 v40[4];
    Cfg20 *src;
    s32 s0;
    s32 s2;
    s32 val;

    src = (Cfg20 *)D_0044BA20;
    c70.v = src->v;
    c70.e = src->e;
    val = (s32)(*(u32 *)&D_0046FD5C >> 5);
    c70.v.w = val;
    *(s32 *)&c70.e = val;
    s0 = amDraw3d_SetTexFrame(0, 1, 0, 0);
    amDraw3d_Flip(&c70, 0);
    func_00131B90(c80);
    func_00131F00(c80, 0.0f, 0.0f);
    amDraw_SetScissor(0, 0);
    func_00133780(0, 1);
    s2 = amGs_SetReg32(0, 0x30002);
    amDma_Request(0, 1, 1, 0, 0, (u32)s0 & 0x0FFFFFFF, 6, 0);
    func_00136E80(0x40000424, 0, -1, 0x44, 5);
    v50[0] = 0.0f;
    v50[1] = 0.0f;
    v50[2] = 1.0f;
    v50[3] = 1.0f;
    v40[0] = 0.0f;
    v40[1] = 0.0f;
    v40[2] = 1.0f;
    v40[3] = 1.0f;
    func_00137560(v50, v40);
    v50[0] = 256.0f;
    v50[1] = 256.0f;
    v40[0] = 512.0f;
    v40[1] = 448.0f;
    func_00137560(v50, v40);
    amDraw_FlushPacket();
    q = 0x0000008000000080ULL;
    *(s32 *)(gWave + 0x70) = amDraw3d_SetTexFrame(0, 1, 0, &q);
    amGs_SetReg32(0, s2);
    func_00133780(0, 0);
    amDraw3d_Flip(0, 0);
    func_00131F00(gBattle, 0.0f, 0.0f);
    func_00132DF0((s32)(gBattle + 0x60));
    amDraw_SetScissor(0, 0);
}
// differs: 116 of 122 instructions: the copy of the 20-byte struct from D_0044BA20 (lq/lwc1/sq/swc1 through one base) is scheduled with the call argument setup around it (the original has lq, lwc1, then the arg moves; ours hoists the moves above the copy or the lui into t1 instead of a0); tried: 20-byte struct (4 lwc1), whole-struct copy, local pointer, value local for the w store, 24 orders of the four register locals (perm.py): none better
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020D7C0);
s32 func_0020D9B0(void) {
    s32 old;

    old = (*(s32 *)(gWave + 0x78))++;
    if (*(s32 *)(gWave + 0x78) >= 8) {
        *(s32 *)(gWave + 0x78) = 0;
    }
    return old;
}
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
    u8 *g = gWave;
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
#if 0
typedef struct V4A {
    f32 x;
    f32 y;
    f32 z;
    s32 w;
} __attribute__((aligned(16))) V4A;
typedef struct Cfg20 {
    V4A v;
    f32 e;
} Cfg20;
extern u8 D_0044BA00[];
s32 amDraw3d_SetTexFrame(s32, s32, s32, void *);
void amDraw3d_Flip(void *, s32);
void amDraw_SetScissor(void *, s32);
void func_00133780(s32, s32);
s32 amGs_SetReg32(s32, s32);
s32 amDma_Request(s32, s32, s32, s32, s32, s32, s32, s32);
void func_00136E80(s32, u8 *, s32, s32, s32);
void func_00137560(void *, void *);
void func_0012EF80(u8 *, s32, s32);
void func_00131B90(void *);
void func_00131F00(void *, f32, f32);
void func_00132DF0(s32);
void func_0020DE40(s32 i) {
    u64 q;
    u8 c90[0x60];
    Cfg20 c70;
    f32 v60[4];
    f32 v50[4];
    u8 *g;
    u8 *p;
    Cfg20 *src;
    s32 s1;
    s32 s2;

    g = gWave;
    src = (Cfg20 *)D_0044BA00;
    c70.v = src->v;
    c70.e = src->e;
    c70.v.w = (s32)((*(u32 *)&D_0046FD5C >> 5) + 0x20);
    s1 = amDraw3d_SetTexFrame(0, 1, 0, 0);
    amVram_Set(0, D_0046FD5C, 0x400);
    amDraw3d_Flip(&c70, 0);
    func_00131B90(c90);
    func_00131F00(c90, 0.0f, 0.0f);
    amDraw_SetScissor(0, 0);
    func_00133780(0, 1);
    s2 = amGs_SetReg32(0, 0x30002);
    amDma_Request(0, 1, 1, 0, 0, (u32)s1 & 0x0FFFFFFF, 6, 0);
    p = D_00568C90 + i * 0x2140;
    func_00136E80(0x40000124, p + 0x30, -1, 0x44, 5);
    v60[0] = 0.0f;
    v60[1] = 0.0f;
    v60[2] = 0.0f;
    v60[3] = 1.0f;
    v50[0] = 0.0f;
    v50[1] = 0.0f;
    v50[2] = 1.0f;
    v50[3] = 1.0f;
    func_00137560(v60, v50);
    v60[0] = 256.0f;
    v60[1] = 256.0f;
    v50[0] = 512.0f;
    v50[1] = 448.0f;
    func_00137560(v60, v50);
    amDraw_FlushPacket();
    q = 0x0000008000000080ULL;
    s1 = amDraw3d_SetTexFrame(0, 1, 0, &q);
    func_0012EF80(g, s1, 6);
    func_00133780(0, 0);
    amGs_SetReg32(0, s2);
    amDraw3d_Flip(0, 0);
    func_00131F00(gBattle, 0.0f, 0.0f);
    func_00132DF0((s32)(gBattle + 0x60));
    amDraw_SetScissor(0, 0);
}
// differs: 16 of 139 instructions: the struct copy from D_0044BA00 (lq + lwc1 through one base register, the e load scheduled late) and the order of the arg setup before the copy; tried: 20-byte struct (4 lwc1), whole-struct copy (lq lq), local u8 pointer, inline cast; frame 0x100 and the second call match
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020DE40);
extern void amMotion_BuildMatrices(void *m);

void func_0020E070(s32 i, u8 *o) {
    u8 *s1;
    u8 *m;

    s1 = D_00568C90 + i * 0x2140;
    if (*(u8 **)(s1 + 0x9C) != 0) {
        func_0013B0B0(0);
        amMotion_BuildMatrices(*(u8 **)(s1 + 0x9C));
        m = *(u8 **)(s1 + 0x9C);
        func_0013B160(*(u8 **)(m + 0x408) + *(s32 *)(m + 0x40C) * 64);
        __asm__ volatile (
            "sqc2 $vf31, 0(%0)\n"
            "lqc2 $vf1, 0(%0)\n"
            "lqc2 $vf2, 0(%1)\n"
            "vadd.xyz $vf1, $vf1, $vf2\n"
            "sqc2 $vf1, 0(%0)\n"
            "vmove.xyzw $vf28, $vf24\n"
            "vmove.xyzw $vf29, $vf25\n"
            "vmove.xyzw $vf30, $vf26\n"
            "vmove.xyzw $vf31, $vf27\n"
            : : "r"(o), "r"(s1) : "memory");
        func_0013B110(1);
    }
}
void func_00146F30(void *p);
void func_00141C30(void *a, void *b, void *c);
void func_00141CF0(void *a, void *b, void *c);

void func_00146F30(void *p);
void func_00141C30(void *a, void *b, void *c);
void func_00141CF0(void *a, void *b, void *c);

void func_00146F30(void *p);
void func_00141C30(void *a, void *b, void *c);
void func_00141CF0(void *a, void *b, void *c);

void func_00146F30(void *p);
void func_00141C30(void *a, void *b, void *c);
void func_00141CF0(void *a, void *b, void *c);

void func_00146F30(void *p);
void func_00141C30(void *a, void *b, void *c);
void func_00141CF0(void *a, void *b, void *c);

#if 0
void func_0020E120(s32 i, s32 j) {
    u8 *s0;
    u8 *pa;
    u8 *pb;
    Copy16A t3;
    Copy16A t2;
    Copy16A t1;
    Copy16A t4;

    s0 = D_00568C90 + i * 0x2140;
    pa = *(u8 **)(gBattle + j * 4 + 0x8934);
    pb = *(u8 **)(gBattle + (1 - j) * 4 + 0x8934);
    t2.a = 0;
    t2.b = 0x3F800000;
    t2.c = 0;
    t2.d = 0x3F800000;
    __asm__ volatile (
        "lqc2 $vf1, 0(%0)\n"
        "lqc2 $vf2, 0(%1)\n"
        "vsub.xyz $vf1, $vf1, $vf2\n"
        "sqc2 $vf1, 0(%2)\n"
        : : "r"(pb + 0x650), "r"(pa + 0x650), "r"(&t1) : "memory");
    func_00146F30(&t1);
    func_00141C30(&t3, &t2, &t1);
    func_0013B160(s0 + 0x40);
    __asm__ volatile (
        "sqc2 $vf31, 0(%0)\n"
        "vmove.xyzw $vf28, $vf24\n"
        "vmove.xyzw $vf29, $vf25\n"
        "vmove.xyzw $vf30, $vf26\n"
        "vmove.xyzw $vf31, $vf27\n"
        : : "r"(&t4) : "memory");
    func_00141CF0(s0 + 0x40, &t3, &t4);
}
// differs: the address arithmetic and the loads of the two table pointers are scheduled in another order (about 10 instructions in temporaries); the stack slots and the calls match
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020E120);
void func_0013B160(void *p);
void func_0020D5C0(void *a, s32 b, void *c, u8 *d);

void func_0020E210(s32 i, u8 *src) {
    u8 *s1;
    Copy16A tmp;

    s1 = D_00568C90 + i * 0x2140;
    func_0013B160(s1 + 0x40);
    __asm__ volatile (
        "sqc2 $vf31, 0(%0)\n"
        "vmove.xyzw $vf28, $vf24\n"
        "vmove.xyzw $vf29, $vf25\n"
        "vmove.xyzw $vf30, $vf26\n"
        "vmove.xyzw $vf31, $vf27\n"
        : : "r"(&tmp) : "memory");
    func_0020D5C0(s1 + 0x40, 0, &tmp, src);
}
#if 0
void func_0020E290(s32 i, u8 *x, s32 j) {
    u8 *s1;

    if (j != 1) {
        if (j == 0) {
            s1 = D_00568C90 + i * 0x2140;
            func_0013B160(s1 + 0x40);
            __asm__ volatile (
                "lqc2 $vf1, 0(%0)\n"
                "vmulx.xyz $vf28, $vf28, $vf1x\n"
                "vmuly.xyz $vf29, $vf29, $vf1y\n"
                "vmulz.xyz $vf30, $vf30, $vf1z\n"
                "addiu $v1, %1, 0x40\n"
                "sqc2 $vf28, 0($v1)\n"
                "sqc2 $vf29, 0x10($v1)\n"
                "sqc2 $vf30, 0x20($v1)\n"
                "sqc2 $vf31, 0x30($v1)\n"
                "vmove.xyzw $vf28, $vf24\n"
                "vmove.xyzw $vf29, $vf25\n"
                "vmove.xyzw $vf30, $vf26\n"
                "vmove.xyzw $vf31, $vf27\n"
                : : "r"(x), "r"(s1) : "memory");
        }
    } else {
        s1 = D_0058A090 + i * 3 * 64;
        func_0013B160(s1 + 0x50);
        __asm__ volatile (
            "lqc2 $vf1, 0(%0)\n"
            "vmulx.xyz $vf28, $vf28, $vf1x\n"
            "vmuly.xyz $vf29, $vf29, $vf1y\n"
            "vmulz.xyz $vf30, $vf30, $vf1z\n"
            "addiu $v1, %1, 0x50\n"
            "sqc2 $vf28, 0($v1)\n"
            "sqc2 $vf29, 0x10($v1)\n"
            "sqc2 $vf30, 0x20($v1)\n"
            "sqc2 $vf31, 0x30($v1)\n"
            "vmove.xyzw $vf28, $vf24\n"
            "vmove.xyzw $vf29, $vf25\n"
            "vmove.xyzw $vf30, $vf26\n"
            "vmove.xyzw $vf31, $vf27\n"
            : : "r"(x), "r"(s1) : "memory");
    }
}
// differs: same mode layout as func_0020E530: the j == 0 block is laid out out of line after a b, the nested form keeps it inline; the VU0 part matches
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020E290);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020E390);
void func_0013B2B0(u8 *x);

void func_0013B2B0(u8 *x);

void func_0013B2B0(u8 *x);

void func_0013B2B0(u8 *x);

#if 0
void func_0020E530(s32 i, u8 *x, s32 j) {
    u8 *s1;

    if (j != 1) {
        if (j == 0) {
            s1 = D_00568C90 + i * 0x2140;
            func_0013B160(s1 + 0x40);
            func_0013B2B0(x);
            __asm__ volatile (
                "addiu $v1, %0, 0x40\n"
                "sqc2 $vf28, 0($v1)\n"
                "sqc2 $vf29, 0x10($v1)\n"
                "sqc2 $vf30, 0x20($v1)\n"
                "sqc2 $vf31, 0x30($v1)\n"
                "vmove.xyzw $vf28, $vf24\n"
                "vmove.xyzw $vf29, $vf25\n"
                "vmove.xyzw $vf30, $vf26\n"
                "vmove.xyzw $vf31, $vf27\n"
                : : "r"(s1) : "memory");
        }
    } else {
        s1 = D_0058A090 + i * 3 * 64;
        func_0013B160(s1 + 0x50);
        func_0013B2B0(x);
        __asm__ volatile (
            "addiu $v1, %0, 0x50\n"
            "sqc2 $vf28, 0($v1)\n"
            "sqc2 $vf29, 0x10($v1)\n"
            "sqc2 $vf30, 0x20($v1)\n"
            "sqc2 $vf31, 0x30($v1)\n"
            "vmove.xyzw $vf28, $vf24\n"
            "vmove.xyzw $vf29, $vf25\n"
            "vmove.xyzw $vf30, $vf26\n"
            "vmove.xyzw $vf31, $vf27\n"
            : : "r"(s1) : "memory");
    }
}
// differs: the mode test is laid out as beq j,1 (out of line block) then beqz j with the j==0 block after the return: a nested if or a switch give other layouts; the stores and the calls match
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020E530);
#if 0
void func_0020E620(s32 i, u8 *src, s32 j) {
    u8 *s1;

    switch (j) {
    case 0:
        s1 = D_00568C90 + i * 0x2140;
        func_0013B160(s1 + 0x40);
        __asm__ volatile (
            "lqc2 $vf1, 0(%1)\n"
            "vmulax.xyzw ACC, $vf28, $vf1x\n"
            "vmadday.xyzw ACC, $vf29, $vf1y\n"
            "vmaddaz.xyzw ACC, $vf30, $vf1z\n"
            "vmaddw.xyzw $vf31, $vf31, $vf0w\n"
            "sqc2 $vf28, 0x40(%0)\n"
            "sqc2 $vf29, 0x50(%0)\n"
            "sqc2 $vf30, 0x60(%0)\n"
            "sqc2 $vf31, 0x70(%0)\n"
            "vmove.xyzw $vf28, $vf24\n"
            "vmove.xyzw $vf29, $vf25\n"
            "vmove.xyzw $vf30, $vf26\n"
            "vmove.xyzw $vf31, $vf27\n"
            : : "r"(s1), "r"(src) : "memory");
        break;
    case 1:
        s1 = D_0058A090 + i * 3 * 64;
        func_0013B160(s1 + 0x50);
        __asm__ volatile (
            "lqc2 $vf1, 0(%1)\n"
            "vmulax.xyzw ACC, $vf28, $vf1x\n"
            "vmadday.xyzw ACC, $vf29, $vf1y\n"
            "vmaddaz.xyzw ACC, $vf30, $vf1z\n"
            "vmaddw.xyzw $vf31, $vf31, $vf0w\n"
            "sqc2 $vf28, 0x50(%0)\n"
            "sqc2 $vf29, 0x60(%0)\n"
            "sqc2 $vf30, 0x70(%0)\n"
            "sqc2 $vf31, 0x80(%0)\n"
            "vmove.xyzw $vf28, $vf24\n"
            "vmove.xyzw $vf29, $vf25\n"
            "vmove.xyzw $vf30, $vf26\n"
            "vmove.xyzw $vf31, $vf27\n"
            : : "r"(s1), "r"(src) : "memory");
        break;
    }
}
// differs: best try 0xFC bytes vs 0x110 (switch on j with case 0 first, VU0 block as inline asm); the original tests j==1 first (beq to a block at the end), then beqz to the j==0 block, then b to the epilogue; not reproduced by if/else, return or switch shapes
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020E620);
void func_0013B160(void *p);
void func_0013B960(u8 *p);

void func_0013B160(void *p);
void func_0013B960(u8 *p);

void func_0020E730(s32 i, u8 *x, s32 j) {
    u8 *s2;

    s2 = D_00568C90 + i * 0x2140;
    func_0013B160(*(void **)(x + 0x568));
    func_0013B960(*(u8 **)(*(u8 **)(x + 0x538) + 0x408) + j * 64);
    __asm__ volatile (
        "addiu $v1, %0, 0x40\n"
        "sqc2 $vf28, 0($v1)\n"
        "sqc2 $vf29, 0x10($v1)\n"
        "sqc2 $vf30, 0x20($v1)\n"
        "sqc2 $vf31, 0x30($v1)\n"
        "vmove.xyzw $vf28, $vf24\n"
        "vmove.xyzw $vf29, $vf25\n"
        "vmove.xyzw $vf30, $vf26\n"
        "vmove.xyzw $vf31, $vf27\n"
        : : "r"(s2) : "memory");
}
void func_0020E7D0(s32 i, u8 *x, s32 j) {
    u8 *s2;

    s2 = D_00568C90 + i * 0x2140;
    func_0013B160(x);
    func_0013B960(*(u8 **)(*(u8 **)(x + 0xB88) + 0x408) + j * 64);
    __asm__ volatile (
        "addiu $v1, %0, 0x40\n"
        "sqc2 $vf28, 0($v1)\n"
        "sqc2 $vf29, 0x10($v1)\n"
        "sqc2 $vf30, 0x20($v1)\n"
        "sqc2 $vf31, 0x30($v1)\n"
        "vmove.xyzw $vf28, $vf24\n"
        "vmove.xyzw $vf29, $vf25\n"
        "vmove.xyzw $vf30, $vf26\n"
        "vmove.xyzw $vf31, $vf27\n"
        : : "r"(s2) : "memory");
}
void func_0013B160(void *p);

void func_0020E870(s32 i, u8 *src, s32 j) {
    u8 *s1;

    s1 = D_00568C90 + i * 0x2140;
    __asm__ volatile (
        "lqc2 $vf1, 0(%0)\n"
        "sqc2 $vf1, 0(%1)\n"
        : : "r"(src + j * 16), "r"(s1) : "memory");
    func_0013B160(s1 + 0x40);
    __asm__ volatile (
        "lqc2 $vf31, 0(%0)\n"
        "addiu $v1, %0, 0x40\n"
        "sqc2 $vf28, 0($v1)\n"
        "sqc2 $vf29, 0x10($v1)\n"
        "sqc2 $vf30, 0x20($v1)\n"
        "sqc2 $vf31, 0x30($v1)\n"
        "vmove.xyzw $vf28, $vf24\n"
        "vmove.xyzw $vf29, $vf25\n"
        "vmove.xyzw $vf30, $vf26\n"
        "vmove.xyzw $vf31, $vf27\n"
        : : "r"(s1) : "memory");
}
#if 0
void func_0020E8F0(s32 i, u8 *x, s32 mode) {
    u8 *s0;
    Copy16A t20;
    u8 *a;
    u8 *b;
    s32 h;

    s0 = D_00568C90 + i * 0x2140;
    if (mode == 0x19) {
        h = 0x3F000000;
        a = x + 0x720;
        b = x + 0x710;
        __asm__ volatile (
            "mtc1 %2, $f0\n"
            "lqc2 $vf1, 0(%0)\n"
            "lqc2 $vf2, 0(%1)\n"
            "mfc1 %2, $f0\n"
            "nop\n"
            "qmtc2.ni %2, $vf3\n"
            "vsub.xyz $vf2, $vf2, $vf1\n"
            "vaddax.xyz ACC, $vf1, $vf0x\n"
            "vmaddx.xyz $vf1, $vf2, $vf3x\n"
            "sqc2 $vf1, 0(%3)\n"
            : "+r"(h) : "r"(a), "r"(b), "r"(&t20) : "memory");
    } else if (mode == 0x17) {
        h = 0x3F000000;
        a = x + 0x740;
        b = x + 0x730;
        __asm__ volatile (
            "mtc1 %2, $f0\n"
            "lqc2 $vf1, 0(%0)\n"
            "lqc2 $vf2, 0(%1)\n"
            "mfc1 %2, $f0\n"
            "nop\n"
            "qmtc2.ni %2, $vf3\n"
            "vsub.xyz $vf2, $vf2, $vf1\n"
            "vaddax.xyz ACC, $vf1, $vf0x\n"
            "vmaddx.xyz $vf1, $vf2, $vf3x\n"
            "sqc2 $vf1, 0(%3)\n"
            : "+r"(h) : "r"(a), "r"(b), "r"(&t20) : "memory");
    } else if (mode == 0x18) {
        h = 0x3F000000;
        a = x + 0x6E0;
        b = x + 0x6D0;
        __asm__ volatile (
            "mtc1 %2, $f0\n"
            "lqc2 $vf1, 0(%0)\n"
            "lqc2 $vf2, 0(%1)\n"
            "mfc1 %2, $f0\n"
            "nop\n"
            "qmtc2.ni %2, $vf3\n"
            "vsub.xyz $vf2, $vf2, $vf1\n"
            "vaddax.xyz ACC, $vf1, $vf0x\n"
            "vmaddx.xyz $vf1, $vf2, $vf3x\n"
            "sqc2 $vf1, 0(%3)\n"
            : "+r"(h) : "r"(a), "r"(b), "r"(&t20) : "memory");
    } else {
        __asm__ volatile (
            "lqc2 $vf1, 0(%0)\n"
            "sqc2 $vf1, 0(%1)\n"
            : : "r"(x + 0x650 + mode * 16), "r"(&t20) : "memory");
    }
    __asm__ volatile (
        "lqc2 $vf1, 0(%0)\n"
        "sqc2 $vf1, 0(%1)\n"
        : : "r"(&t20), "r"(s0) : "memory");
    func_0013B160(s0 + 0x40);
    __asm__ volatile (
        "lqc2 $vf31, 0(%0)\n"
        "sqc2 $vf28, 0(%1)\n"
        "sqc2 $vf29, 0x10(%1)\n"
        "sqc2 $vf30, 0x20(%1)\n"
        "sqc2 $vf31, 0x30(%1)\n"
        "vmove.xyzw $vf28, $vf24\n"
        "vmove.xyzw $vf29, $vf25\n"
        "vmove.xyzw $vf30, $vf26\n"
        "vmove.xyzw $vf31, $vf27\n"
        : : "r"(&t20), "r"(s0 + 0x40) : "memory");
}
// differs: the mode tests are laid out as an if chain (blocks inline) where the original has beq chains 0x19, 0x17, 0x18 with the case blocks out of line (a switch gives the 0x18 test first); the lerp constant is in a0 instead of v1. Same family as 20D120 and 20E620
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020E8F0);
void func_00146F10(void *a, void *b, f32 s);

void func_00146F10(void *a, void *b, f32 s);

void func_00146F10(void *a, void *b, f32 s);

void func_00146F10(void *a, void *b, f32 s);

void func_00146F10(void *a, void *b, f32 s);

void func_00146F10(void *a, void *b, f32 s);

void func_00146F10(void *a, void *b, f32 s);

void func_00146F10(void *a, void *b, f32 s);

void func_00146F10(void *a, void *b, f32 s);

void func_00146F10(void *a, void *b, f32 s);

void func_00146F10(void *a, void *b, f32 s);

void func_00146F10(void *a, void *b, f32 s);

void func_00146F10(void *a, void *b, f32 s);

void func_00146F10(void *a, void *b, f32 s);

void func_00146F10(void *a, void *b, f32 s);

void func_00146F10(void *a, void *b, f32 s);

void func_00146F10(void *a, void *b, f32 s);

void func_00146F10(void *a, void *b, f32 s);

void func_00146F10(void *a, void *b, f32 s);

void func_00146F10(void *a, void *b, f32 s);

void func_00146F10(void *a, void *b, f32 s);

void func_00146F10(void *a, void *b, f32 s);

void func_00146F10(void *a, void *b, f32 s);

void func_00146F10(void *a, void *b, f32 s);

void func_00146F10(void *a, void *b, f32 s);

void func_00146F10(void *a, void *b, f32 s);

void func_00146F10(void *a, void *b, f32 s);

#if 0
void func_0020EA70(s32 i) {
    Copy16A t20;
    Copy16A t30;
    Copy16A t40;
    u8 *s0;

    s0 = D_00568C90 + i * 0x2140;
    __asm__ volatile (
        "lqc2 $vf1, 0x10(%0)\n"
        "lqc2 $vf2, 0(%0)\n"
        "vsub.xyz $vf1, $vf1, $vf2\n"
        "sqc2 $vf1, 0(%1)\n"
        : : "r"(*(u8 **)(gBattle + 0x264)), "r"(&t20) : "memory");
    __asm__ volatile (
        "lqc2 $vf1, 0(%0)\n"
        "sqc2 $vf1, 0(%1)\n"
        : : "r"(&t20), "r"(&t40) : "memory");
    func_00146F30(&t40);
    func_00146F10(&t40, &t40, *(f32 *)(s0 + 0x2138));
    __asm__ volatile (
        "lqc2 $vf1, 0(%0)\n"
        "lqc2 $vf2, 0(%1)\n"
        "vadd.xyz $vf1, $vf1, $vf2\n"
        "sqc2 $vf1, 0(%2)\n"
        : : "r"(*(u8 **)(gBattle + 0x264)), "r"(&t40), "r"(&t30) : "memory");
    __asm__ volatile (
        "lqc2 $vf1, 0(%0)\n"
        "lqc2 $vf2, 0(%1)\n"
        "vadd.xyz $vf1, $vf1, $vf2\n"
        "sqc2 $vf1, 0(%0)\n"
        : : "r"(&t30), "r"(s0 + 0x10) : "memory");
    __asm__ volatile (
        "lqc2 $vf1, 0(%0)\n"
        "sqc2 $vf1, 0(%1)\n"
        : : "r"(&t30), "r"(s0) : "memory");
    func_0013B160(s0 + 0x40);
    __asm__ volatile (
        "lqc2 $vf31, 0(%0)\n"
        "addiu $v1, %1, 0x40\n"
        "sqc2 $vf28, 0($v1)\n"
        "sqc2 $vf29, 0x10($v1)\n"
        "sqc2 $vf30, 0x20($v1)\n"
        "sqc2 $vf31, 0x30($v1)\n"
        "vmove.xyzw $vf28, $vf24\n"
        "vmove.xyzw $vf29, $vf25\n"
        "vmove.xyzw $vf30, $vf26\n"
        "vmove.xyzw $vf31, $vf27\n"
        : : "r"(&t30), "r"(s0) : "memory");
}
// differs: the stack slots of the three 16-byte temporaries and the base register differ (best of 24 declaration orders: 51 instructions differ); the VU0 chain (vsub, the two func_00146F30 / func_00146F10 calls, the vadd chain, the state block) is the same
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_0020EA70);
void func_0013B160(void *p);

void func_0013B160(void *p);

void func_0013B160(void *p);

void func_0013B160(void *p);

void func_0020EB70(s32 i, u8 *src) {
    u8 *s1;

    s1 = D_00568C90 + i * 0x2140;
    func_0013B160(s1 + 0x40);
    __asm__ volatile (
        "lqc2 $vf31, 0(%0)\n"
        "addiu $v1, %1, 0x40\n"
        "sqc2 $vf28, 0($v1)\n"
        "sqc2 $vf29, 0x10($v1)\n"
        "sqc2 $vf30, 0x20($v1)\n"
        "sqc2 $vf31, 0x30($v1)\n"
        "vmove.xyzw $vf28, $vf24\n"
        "vmove.xyzw $vf29, $vf25\n"
        "vmove.xyzw $vf30, $vf26\n"
        "vmove.xyzw $vf31, $vf27\n"
        : : "r"(src), "r"(s1) : "memory");
}
void func_0020EBF0(s32 i) {
    if (*(s8 *)(gBattle + 0x8975) != 1) {
        u8 *p = D_00568C90 + i * 0x2140;
        if (*(s32 *)(p + 0x94) != 0 && *(s32 *)(p + 0x9C) != 0) {
            func_0020BDB0(p);
            func_0020B600();
        }
    }
}
void func_00209D20(s32 a);

void func_0020EC70(s32 i) {
    u8 *s0;
    Copy16A t20;

    if (*(s8 *)(gBattle + 0x8975) == 1) {
        return;
    }
    s0 = D_00568C90 + i * 0x2140;
    if (*(s32 *)(s0 + 0x20E8) == 0) {
        return;
    }
    if (*(s32 *)(s0 + 0x94) != 0) {
        func_00208D60(*(s32 *)(s0 + 0x94));
    }
    if (*(s32 *)(s0 + 0x88) != 0) {
        D_00470238 = 0;
        amModel_SetCurrent(*(s32 *)(s0 + 0x88), *(s32 *)(s0 + 0x20E4));
    }
    if (*(s32 *)(s0 + 0x20EC) & 0x80) {
        func_0013B160(s0 + 0x40);
        __asm__ volatile (
            "sqc2 $vf31, 0(%0)\n"
            "vmove.xyzw $vf28, $vf24\n"
            "vmove.xyzw $vf29, $vf25\n"
            "vmove.xyzw $vf30, $vf26\n"
            "vmove.xyzw $vf31, $vf27\n"
            : : "r"(&t20) : "memory");
        func_0020D5C0(s0 + 0x40, 0, &t20, (u8 *)7);
    }
    func_0013B0B0(gBattle + 0x60);
    func_0013B960(s0 + 0x40);
    func_00209D20(0);
    __asm__ volatile (
        "lqc2 $vf28, 0(%0)\n"
        "lqc2 $vf29, 0x10(%0)\n"
        "lqc2 $vf30, 0x20(%0)\n"
        "lqc2 $vf31, 0x30(%0)\n"
        : : "r"(s0 + 0x40) : "memory");
    func_00208D70(*(s32 *)(s0 + 0x20E8));
    func_0013B110(1);
    func_00209C50();
}
void func_0020EDA0(s32 i) {
    if (*(s8 *)(gBattle + 0x8975) != 1) {
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
    if (gBattle != 0) {
        v = *(s32 *)(gBattle + 0x88EC);
    } else {
        v = 0;
    }
    if (v != 0) {
        return 0;
    }
    if ((*(s32 *)(p + 0x20EC) & 0x10) != 0) {
        *(f32 *)(p + 0x2104) = *(f32 *)(p + 0x2104) + *(f32 *)(p + 0x2110);
    } else {
        if (gBattle != 0) {
            f2 = *(f32 *)(gBattle + 0x88F0);
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
    if ((gBattle != 0 ? *(s32 *)(gBattle + 0x88EC) : 0) == 0) {
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
void func_0020F290(s32 arg0, s32 arg1) {
    u32 t;
    u8 *p;
    p = D_00568C90 + arg0 * 0x2140;
    *(s32 *)(p + 0x2114) = (s32)(arg1 | 0x10000);
    t = *(s32 *)(p + 0x2114);
    *(f32 *)(p + 0x210C) = (f32)*(s32 *)((t & 0xFFFF) * 0x10 + *(s32 *)(*(u8 **)((u8 *)((((s32)t >> 0x10) - 1) * 4) + (s32)p + 0xA4) + 0x14) + 8);
}
typedef struct { s32 a; s32 b; s32 v; s32 c; } F300E;
typedef struct { u8 pad[0x14]; F300E *e; } F300D;
typedef struct { u8 pad[0x46C]; F300D *d[1]; } F300C;
void func_0020F300(s32 arg0, s32 arg1) {
    u32 t;
    u8 *p;
    s32 k;
    p = D_00568C90 + arg0 * 0x2140;
    *(s32 *)(p + 0x2100) = (s32)(arg1 | 0x10000);
    t = *(s32 *)(p + 0x2100);
    k = ((s32)t >> 0x10) - 1;
    *(f32 *)(p + 0x20F8) = (f32)(*(F300C **)(p + 0x9C))->d[k]->e[t & 0xFFFF].v;
}
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
s32 func_0020B020(u8 *, s32, s32);
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
s32 func_0020B020(u8 *, s32, s32);
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
s32 func_0020F690(void) {
    s32 old;

    old = (*(s32 *)(gWave + 0x74))++;
    if (*(s32 *)(gWave + 0x74) >= 0x10) {
        *(s32 *)(gWave + 0x74) = 0;
    }
    return old;
}
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
                Obj_ResetF38(*(s32 *)(p + 0x20E8));
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
void func_0020D290(u8 *o, u8 *a1, s32 a2, f32 f);

void func_0020D290(u8 *o, u8 *a1, s32 a2, f32 f);

void func_0020D290(u8 *o, u8 *a1, s32 a2, f32 f);

void func_0020D290(u8 *o, u8 *a1, s32 a2, f32 f);

void func_0020D290(u8 *o, u8 *a1, s32 a2, f32 f);

void func_0020D290(u8 *o, u8 *a1, s32 a2, f32 f);

void func_0020D290(u8 *o, u8 *a1, s32 a2, f32 f);

void func_002114A0(u8 *a) {
    u8 *sa;
    u8 *sd;
    u8 *q;
    u8 *s1;

    q = gBattle + ((*(s16 *)(a + 0x1C) * 257) << 5) + 0x830;
    sa = a + 0x20;
    sd = D_00568C90 + *(s16 *)(a + 0x66) * 0x2140;
    if (*(s32 *)(a + 0x4C) & 0x40) {
        func_0020D290(sd, *(u8 **)(q + 0x1354), *(s32 *)(sa + 0x3C), *(f32 *)(sd + 0x18));
    } else {
        func_0020D290(sd, q, *(s32 *)(sa + 0x3C), *(f32 *)(sd + 0x18));
    }
    s1 = D_00568C90 + *(s16 *)(sa + 0x46) * 0x2140 + 0x40;
    func_0013B160(s1);
    __asm__ volatile (
        "lqc2 $vf31, 0(%0)\n"
        "sqc2 $vf28, 0(%1)\n"
        "sqc2 $vf29, 0x10(%1)\n"
        "sqc2 $vf30, 0x20(%1)\n"
        "sqc2 $vf31, 0x30(%1)\n"
        "vmove.xyzw $vf28, $vf24\n"
        "vmove.xyzw $vf29, $vf25\n"
        "vmove.xyzw $vf30, $vf26\n"
        "vmove.xyzw $vf31, $vf27\n"
        : : "r"(sd), "r"(s1) : "memory");
}
extern void func_00146ED0(void *a, void *b, f32 s);

void func_002115A0(u8 *a) {
    u8 *x;
    u8 *s1;
    Copy16A tmp;

    x = a + 0x20;
    func_00146ED0(&tmp, x + 0x10, *(f32 *)(x + 0x30));
    __asm__ volatile (
        "lqc2 $vf1, 0(%0)\n"
        "lqc2 $vf2, 0(%1)\n"
        "vadd.xyz $vf1, $vf1, $vf2\n"
        "sqc2 $vf1, 0(%0)\n"
        : : "r"(x), "r"(&tmp) : "memory");
    s1 = D_00568C90 + *(s16 *)(x + 0x46) * 0x2140 + 0x40;
    func_0013B160(s1);
    __asm__ volatile (
        "lqc2 $vf31, 0(%0)\n"
        "sqc2 $vf28, 0(%1)\n"
        "sqc2 $vf29, 0x10(%1)\n"
        "sqc2 $vf30, 0x20(%1)\n"
        "sqc2 $vf31, 0x30(%1)\n"
        "vmove.xyzw $vf28, $vf24\n"
        "vmove.xyzw $vf29, $vf25\n"
        "vmove.xyzw $vf30, $vf26\n"
        "vmove.xyzw $vf31, $vf27\n"
        : : "r"(x), "r"(s1) : "memory");
}
extern u8 *gWave;
void func_0020D7C0(void);

void func_00211650(void) {
    if (*(s32 *)(gWave + 0x70) == 0) {
        func_0020D7C0();
    }
}
extern u8 D_00568C90[];
s32 func_0020BBD0(u8 *, s32);

void func_00211680(u8 *a) {
    func_0020BBD0(D_00568C90 + *(s16 *)(a + 0x66) * 0x2140, 1);
}
void func_002116B0(u8 *p) {
    u8 *s1;
    u8 *s0;
    Copy16A t80;
    Copy16A t40[4];
    s32 a2;
    s32 k;
    s32 w;

    s1 = p + 0x20;
    a2 = *(s16 *)(p + 0x1C);
    k = a2 * 257;
    s0 = gBattle + (k << 5) + 0x830;
    if (*(s32 *)(p + 0x10) == 0) {
        return;
    }
    D_00470238 = 0;
    if (*(s32 *)(s1 + 0x20) != 0) {
        amModel_SetCurrent(*(s32 *)(s1 + 0x20), *(s32 *)(s1 + 0x28));
    }
    if (*(s32 *)(s1 + 0x24) != 0) {
        func_00208D60(*(s32 *)(s1 + 0x24));
    }
    __asm__ volatile (
        "lqc2 $vf1, 0(%0)\n"
        "sqc2 $vf1, 0(%1)\n"
        : : "r"(s1), "r"(&t80) : "memory");
    w = *(s32 *)(s1 + 0x2C);
    if (w & 1) {
        if (w & 0x40) {
            func_0020D290((u8 *)&t80, *(u8 **)(s0 + 0x1354), *(s32 *)(s1 + 0x3C), *(f32 *)(s1 + 0x8));
        } else {
            func_0020D290((u8 *)&t80, s0, *(s32 *)(s1 + 0x3C), *(f32 *)(s1 + 0x8));
        }
    }
    func_0013AFA0((u8 *)&t40[0]);
    func_0020D5C0(&t40[0], 0, &t80, (u8 *)7);
    func_0013B0B0(gBattle + 0x60);
    func_0013B960((u8 *)&t40[0]);
    func_00209D20(0);
    __asm__ volatile (
        "lqc2 $vf28, 0(%0)\n"
        "lqc2 $vf29, 0x10(%0)\n"
        "lqc2 $vf30, 0x20(%0)\n"
        "lqc2 $vf31, 0x30(%0)\n"
        : : "r"(&t40[0]) : "memory");
    func_00208D70(*(s32 *)(p + 0x10));
    func_0013B110(1);
    func_00209C50();
}
void func_002117F0(u8 *p) {
    u8 *q;
    u8 *s1;
    u8 *s0;
    s32 a3;
    s32 k;
    s32 bone;
    Copy16A t40[2];

    q = p + 0x20;
    a3 = *(s16 *)(p + 0x1C);
    k = a3 * 257;
    s1 = gBattle + (k << 5) + 0x830;
    s0 = D_00568C90 + *(s16 *)(p + 0x66) * 0x2140;
    func_0020CCF0(*(s16 *)(p + 0x5C), &t40[0]);
    if (*(s32 *)(s0 + 0x94) == 0) {
        return;
    }
    if (*(s32 *)(s0 + 0x9C) == 0) {
        return;
    }
    if (*(s32 *)(q + 0x2C) & 0x80) {
        func_0020CCF0(*(s16 *)(q + 0x3C), &t40[0]);
        if (*(s16 *)(q + 0x4C) != 0) {
            bone = amMotion_FindBone(*(s32 *)(*(s32 *)(*(s32 *)(s1 + 0x1354) + 0xB88) + 4), &t40[0]);
            s1 = *(u8 **)(s1 + 0x1354);
            func_0013B160(s1);
            func_0013B960(*(u8 **)(*(u8 **)(s1 + 0xB88) + 0x408) + bone * 64);
            __asm__ volatile (
                "sqc2 $vf28, 0(%0)\n"
                "sqc2 $vf29, 0x10(%0)\n"
                "sqc2 $vf30, 0x20(%0)\n"
                "sqc2 $vf31, 0x30(%0)\n"
                "vmove.xyzw $vf28, $vf24\n"
                "vmove.xyzw $vf29, $vf25\n"
                "vmove.xyzw $vf30, $vf26\n"
                "vmove.xyzw $vf31, $vf27\n"
                : : "r"(s0 + 0x40) : "memory");
        } else {
            bone = amMotion_FindBone(*(s32 *)(*(s32 *)(s1 + 0xB88) + 4), &t40[0]);
            func_0013B160(s1);
            func_0013B960(*(u8 **)(*(u8 **)(s1 + 0xB88) + 0x408) + bone * 64);
            __asm__ volatile (
                "sqc2 $vf28, 0(%0)\n"
                "sqc2 $vf29, 0x10(%0)\n"
                "sqc2 $vf30, 0x20(%0)\n"
                "sqc2 $vf31, 0x30(%0)\n"
                "vmove.xyzw $vf28, $vf24\n"
                "vmove.xyzw $vf29, $vf25\n"
                "vmove.xyzw $vf30, $vf26\n"
                "vmove.xyzw $vf31, $vf27\n"
                : : "r"(s0 + 0x40) : "memory");
        }
    }
    func_0020BDB0(s0);
    func_0020B600();
}
void func_00211980(u8 *p) {
    u8 *q;
    u8 *s1;
    u8 *s0;
    s32 a3;
    s32 k;
    s32 bone;
    Copy16A t40[2];

    q = p + 0x20;
    a3 = *(s16 *)(p + 0x1C);
    k = a3 * 257;
    s1 = gBattle + (k << 5) + 0x830;
    s0 = D_00568C90 + *(s16 *)(p + 0x66) * 0x2140;
    if (*(s32 *)(s0 + 0x94) == 0) {
        return;
    }
    if (*(s32 *)(q + 0x2C) & 0x80) {
        func_0020CCF0(*(s16 *)(q + 0x3C), &t40);
        if (*(s16 *)(q + 0x4C) != 0) {
            bone = amMotion_FindBone(*(s32 *)(*(s32 *)(*(s32 *)(s1 + 0x1354) + 0xB88) + 4), &t40);
            s1 = *(u8 **)(s1 + 0x1354);
            func_0013B160(s1);
            func_0013B960(*(u8 **)(*(u8 **)(s1 + 0xB88) + 0x408) + bone * 64);
            __asm__ volatile (
                "sqc2 $vf28, 0(%0)\n"
                "sqc2 $vf29, 0x10(%0)\n"
                "sqc2 $vf30, 0x20(%0)\n"
                "sqc2 $vf31, 0x30(%0)\n"
                "vmove.xyzw $vf28, $vf24\n"
                "vmove.xyzw $vf29, $vf25\n"
                "vmove.xyzw $vf30, $vf26\n"
                "vmove.xyzw $vf31, $vf27\n"
                : : "r"(s0 + 0x40) : "memory");
        } else {
            bone = amMotion_FindBone(*(s32 *)(*(s32 *)(s1 + 0xB88) + 4), &t40);
            func_0013B160(s1);
            func_0013B960(*(u8 **)(*(u8 **)(s1 + 0xB88) + 0x408) + bone * 64);
            __asm__ volatile (
                "sqc2 $vf28, 0(%0)\n"
                "sqc2 $vf29, 0x10(%0)\n"
                "sqc2 $vf30, 0x20(%0)\n"
                "sqc2 $vf31, 0x30(%0)\n"
                "vmove.xyzw $vf28, $vf24\n"
                "vmove.xyzw $vf29, $vf25\n"
                "vmove.xyzw $vf30, $vf26\n"
                "vmove.xyzw $vf31, $vf27\n"
                : : "r"(s0 + 0x40) : "memory");
        }
    }
    func_0020BDB0(s0);
    func_0020BA60();
}
extern s32 D_00470238;
void amModel_SetCurrent(s32, s32);
void func_00208D60(s32);
void func_0013B0B0(u8 *);
void func_0013B960(u8 *);
void func_00209D20(s32);
void func_0013B110(s32);
void func_00209C50(void);
void func_00211AF0(u8 *s1) {
    s16 x;
    u8 *s0;
    u8 *s2;

    x = *(s16 *)(s1 + 0x66);
    s0 = s1 + 0x20;
    s2 = D_00568C90 + x * 0x2140;
    if (*(u8 **)(s1 + 0x10) != 0) {
        D_00470238 = 0;
        if (*(s32 *)(s0 + 0x20) != 0) {
            amModel_SetCurrent(*(s32 *)(s0 + 0x20), *(s32 *)(s0 + 0x28));
        }
        if (*(s32 *)(s0 + 0x24) != 0) {
            func_00208D60(*(s32 *)(s0 + 0x24));
        }
        func_0013B0B0(gBattle + 0x60);
        func_0013B960(s2 + 0x40);
        func_00209D20(0);
        __asm__ volatile (
            "lqc2 $vf28, 0x0(%0)\n"
            "lqc2 $vf29, 0x10(%0)\n"
            "lqc2 $vf30, 0x20(%0)\n"
            "lqc2 $vf31, 0x30(%0)\n"
            : : "r"(s2 + 0x40) : "memory");
        func_00208D70(*(s32 *)(s1 + 0x10));
        func_0013B110(1);
        func_00209C50();
    }
}
#if 0
void func_00211BD0(u8 *p) {
    u8 *q;
    u8 *s1;
    u8 *s0;
    s32 a3;
    s32 k;
    s32 bone;
    Copy16A t60;
    Copy16A t40;
    Copy16A t80[2];

    q = p + 0x20;
    a3 = *(s16 *)(p + 0x1C);
    k = a3 * 257;
    s1 = gBattle + (k << 5) + 0x830;
    func_0020CCF0(*(s16 *)(p + 0x5C), &t40);
    if (*(s16 *)(q + 0x4C) != 0) {
        bone = amMotion_FindBone(*(s32 *)(*(s32 *)(*(s32 *)(s1 + 0x1354) + 0xB88) + 4), &t40);
        s1 = *(u8 **)(s1 + 0x1354);
        func_0013B160(s1);
        func_0013B960(*(u8 **)(*(u8 **)(s1 + 0xB88) + 0x408) + bone * 64);
        __asm__ volatile (
            "sqc2 $vf28, 0(%0)\n"
            "sqc2 $vf29, 0x10(%0)\n"
            "sqc2 $vf30, 0x20(%0)\n"
            "sqc2 $vf31, 0x30(%0)\n"
            "vmove.xyzw $vf28, $vf24\n"
            "vmove.xyzw $vf29, $vf25\n"
            "vmove.xyzw $vf30, $vf26\n"
            "vmove.xyzw $vf31, $vf27\n"
            : : "r"(&t60) : "memory");
    } else {
        bone = amMotion_FindBone(*(s32 *)(*(s32 *)(s1 + 0xB88) + 4), &t40);
        func_0013B160(s1);
        func_0013B960(*(u8 **)(*(u8 **)(s1 + 0xB88) + 0x408) + bone * 64);
        __asm__ volatile (
            "sqc2 $vf28, 0(%0)\n"
            "sqc2 $vf29, 0x10(%0)\n"
            "sqc2 $vf30, 0x20(%0)\n"
            "sqc2 $vf31, 0x30(%0)\n"
            "vmove.xyzw $vf28, $vf24\n"
            "vmove.xyzw $vf29, $vf25\n"
            "vmove.xyzw $vf30, $vf26\n"
            "vmove.xyzw $vf31, $vf27\n"
            : : "r"(&t60) : "memory");
    }
    if (*(s32 *)(p + 0x10) != 0) {
        D_00470238 = 0;
        s0 = q;
        if (*(s32 *)(s0 + 0x20) != 0) {
            amModel_SetCurrent(*(s32 *)(s0 + 0x20), *(s32 *)(s0 + 0x28));
        }
        if (*(s32 *)(s0 + 0x24) != 0) {
            func_00208D60(*(s32 *)(s0 + 0x24));
        }
        func_0013B0B0(gBattle + 0x60);
        func_0013B960((u8 *)&t60);
        __asm__ volatile (
            "lqc2 $vf28, 0(%0)\n"
            "lqc2 $vf29, 0x10(%0)\n"
            "lqc2 $vf30, 0x20(%0)\n"
            "lqc2 $vf31, 0x30(%0)\n"
            : : "r"(&t60) : "memory");
        func_00208D70(*(s32 *)(p + 0x10));
        func_0013B110(1);
        func_00209C50();
    }
}
// differs: 94 of 107 differ: the original frame is 0xA0 with the parameter in s2 and the struct base in s0 (ours: frame 0x70, the parameter kept in s3); unused extra locals are dropped by the compiler
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00211BD0);
void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

void func_00248640(s32 a, void *b, s32 c);

#if 0
void func_00211D80(u8 *a) {
    u8 *s;
    u8 *sl1;
    s32 a6;
    s32 v;
    s32 n;
    s32 a2;
    f32 f1;
    f32 f0;

    a6 = *(s16 *)(a + 0x1C);
    s = a + 0x20;
    sl1 = gBattle + (((a6 << 8) + a6) << 5) + 0x830;
    if (gBattle != 0) {
        v = *(s32 *)(gBattle + 0x88EC);
    } else {
        v = 0;
    }
    if (v != 0) {
        return;
    }
    v = 0;
    if (gBattle != 0) {
        if (*(s8 *)(gBattle + 0x8AB2) != 0) {
            if (*(f32 *)(gBattle + 0x891C) > 0.0f) {
                v = 1;
            }
        }
    }
    if (v != 0) {
        if (gBattle == 0) {
            v = -1;
        } else {
            if (*(s8 *)(gBattle + 0x8AB2) == 0) {
                v = -1;
            } else {
                if (*(f32 *)(gBattle + 0x891C) <= 0.0f) {
                    v = -1;
                } else {
                    v = *(s8 *)(gBattle + 0x8AB3);
                }
            }
        }
        if (a6 == v) {
            return;
        }
    }
    a2 = *(s32 *)(s + 0x14);
    v = *(s32 *)(s + 0x18);
    if (v < a2) {
        if (gBattle == 0) {
            if (D_004703F4 == 3) {
                f1 = 1.2f;
            } else {
                f1 = 1.0f;
            }
        } else {
            f1 = *(f32 *)(gBattle + 0x88F0);
        }
        f0 = (f32)*(s32 *)(s + 0x18) + f1;
        *(s32 *)(s + 0x18) = (s32)f0;
    } else {
        n = *(s16 *)(a + 0x1E);
        if (n == 0x400 || n == 2) {
            func_00248640(*(s16 *)(s + 0x24), sl1, *(s32 *)(s + 0x20));
        }
        *(s32 *)(s + 0x18) = 0;
    }
}
// differs: about 87 instructions differ: the locals get other registers (the loaded level value a6 sits in t0 where the original keeps it in a2), the branch layout of the nested gBattle tests differs, and the float to int store uses trunc.w.s where the original uses cvt.w.s
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00211D80);
extern V4Q D_0044B920;
extern s32 D_00470238;
void amModel_SetCurrent(s32, s32);
void func_00208D60(s32);
void func_00209CA0(void *, void *, void *);
void func_0013B110(s32);
void func_00209C50(void);

void func_00211F80(u8 *a0) {
    V4Q v;
    V4Q out;
    u8 *s0 = a0 + 0x20;
    v = D_0044B920;
    if (*(s32 *)(a0 + 0x10) != 0) {
        D_00470238 = 0;
        if (*(s32 *)(s0 + 0x20) != 0) {
            amModel_SetCurrent(*(s32 *)(s0 + 0x20), *(s32 *)(s0 + 0x28));
        }
        if (*(s32 *)(s0 + 0x24) != 0) {
            func_00208D60(*(s32 *)(s0 + 0x24));
        }
        __asm__ volatile (
            "lqc2 $vf1, 0(%1)\n"
            "lqc2 $vf2, 0(%2)\n"
            "vopmula.xyz ACC, $vf1, $vf2\n"
            "vopmsub.xyz $vf1, $vf2, $vf1\n"
            "sqc2 $vf1, 0(%0)\n"
            : : "r"(&out), "r"(&v), "r"(s0 + 0x10));
        func_00209CA0(s0, &v, &out);
        func_00208D70(*(s32 *)(a0 + 0x10));
        func_0013B110(1);
        func_00209C50();
    }
}
extern u8 D_0044B910[];
void func_00142100(void *a, void *b);

extern u8 D_0044B910[];
void func_00142100(void *a, void *b);

extern u8 D_0044B910[];
void func_00142100(void *a, void *b);

extern u8 D_0044B910[];
void func_00142100(void *a, void *b);

extern u8 D_0044B910[];
void func_00142100(void *a, void *b);

extern u8 D_0044B910[];
void func_00142100(void *a, void *b);

extern u8 D_0044B910[];
void func_00142100(void *a, void *b);

extern u8 D_0044B910[];
void func_00142100(void *a, void *b);

extern u8 D_0044B910[];
void func_00142100(void *a, void *b);

extern u8 D_0044B910[];
void func_00142100(void *a, void *b);

extern u8 D_0044B910[];
void func_00142100(void *a, void *b);

extern u8 D_0044B910[];
void func_00142100(void *a, void *b);

extern u8 D_0044B910[];
void func_00142100(void *a, void *b);

extern u8 D_0044B910[];
void func_00142100(void *a, void *b);

extern u8 D_0044B910[];
void func_00142100(void *a, void *b);

extern u8 D_0044B910[];
void func_00142100(void *a, void *b);

extern u8 D_0044B910[];
void func_00142100(void *a, void *b);

extern u8 D_0044B910[];
void func_00142100(void *a, void *b);

extern u8 D_0044B910[];
void func_00142100(void *a, void *b);

extern u8 D_0044B910[];
void func_00142100(void *a, void *b);

extern u8 D_0044B910[];
void func_00142100(void *a, void *b);

extern u8 D_0044B910[];
void func_00142100(void *a, void *b);

extern u8 D_0044B910[];
void func_00142100(void *a, void *b);

extern u8 D_0044B910[];
void func_00142100(void *a, void *b);

extern u8 D_0044B910[];
void func_00142100(void *a, void *b);

extern u8 D_0044B910[];
void func_00142100(void *a, void *b);

extern u8 D_0044B910[];
void func_00142100(void *a, void *b);

extern u8 D_0044B910[];
void func_00142100(void *a, void *b);

#if 0
void func_00212050(u8 *p) {
    u8 *s0;
    Copy16A t50;
    Copy16A t40;
    Copy16A t30;

    t40 = *(Copy16A *)D_0044B910;
    if (*(s32 *)(p + 0x10) != 0) {
        s0 = p + 0x20;
        D_00470238 = 0;
        if (*(s32 *)(s0 + 0x0) != 0) {
            amModel_SetCurrent(*(s32 *)(s0 + 0x0), *(s32 *)(s0 + 0x8));
        }
        if (*(s32 *)(s0 + 0x4) != 0) {
            func_00208D60(*(s32 *)(s0 + 0x4));
        }
        if ((gBattle != 0 ? *(s32 *)(gBattle + 0x88EC) : 0) == 0) {
            func_00146ED0(&t50, s0 + 0x10, *(f32 *)(s0 + 0x10));
            __asm__ volatile (
                "lqc2 $vf1, 0(%0)\n"
                "lqc2 $vf2, 0(%1)\n"
                "vadd.xyz $vf1, $vf1, $vf2\n"
                "sqc2 $vf1, 0(%0)\n"
                : : "r"(s0), "r"(&t50) : "memory");
        }
        func_0013B0B0(0);
        func_00141C30(&t30, &t40, s0 + 0x10);
        func_00142100(&t30, s0);
        func_00208D70(*(s32 *)(p + 0x10));
        func_0013B110(1);
    }
}
// differs: about 56 instructions differ: the parameter is kept in s1 and the base s0 = p + 0x20 in the second saved register, and the 16-byte stack slots are laid out in another order (the search over the declarations found nothing better)
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00212050);
#if 0
void func_00212160(u8 *a) {
    u8 *p;
    u8 *s0;
    Copy16A t30;
    Copy16A t40;

    p = a;
    if (*(s32 *)(p + 0x10) != 0) {
        s0 = p + 0x20;
        D_00470238 = 0;
        if (*(s32 *)(s0 + 0x0) != 0) {
            amModel_SetCurrent(*(s32 *)(s0 + 0x0), *(s32 *)(s0 + 0x8));
        }
        if (*(s32 *)(s0 + 0x4) != 0) {
            func_00208D60(*(s32 *)(s0 + 0x4));
        }
        func_0013B0B0(0);
        __asm__ volatile (
            "lqc2 $vf28, 0(%0)\n"
            "lqc2 $vf29, 0x10(%0)\n"
            "lqc2 $vf30, 0x20(%0)\n"
            "lqc2 $vf31, 0x30(%0)\n"
            : : "r"(gBattle + 0x60) : "memory");
        __asm__ volatile (
            "lqc2 $vf1, 0(%0)\n"
            "lqc2 $vf2, 0(%1)\n"
            "vsub.xyz $vf1, $vf1, $vf2\n"
            "sqc2 $vf1, 0(%2)\n"
            : : "r"(*(u8 **)(gBattle + 0x264)), "r"(s0), "r"(&t30) : "memory");
        func_00209D70(&t30);
        if ((gBattle != 0 ? *(s32 *)(gBattle + 0x88EC) : 0) == 0) {
            func_00146ED0(&t40, s0 + 0x10, *(f32 *)(s0 + 0x10));
            __asm__ volatile (
                "lqc2 $vf1, 0(%0)\n"
                "lqc2 $vf2, 0(%1)\n"
                "vadd.xyz $vf1, $vf1, $vf2\n"
                "sqc2 $vf1, 0(%0)\n"
                : : "r"(s0), "r"(&t40) : "memory");
        }
        func_0013B060(0);
        __asm__ volatile (
            "lqc2 $vf1, 0(%0)\n"
            "vmulax.xyzw ACC, $vf28, $vf1x\n"
            "vmadday.xyzw ACC, $vf29, $vf1y\n"
            "vmaddaz.xyzw ACC, $vf30, $vf1z\n"
            "vmaddw.xyzw $vf31, $vf31, $vf0w\n"
            : : "r"(s0) : "memory");
        func_00208D70(*(s32 *)(p + 0x10));
        func_0013B110(1);
        func_00209C50();
    }
}
// differs: 16 of 77 instructions differ: the original copies the parameter to s1 at entry (before the first test), this build copies it after the test; the VU0 part and the calls match
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00212160);
#if 0
void func_002122A0(u8 *p) {
    u8 *s1;
    u8 *s0;
    s32 a6;
    s32 k;
    s32 w;
    s32 idx;
    u8 *slot;
    u8 *base;
    u8 *g264;
    Copy16A t50;
    Copy16A t40;

    s1 = p + 0x20;
    a6 = *(s16 *)(p + 0x1C);
    k = a6 * 257;
    s0 = gBattle + (k << 5) + 0x830;
    if (*(s32 *)(p + 0x10) == 0) {
        return;
    }
    D_00470238 = 0;
    if (*(s32 *)(s1 + 0x20) != 0) {
        amModel_SetCurrent(*(s32 *)(s1 + 0x20), *(s32 *)(s1 + 0x28));
    }
    if (*(s32 *)(s1 + 0x24) != 0) {
        func_00208D60(*(s32 *)(s1 + 0x24));
    }
    func_0013B0B0((u8 *)0);
    w = *(s32 *)(s1 + 0x2C);
    if (w & 1) {
        if (w & 0x40) {
            func_0020D290((u8 *)&t50, *(u8 **)(s0 + 0x1354), *(s32 *)(s1 + 0x3C), *(f32 *)(s1 + 0x8));
        } else {
            func_0020D290((u8 *)&t50, s0, *(s32 *)(s1 + 0x3C), *(f32 *)(s1 + 0x8));
        }
        __asm__ volatile (
            "lqc2 $vf28, 0(%0)\n"
            "lqc2 $vf29, 0x10(%0)\n"
            "lqc2 $vf30, 0x20(%0)\n"
            "lqc2 $vf31, 0x30(%0)\n"
            : : "r"(gBattle + 0x60) : "memory");
        __asm__ volatile (
            "lqc2 $vf1, 0(%0)\n"
            "lqc2 $vf2, 0(%2)\n"
            "vsub.xyz $vf1, $vf1, $vf2\n"
            "sqc2 $vf1, 0(%1)\n"
            : : "r"(*(u8 **)(gBattle + 0x264)), "r"(&t40), "r"(&t50) : "memory");
        func_00209D70((u8 *)&t40);
        func_0013B060(0);
        __asm__ volatile (
            "lqc2 $vf1, 0(%0)\n"
            "vmulax.xyzw ACC, $vf28, $vf1x\n"
            "vmadday.xyzw ACC, $vf29, $vf1y\n"
            "vmaddaz.xyzw ACC, $vf30, $vf1z\n"
            "vmaddw.xyzw $vf31, $vf31, $vf0w\n"
            : : "r"(&t50) : "memory");
    } else {
        __asm__ volatile (
            "lqc2 $vf28, 0(%0)\n"
            "lqc2 $vf29, 0x10(%0)\n"
            "lqc2 $vf30, 0x20(%0)\n"
            "lqc2 $vf31, 0x30(%0)\n"
            : : "r"(gBattle + 0x60) : "memory");
        idx = *(s32 *)(s1 + 0x3C);
        base = s0 + (idx << 4);
        g264 = *(u8 **)(gBattle + 0x264);
        slot = base + 0x650;
        __asm__ volatile (
            "lqc2 $vf1, 0(%0)\n"
            "lqc2 $vf2, 0(%1)\n"
            "vsub.xyz $vf1, $vf1, $vf2\n"
            "sqc2 $vf1, 0(%2)\n"
            : : "r"(g264), "r"(slot), "r"(&t40) : "memory");
        func_00209D70((u8 *)&t40);
        func_0013B060(0);
        __asm__ volatile (
            "lqc2 $vf1, 0(%0)\n"
            "vmulax.xyzw ACC, $vf28, $vf1x\n"
            "vmadday.xyzw ACC, $vf29, $vf1y\n"
            "vmaddaz.xyzw ACC, $vf30, $vf1z\n"
            "vmaddw.xyzw $vf31, $vf31, $vf0w\n"
            : : "r"(s0 + (*(s32 *)(s1 + 0x3C) << 4) + 0x650) : "memory");
    }
    func_00208D70(*(s32 *)(p + 0x10));
    func_00209C50();
    func_0013B110(1);
}
// differs: 4 of 118 differ, all in the no-flag path (w & 1 clear): the table value goes to a1 and the slot address to v0 in the original; the register choice here follows the operand order (tried: operand orders, a slot pointer, a base pointer, the gBattle pointer as a local). The flag path matches
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_002122A0);
void func_0013B060(s32);
void func_00209D70(void *);

void func_00212480(u8 *a0) {
    u8 *s0 = a0 + 0x20;
    V4Q t;
    u8 *p2;
    if (*(s32 *)(a0 + 0x10) != 0) {
        D_00470238 = 0;
        if (*(s32 *)(s0 + 0x20) != 0) {
            amModel_SetCurrent(*(s32 *)(s0 + 0x20), *(s32 *)(s0 + 0x28));
        }
        if (*(s32 *)(s0 + 0x24) != 0) {
            func_00208D60(*(s32 *)(s0 + 0x24));
        }
        func_0013B0B0(0);
        __asm__ volatile (
            "lqc2 $vf28, 0x0(%0)\n"
            "lqc2 $vf29, 0x10(%0)\n"
            "lqc2 $vf30, 0x20(%0)\n"
            "lqc2 $vf31, 0x30(%0)\n"
            : : "r"((u8 *)gBattle + 0x60));
        p2 = *(u8 **)((u8 *)gBattle + 0x264);
        __asm__ volatile (
            "lqc2 $vf1, 0(%0)\n"
            "lqc2 $vf2, 0(%1)\n"
            "vsub.xyz $vf1, $vf1, $vf2\n"
            "sqc2 $vf1, 0(%2)\n"
            : : "r"(p2), "r"(s0), "r"(&t));
        func_00209D70(&t);
        func_0013B060(0);
        __asm__ volatile (
            "lqc2 $vf1, 0(%0)\n"
            "vmulax.xyzw $ACC, $vf28, $vf1x\n"
            "vmadday.xyzw $ACC, $vf29, $vf1y\n"
            "vmaddaz.xyzw $ACC, $vf30, $vf1z\n"
            "vmaddw.xyzw $vf31, $vf31, $vf0w\n"
            : : "r"(s0));
        func_00208D70(*(s32 *)(a0 + 0x10));
        func_00209C50();
        func_0013B110(1);
    }
}
void func_0020DA10(s32);

void func_00212560(s32 *a) {
    func_0020DA10(a[8]);
}
void func_00212570(u8 *s) {
    u8 *q = s + 0x20;
    u8 *p = D_00568C90 + *(s16 *)(s + 0x66) * 0x2140;
    if (*(s32 *)(s + 0x10) != 0) {
        Obj_ResetF38(*(s32 *)(s + 0x10));
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
        Obj_ResetF38(*(s32 *)(p + 0x10));
        *(s32 *)(p + 0x10) = 0;
    }
    func_0020F870(*(s16 *)(q + 0x46));
}
void func_00212650(u8 *p) {
    if (*(s32 *)(p + 0x10) != 0) {
        Obj_ResetF38(*(s32 *)(p + 0x10));
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
void func_00211BD0(u8 *a);
s32 func_0020AE80(u8 *, s32, s32);
s32 func_00209540(s32, s32, s32);
void func_002116B0(u8 *a);
void func_00212730(u8 *s) {
    u8 *v = func_00215320(*(s16 *)(*(u8 **)(s + 0x6C) + 0x1350), *(s16 *)(s + 0x50));
    if (v != 0) {
        u8 *q;
        u8 *m;
        s16 kind;
        s32 r;
        s32 f;

        *(void **)(v + 0x8) = (void *)func_002116B0;
        *(void **)(v + 0xC) = (void *)func_00212650;
        q = v + 0x20;
        *(f32 *)(v + 0x18) = *(f32 *)(s + 0x84);
        memset(q, 0, 0x50);
        kind = *(s16 *)(s + 0x50);
        m = *(u8 **)(*(u8 **)(s + 0x6C) + 0x1350);
        r = func_0020B020(m, *(s16 *)(s + 0x96), *(s16 *)(s + 0xA2));
        if (r != 0) {
            switch (kind) {
            case 1:
                if (m != 0) {
                    f = 0x4000020;
                } else {
                    f = 0x4000010;
                }
                break;
            case 2:
                if (m != 0) {
                    f = 0x4000008;
                } else {
                    f = 0x4000004;
                }
                break;
            case 4:
                if (m != 0) {
                    f = 0x400020;
                } else {
                    f = 0x400010;
                }
                break;
            case 8:
                f = 0x400008;
                break;
            case 0x10:
                f = 0x4000002;
                break;
            case 0x400:
                f = 0x4000040;
                break;
            case 0x800:
                if (m != 0) {
                    f = 0x4000100;
                } else {
                    f = 0x4000080;
                }
                break;
            default:
                f = 0;
                break;
            }
            *(s32 *)(v + 0x10) = func_00209540(r, f, 0);
        }
        m = *(u8 **)(*(u8 **)(s + 0x6C) + 0x1350);
        *(s32 *)(q + 0x20) = func_0020B020(m, *(s16 *)(s + 0x94), *(s16 *)(s + 0xA0));
        *(s32 *)(q + 0x28) = func_0020AD30((s32)m, *(s16 *)(s + 0x94), *(s16 *)(s + 0xA0));
        if (*(s16 *)(s + 0xA4) > 0) {
            *(s32 *)(q + 0x24) = func_0020AE80(m, *(s16 *)(s + 0x98), *(s16 *)(s + 0xA4));
        } else {
            *(s32 *)(q + 0x24) = 0;
        }
        if (*(s32 *)(v + 0x10) != 0) {
            __asm__ volatile ("lqc2 $vf1, 0x0(%1) ; sqc2 $vf1, 0x0(%0)" : : "r"(q), "r"(s));
            *(s32 *)(q + 0x3C) = *(s32 *)(s + 0x78);
            *(s16 *)(q + 0x48) = *(s16 *)(s + 0x5A);
            *(s16 *)(q + 0x4A) = *(s16 *)(s + 0x5C);
            *(s32 *)(q + 0x34) = *(s32 *)(s + 0x70);
            *(s16 *)(q + 0x44) = (s16)*(s32 *)(s + 0x68);
            *(f32 *)(q + 0x30) = *(f32 *)(s + 0x88);
            *(s32 *)(q + 0x2C) = *(s32 *)(s + 0x74);
        }
    }
}
// gc-park func_002129B0
#if 0
// differs: s16 extension of k doubled at the second func_00215320 call after the VU0 asm copy
void func_002114A0(u8 *a);
void func_00211AF0(u8 *a);
void func_00212600(u8 *p);
void func_0020F870(s32);
void func_0020D290(u8 *o, u8 *b, s32 mode, f32 f);
void func_002129B0(u8 *s) {
    s32 k = *(s32 *)(*(u8 **)(s + 0x6C) + 0x1350);
    u8 *v = func_00215320((s16)k, *(s16 *)(s + 0x50));
    u8 *q;
    u8 *s1;
    u8 *m;

    if (v == 0) {
        return;
    }
    *(void **)(v + 0x8) = (void *)func_002114A0;
    *(s32 *)(v + 0xC) = 0;
    if (*(f32 *)(s + 0x84)) {
        *(f32 *)(v + 0x18) = *(f32 *)(s + 0x84);
    } else {
        *(f32 *)(v + 0x18) = 100.0f;
    }
    q = v + 0x20;
    memset(q, 0, 0x50);
    s1 = D_00568C90 + *(s16 *)(s + 0x90) * 0x2140;
    func_0020F870(*(s16 *)(s + 0x90));
    __asm__ volatile ("lqc2 $vf1, 0x0(%1) ; sqc2 $vf1, 0x0(%0)" : : "r"(s1 + 0x10), "r"(s));
    *(s32 *)(q + 0x3C) = *(s32 *)(s + 0x78);
    *(s16 *)(q + 0x46) = *(s16 *)(s + 0x90);
    *(s16 *)(q + 0x48) = *(s16 *)(s + 0x5A);
    *(s16 *)(q + 0x4A) = *(s16 *)(s + 0x5C);
    *(s32 *)(q + 0x2C) = *(s32 *)(s + 0x74);
    v = func_00215320((s16)k, *(s16 *)(s + 0x50));
    if (v != 0) {
        s16 kind;
        s32 r;
        s32 f;

        *(void **)(v + 0x8) = (void *)func_00211AF0;
        *(void **)(v + 0xC) = (void *)func_00212600;
        q = v + 0x20;
        *(f32 *)(v + 0x18) = *(f32 *)(s + 0x84);
        memset(q, 0, 0x50);
        kind = *(s16 *)(s + 0x50);
        m = *(u8 **)(*(u8 **)(s + 0x6C) + 0x1350);
        r = func_0020B020(m, *(s16 *)(s + 0x96), *(s16 *)(s + 0xA2));
        if (r != 0) {
            switch (kind) {
            case 1:
                if (m != 0) {
                    f = 0x4000020;
                } else {
                    f = 0x4000010;
                }
                break;
            case 2:
                if (m != 0) {
                    f = 0x4000008;
                } else {
                    f = 0x4000004;
                }
                break;
            case 4:
                if (m != 0) {
                    f = 0x400020;
                } else {
                    f = 0x400010;
                }
                break;
            case 8:
                f = 0x400008;
                break;
            case 0x10:
                f = 0x4000002;
                break;
            case 0x400:
                f = 0x4000040;
                break;
            case 0x800:
                if (m != 0) {
                    f = 0x4000100;
                } else {
                    f = 0x4000080;
                }
                break;
            default:
                f = 0;
                break;
            }
            *(s32 *)(v + 0x10) = func_00209540(r, f, 0);
        }
        m = *(u8 **)(*(u8 **)(s + 0x6C) + 0x1350);
        *(s32 *)(q + 0x20) = func_0020B020(m, *(s16 *)(s + 0x94), *(s16 *)(s + 0xA0));
        *(s32 *)(q + 0x28) = func_0020AD30((s32)m, *(s16 *)(s + 0x94), *(s16 *)(s + 0xA0));
        if (*(s16 *)(s + 0xA4) > 0) {
            *(s32 *)(q + 0x24) = func_0020AE80(m, *(s16 *)(s + 0x98), *(s16 *)(s + 0xA4));
        } else {
            *(s32 *)(q + 0x24) = 0;
        }
        if (*(s32 *)(v + 0x10) != 0) {
            if (*(s32 *)(s + 0x74) & 0x40) {
                func_0020D290(s1, *(u8 **)(*(u8 **)(s + 0x6C) + 0x1354), *(s32 *)(s + 0x78), *(f32 *)(s1 + 0x18));
            } else {
                func_0020D290(s1, *(u8 **)(s + 0x6C), *(s32 *)(s + 0x78), *(f32 *)(s1 + 0x18));
            }
            m = D_00568C90 + *(s16 *)(s + 0x90) * 0x2140 + 0x40;
            func_0013B160(m);
            __asm__ volatile (
                "lqc2 $vf31, 0(%1)\n"
                "sqc2 $vf28, 0(%0)\n"
                "sqc2 $vf29, 0x10(%0)\n"
                "sqc2 $vf30, 0x20(%0)\n"
                "sqc2 $vf31, 0x30(%0)\n"
                "vmove.xyzw $vf28, $vf24\n"
                "vmove.xyzw $vf29, $vf25\n"
                "vmove.xyzw $vf30, $vf26\n"
                "vmove.xyzw $vf31, $vf27\n"
                : : "r"(m), "r"(s1) : "memory");
            func_00141CF0(s1 + 0x40, s + 0x40, s1);
            *(s16 *)(q + 0x46) = *(s16 *)(s + 0x90);
            *(s16 *)(q + 0x48) = *(s16 *)(s + 0x5A);
            *(s16 *)(q + 0x4A) = *(s16 *)(s + 0x5C);
            *(s32 *)(q + 0x34) = *(s32 *)(s + 0x70);
            *(s16 *)(q + 0x44) = *(s32 *)(s + 0x68);
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_002129B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00212DA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00213180);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00213570);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00213AE0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00213F30);
void func_00211BD0(u8 *a);
s32 func_0020AE80(u8 *, s32, s32);
s32 func_00209540(s32, s32, s32);
void func_00214370(u8 *s) {
    u8 *v = func_00215320(*(s16 *)(*(u8 **)(s + 0x6C) + 0x1350), *(s16 *)(s + 0x50));
    if (v != 0) {
        u8 *q;
        u8 *m;
        s16 kind;
        s32 r;
        s32 f;

        *(void **)(v + 0x8) = (void *)func_00211BD0;
        *(void **)(v + 0xC) = (void *)func_00212650;
        q = v + 0x20;
        *(f32 *)(v + 0x18) = *(f32 *)(s + 0x84);
        memset(q, 0, 0x50);
        kind = *(s16 *)(s + 0x50);
        m = *(u8 **)(*(u8 **)(s + 0x6C) + 0x1350);
        r = func_0020B020(m, *(s16 *)(s + 0x96), *(s16 *)(s + 0xA2));
        if (r != 0) {
            switch (kind) {
            case 1:
                if (m != 0) {
                    f = 0x4000020;
                } else {
                    f = 0x4000010;
                }
                break;
            case 2:
                if (m != 0) {
                    f = 0x4000008;
                } else {
                    f = 0x4000004;
                }
                break;
            case 4:
                if (m != 0) {
                    f = 0x400020;
                } else {
                    f = 0x400010;
                }
                break;
            case 8:
                f = 0x400008;
                break;
            case 0x10:
                f = 0x4000002;
                break;
            case 0x400:
                f = 0x4000040;
                break;
            case 0x800:
                if (m != 0) {
                    f = 0x4000100;
                } else {
                    f = 0x4000080;
                }
                break;
            default:
                f = 0;
                break;
            }
            *(s32 *)(v + 0x10) = func_00209540(r, f, 0);
        }
        m = *(u8 **)(*(u8 **)(s + 0x6C) + 0x1350);
        *(s32 *)(q + 0x20) = func_0020B020(m, *(s16 *)(s + 0x94), *(s16 *)(s + 0xA0));
        *(s32 *)(q + 0x28) = func_0020AD30((s32)m, *(s16 *)(s + 0x94), *(s16 *)(s + 0xA0));
        if (*(s16 *)(s + 0xA4) > 0) {
            *(s32 *)(q + 0x24) = func_0020AE80(m, *(s16 *)(s + 0x98), *(s16 *)(s + 0xA4));
        } else {
            *(s32 *)(q + 0x24) = 0;
        }
        if (*(s32 *)(v + 0x10) != 0) {
            *(s32 *)(q + 0x3C) = *(s32 *)(s + 0x78);
            *(s16 *)(q + 0x48) = *(s16 *)(s + 0x5A);
            *(s16 *)(q + 0x4A) = *(s16 *)(s + 0x5C);
            *(s32 *)(q + 0x34) = *(s32 *)(s + 0x70);
            *(s16 *)(q + 0x44) = *(s32 *)(s + 0x68);
            *(s16 *)(q + 0x4C) = *(s16 *)(s + 0xAE);
        }
    }
}
void func_002122A0(u8 *p);
void func_00209950(s32 a, void *b, s32 c);
void func_002145E0(u8 *s) {
    u8 *v = func_00215320(*(s16 *)(*(u8 **)(s + 0x6C) + 0x1350), *(s16 *)(s + 0x50));
    if (v != 0) {
        u8 *q;
        u8 *m;
        s16 kind;
        s32 r;
        s32 f;

        *(void **)(v + 0x8) = (void *)func_002122A0;
        *(void **)(v + 0xC) = (void *)func_00212650;
        q = v + 0x20;
        *(f32 *)(v + 0x18) = *(f32 *)(s + 0x84);
        memset(q, 0, 0x50);
        kind = *(s16 *)(s + 0x50);
        m = *(u8 **)(*(u8 **)(s + 0x6C) + 0x1350);
        r = func_0020B020(m, *(s16 *)(s + 0x96), *(s16 *)(s + 0xA2));
        if (r != 0) {
            switch (kind) {
            case 1:
                if (m != 0) {
                    f = 0x4000020;
                } else {
                    f = 0x4000010;
                }
                break;
            case 2:
                if (m != 0) {
                    f = 0x4000008;
                } else {
                    f = 0x4000004;
                }
                break;
            case 4:
                if (m != 0) {
                    f = 0x400020;
                } else {
                    f = 0x400010;
                }
                break;
            case 8:
                f = 0x400008;
                break;
            case 0x10:
                f = 0x4000002;
                break;
            case 0x400:
                f = 0x4000040;
                break;
            case 0x800:
                if (m != 0) {
                    f = 0x4000100;
                } else {
                    f = 0x4000080;
                }
                break;
            default:
                f = 0;
                break;
            }
            *(s32 *)(v + 0x10) = func_00209540(r, f, 0);
        }
        m = *(u8 **)(*(u8 **)(s + 0x6C) + 0x1350);
        *(s32 *)(q + 0x20) = func_0020B020(m, *(s16 *)(s + 0x94), *(s16 *)(s + 0xA0));
        *(s32 *)(q + 0x28) = func_0020AD30((s32)m, *(s16 *)(s + 0x94), *(s16 *)(s + 0xA0));
        if (*(s16 *)(s + 0xA4) > 0) {
            *(s32 *)(q + 0x24) = func_0020AE80(m, *(s16 *)(s + 0x98), *(s16 *)(s + 0xA4));
        } else {
            *(s32 *)(q + 0x24) = 0;
        }
        if (*(s32 *)(v + 0x10) != 0) {
            __asm__ volatile ("lqc2 $vf1, 0x0(%1) ; sqc2 $vf1, 0x0(%0)" : : "r"(q), "r"(s));
            if (*(s32 *)(s + 0x74) & 0x10) {
                func_00209950(*(s32 *)(v + 0x10), s + 0x40, 0);
            }
            *(s32 *)(q + 0x3C) = *(s32 *)(s + 0x78);
            *(s16 *)(q + 0x48) = *(s16 *)(s + 0x5A);
            *(s16 *)(q + 0x4A) = *(s16 *)(s + 0x5C);
            *(s32 *)(q + 0x34) = *(s32 *)(s + 0x70);
            *(s16 *)(q + 0x44) = *(s32 *)(s + 0x68);
            *(s32 *)(q + 0x2C) = *(s32 *)(s + 0x74);
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00214870);
void func_00209950(s32 a, void *b, s32 c);
void func_00214B50(u8 *s) {
    u8 *v = func_00215320(*(s16 *)(*(u8 **)(s + 0x6C) + 0x1350), *(s16 *)(s + 0x50));
    if (v != 0) {
        u8 *q;
        u8 *m;
        s16 kind;
        s32 r;
        s32 f;

        *(void **)(v + 0x8) = (void *)func_00212480;
        *(void **)(v + 0xC) = (void *)func_00212650;
        q = v + 0x20;
        *(f32 *)(v + 0x18) = *(f32 *)(s + 0x84);
        memset(q, 0, 0x50);
        kind = *(s16 *)(s + 0x50);
        m = *(u8 **)(*(u8 **)(s + 0x6C) + 0x1350);
        r = func_0020B020(m, *(s16 *)(s + 0x96), *(s16 *)(s + 0xA2));
        if (r != 0) {
            switch (kind) {
            case 1:
                if (m != 0) {
                    f = 0x4000020;
                } else {
                    f = 0x4000010;
                }
                break;
            case 2:
                if (m != 0) {
                    f = 0x4000008;
                } else {
                    f = 0x4000004;
                }
                break;
            case 4:
                if (m != 0) {
                    f = 0x400020;
                } else {
                    f = 0x400010;
                }
                break;
            case 8:
                f = 0x400008;
                break;
            case 0x10:
                f = 0x4000002;
                break;
            case 0x400:
                f = 0x4000040;
                break;
            case 0x800:
                if (m != 0) {
                    f = 0x4000100;
                } else {
                    f = 0x4000080;
                }
                break;
            default:
                f = 0;
                break;
            }
            *(s32 *)(v + 0x10) = func_00209540(r, f, 0);
        }
        m = *(u8 **)(*(u8 **)(s + 0x6C) + 0x1350);
        *(s32 *)(q + 0x20) = func_0020B020(m, *(s16 *)(s + 0x94), *(s16 *)(s + 0xA0));
        *(s32 *)(q + 0x28) = func_0020AD30((s32)m, *(s16 *)(s + 0x94), *(s16 *)(s + 0xA0));
        if (*(s16 *)(s + 0xA4) > 0) {
            *(s32 *)(q + 0x24) = func_0020AE80(m, *(s16 *)(s + 0x98), *(s16 *)(s + 0xA4));
        } else {
            *(s32 *)(q + 0x24) = 0;
        }
        if (*(s32 *)(v + 0x10) != 0) {
            if (*(s32 *)(s + 0x74) & 0x10) {
                func_00209950(*(s32 *)(v + 0x10), s + 0x40, 0);
            }
            __asm__ volatile ("lqc2 $vf1, 0x0(%1) ; sqc2 $vf1, 0x0(%0)" : : "r"(q), "r"(s));
            *(s16 *)(q + 0x48) = *(s16 *)(s + 0x5A);
            *(s16 *)(q + 0x4A) = *(s16 *)(s + 0x5C);
            *(s32 *)(q + 0x34) = *(s32 *)(s + 0x70);
            *(s16 *)(q + 0x44) = (s16)*(s32 *)(s + 0x68);
        }
    }
}
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

void func_00215040(s16 id, s16 mask, s16 k) {
    u8 *p;
    u8 *q;
    void (*f)(void *);

    p = *(u8 **)D_00568B90;
    while (p != D_00568C10) {
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
        p = *(u8 **)p;
    }
}
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
extern s32 func_00209F80(void);

u8 *func_00215320(s32 x, s32 y) {
    u8 *p;
    u8 *last;

    p = (u8 *)func_00209F80();
    if (p == 0) {
        return 0;
    }
    memset(p, 0, 0x80);
    last = *(u8 **)D_00568C14;
    *(u8 **)last = p;
    *(u8 **)(p + 4) = *(u8 **)D_00568C14;
    *(u8 **)D_00568C14 = p;
    *(u8 **)p = D_00568C10;
    *(s16 *)(p + 0x1C) = x;
    *(s16 *)(p + 0x1E) = y;
    switch ((s16)y) {
        case 0x1:
            *(s32 *)(gWave + 0x84) = *(s32 *)(gWave + 0x84) + 1;
            break;
        case 0x2:
            *(s32 *)(gWave + 0x7c) = *(s32 *)(gWave + 0x7c) + 1;
            break;
        case 0x40:
            *(s32 *)(gWave + 0x80) = *(s32 *)(gWave + 0x80) + 1;
            break;
        case 0x4:
            *(s32 *)(gWave + 0x88) = *(s32 *)(gWave + 0x88) + 1;
            break;
        case 0x10:
            *(s32 *)(gWave + 0x8c) = *(s32 *)(gWave + 0x8c) + 1;
            break;
        case 0x80:
            *(s32 *)(gWave + 0x90) = *(s32 *)(gWave + 0x90) + 1;
            break;
        case 0x100:
            *(s32 *)(gWave + 0x94) = *(s32 *)(gWave + 0x94) + 1;
            break;
        case 0x400:
            *(s32 *)(gWave + 0x98) = *(s32 *)(gWave + 0x98) + 1;
            break;
        case 0x800:
            *(s32 *)(gWave + 0x9c) = *(s32 *)(gWave + 0x9c) + 1;
            break;
    }
    return p;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00215500);
void func_00215900(void) {
    memset(gWave, 0, 0xA0);
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
    memset(gWave, 0, 0xA0);
}
void func_00215AE0(void) {
    Hm_Exit();
    func_00243F20();
    func_002472F0();
    memset(gWave, 0, 0xA0);
}
extern u8 D_00568B90[];
extern u8 D_00568C10[];
void func_0020CB90(void *);
void func_0020F700(s32);
void func_0020A7F0(s32);
void func_002185E0(void);
void Sp_KillTasks(void);
void func_00247410(void);

void func_00215B20(void)
{
  s32 temp_v0;
  u8 *var_s0;
  u8 *var_s0_2;
  var_s0 = (unsigned char *) (*((s32 *) D_00568B90));
  if (var_s0 != D_00568C10)
  {
    do
    {
      if ((((u64) (((s64) (*((s16 *) (((u8 *) var_s0) + 0x1E)))) << 0x20)) >> 0x20) != 0)
      {
        *((s32 *) (((u8 *) var_s0) + 8)) = -1;
        temp_v0 = *((s32 *) (((u8 *) var_s0) + 0xC));
        if (temp_v0 > 0)
        {
          ((s32 (*)(u8 *)) temp_v0)(var_s0);
        }
      }
      var_s0 = *((u8 **) (((u8 *) var_s0) + 0));
    }
    while (var_s0 != D_00568C10);
  }
  var_s0_2 = (unsigned char *) (*((s32 *) D_00568B90));
  if (var_s0_2 != D_00568C10)
  {
    do
    {
      if ((*((s32 *) (((u8 *) var_s0_2) + 8))) == (-1))
      {
        func_0020CB90(var_s0_2);
      }
      var_s0_2 = *((u8 **) (((u8 *) var_s0_2) + 0));
    }
    while (var_s0_2 != D_00568C10);
  }
  func_0020F700(-1);
  func_0020A7F0(-1);
  func_002185E0();
  Sp_KillTasks();
  func_00247410();
}



INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00215C10);
extern u8 *gWave;
extern u8 D_00568B90[];
extern u8 D_00568C10[];
extern s32 D_00568B94[];
extern u8 D_00568C14[];
extern void memset(void *, s32, s32);
void func_0020F870(s32);
void func_0020DA10(s32);
void Hm_Start(void);
void Ar_Start(void);
void func_00247500(void);

void func_00215D90(void) {
    memset(gWave, 0, 0xA0);
    memset(D_00568B90, 0, 0x80);
    memset(D_00568C10, 0, 0x80);
    D_00568B94[0] = 0;
    *(u8 **)D_00568B90 = D_00568C10;
    *(u8 **)D_00568C14 = D_00568B90;
    *(s32 *)D_00568C10 = 0;
    func_0020F870(-1);
    func_0020DA10(-1);
    Hm_Start();
    Ar_Start();
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
s32 Hm_IsBusy(void) {
    s32 r = 0;
    if (*(s32 *)(D_0046FDD0 + 0x1A0) != 0 || *(s32 *)(D_0046FDD0 + 0x1A4) != 0 ||
        *(s32 *)(gWave + 0x8C) != 0 || *(s32 *)(D_0046FDD0 + 0x1A8) != 0) {
        r = 1;
    }
    return r;
}
extern u8 *gBattle;

s32 func_00216080(s32 idx) {
    u8 *p = gBattle + ((idx * 0x101) << 5);
    u8 *q = p + 0x830;
    s32 v;
    s32 w;
    s32 r;

    v = *(s32 *)(p + 0x252C);
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
        if ((u32)(w - 0x46) <= 1u || w == 0x5B || w == 0x5C) {
            r = 0x20;
        } else {
            r = 0x1B;
        }
    }
    return r;
}
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
                Obj_ResetF38(*(s32 *)(D_0046FDD0 + off + 0x1A0));
                *(s32 *)(D_0046FDD0 + off + 0x1A0) = 0;
            }
            *(s32 *)(D_0046FDD0 + off + 0x190) = 0;
        }
    } else {
        off = idx * 4;
        if (*(s32 *)((s32)off + (s32)D_0046FDD0 + 0x188) != 0) {
            amTask_Kill(*(s32 *)((s32)off + (s32)D_0046FDD0 + 0x188));
            *(s32 *)((s32)off + (s32)D_0046FDD0 + 0x188) = 0;
        }
        if (*(s32 *)((s32)off + (s32)D_0046FDD0 + 0x1A0) != 0) {
            Obj_ResetF38(*(s32 *)((s32)off + (s32)D_0046FDD0 + 0x1A0));
            *(s32 *)((s32)off + (s32)D_0046FDD0 + 0x1A0) = 0;
        }
        *(s32 *)((s32)off + (s32)D_0046FDD0 + 0x190) = 0;
    }
}
#if 0
void *BtlCmd_GetMotEntry(void *, s32);
void *func_001A50F0(void *, s32);
s32 func_00127E88(void *, void *, s32);
void func_0020A100(void *);
extern u8 D_00469CD0[];
void *amObject_Create(void *, void *);
void amFile_Load(void *);
void amCdFs_Close(void *, s32);
void func_00216270(s32 unused) {
    u8 **pf = (u8 **)(D_0046FDD0 + 0x180);
    u8 *f = *pf;
    u8 *h;
    u8 *e;
    u8 *m;
    s32 i;
    s32 off;

    if (f != 0) {
        *pf = *(u8 **)(f + 0x40);
        *(u8 **)(D_0046FDD0 + 0x184) = *(u8 **)(*(u8 **)(f + 0x40) + 0x50);
        amFile_Load(*(u8 **)(D_0046FDD0 + 0x184));
        *(u8 **)(f + 0x40) = 0;
        amCdFs_Close(f, 0);
        h = *(u8 **)(D_0046FDD0 + 0x184);
        i = 0;
        if (0 < *(s32 *)(h + 0x10)) {
            off = 0;
            do {
                e = BtlCmd_GetMotEntry(h, i);
                m = func_001A50F0(h, i);
                if (*(s32 *)(e + 8) >= 0) {
                    amFile_Load(m);
                } else if (func_00127E88(m, D_00469CD0, 4) == 0) {
                    func_0020A100(m);
                }
                *(u8 **)(D_0046FDD0 + off) = m;
                if (*(s32 *)(e + 8) == 1) {
                    *(void **)(D_0046FDD0 + off + 0xC0) = amObject_Create(*(void **)(D_0046FDD0 + off), 0);
                }
                i++;
                off += 4;
            } while (i < *(s32 *)(h + 0x10));
        }
    }
}
// differs: mn=0, 17 of 88 differ (registers only): original keeps i in s3, entry in s2, m in s1 and loads D_0046FDD0 into a0 with pf (the &D->0x180 pointer) in v1; tsweep order sweep reaches 4 differing instructions (variant not recorded, run scripts/tsweep.py --mode order --out)
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00216270);
u8 *func_00215320(s32, s32);
s32 func_00209540(s32, s32, s32);
extern u8 *D_0046FDD0;
void memset(void *, s32, s32);
void func_00215EB0(void);
void func_00212650(u8 *p);

void func_002163D0(u8 *a) {
    u8 *p;
    s32 idx;
    u8 *q;
    s32 e;

    p = func_00215320(0, 0x400);
    idx = *(s16 *)(a + 0x20);
    if (p != 0) {
        *(s32 *)(p + 0x8) = (s32)func_00215EB0;
        *(s32 *)(p + 0xC) = (s32)func_00212650;
        *(s32 *)(p + 0x18) = 0x442F0000;
        q = p + 0x20;
        memset(q, 0, 0x50);
        e = *(s32 *)(D_0046FDD0 + idx * 4);
        if (e != 0) {
            *(s32 *)(p + 0x10) = func_00209540(e, 0x4000040, 0);
        }
        if (*(s32 *)(p + 0x10) != 0) {
            *(s32 *)(q + 0x20) = *(s32 *)(D_0046FDD0 + *(s16 *)(a + 0x22) * 4);
            *(s32 *)(q + 0x28) = (*(s16 *)(a + 0x22) << 5) + 0x03001000;
        }
    }
}
void func_00212050();

void func_00212050();

void func_00212050();

void func_002164D0(u8 *a) {
    u8 *p;
    u8 *q;
    s32 idx;
    s32 e;
    f32 f20;
    f32 g;

    p = func_00215320(-1, 0x10);
    f20 = *(f32 *)(a + 0x28);
    idx = *(s16 *)(a + 0x20);
    if (p != 0) {
        void *fa = (void *)func_00212050;
        void *fb = (void *)func_00212650;
        q = p + 0x20;
        *(void **)(p + 0x8) = fa;
        *(void **)(p + 0xC) = fb;
        memset(q, 0, 0x50);
        e = *(s32 *)(D_0046FDD0 + idx * 4);
        if (e != 0) {
            *(s32 *)(p + 0x10) = func_00209540(e, 0x4000002, 0);
        }
        if (*(s32 *)(p + 0x10) != 0) {
            __asm__ volatile ("lqc2 $vf1, 0(%0)\n\tsqc2 $vf1, 0(%1)" : : "r"(*(u8 **)a), "r"(q));
            __asm__ volatile ("lqc2 $vf1, 0(%0)\n\tsqc2 $vf1, 0(%1)" : : "r"(*(u8 **)(a + 0x4)), "r"(q + 0x10));
            func_00146F30(q + 0x10);
            if (gBattle != 0) {
                g = *(f32 *)(gBattle + 0x88F0);
            } else {
                if (D_004703F4 != 3) {
                    g = 1.0f;
                } else {
                    g = 1.2f;
                }
            }
            *(f32 *)(q + 0x30) = f20 * g;
            *(s32 *)(q + 0x20) = *(s32 *)(D_0046FDD0 + *(s16 *)(a + 0x22) * 4);
            *(s32 *)(q + 0x28) = (*(s16 *)(a + 0x22) << 5) + 0x03001000;
        }
    }
}
extern u8 D_0044BAA0[];
void func_00209950(s32 a, void *b, s32 c);

extern u8 D_0044BAA0[];
void func_00209950(s32 a, void *b, s32 c);

void func_00216640(u8 *a) {
    u8 *p;
    s32 idx;
    u8 *q;
    s32 e;
    Copy16A t60;
    Copy16A t50;

    p = func_00215320(-1, 0x10);
    idx = *(s16 *)(a + 0x20);
    t60 = *(Copy16A *)D_0044BAA0;
    if (p != 0) {
        void *fa = (void *)func_00212480;
        void *fb = (void *)func_00212650;
        q = p + 0x20;
        *(void **)(p + 0x8) = fa;
        *(void **)(p + 0xC) = fb;
        memset(q, 0, 0x50);
        e = *(s32 *)(D_0046FDD0 + idx * 4);
        if (e != 0) {
            *(s32 *)(p + 0x10) = func_00209540(e, 0x4000002, 0);
        }
        if (*(s32 *)(p + 0x10) != 0) {
            __asm__ volatile ("lqc2 $vf1, 0(%0)\n\tsqc2 $vf1, 0(%1)" : : "r"(*(u8 **)a), "r"(q));
            func_00146F30(*(void **)(a + 0x4));
            func_00141C30(&t50, &t60, *(void **)(a + 0x4));
            func_00209950(*(s32 *)(p + 0x10), &t50, 0);
            *(s32 *)(q + 0x20) = *(s32 *)(D_0046FDD0 + *(s16 *)(a + 0x22) * 4);
            *(s32 *)(q + 0x28) = (*(s16 *)(a + 0x22) << 5) + 0x03001000;
        }
    }
}
void func_00216770(u8 *a) {
    u8 *p;
    u8 *q;
    s32 idx;
    s32 e;
    s16 idx2;

    p = func_00215320(-1, 0x10);
    idx = *(s16 *)(a + 0x20);
    if (p != 0) {
        void *fa = (void *)func_00212480;
        void *fb = (void *)func_00212650;
        q = p + 0x20;
        *(void **)(p + 0x8) = fa;
        *(void **)(p + 0xC) = fb;
        memset(q, 0, 0x50);
        e = *(s32 *)(D_0046FDD0 + idx * 4);
        if (e != 0) {
            *(s32 *)(p + 0x10) = func_00209540(e, 0x4000002, 0);
        }
        if (*(s32 *)(p + 0x10) != 0) {
            __asm__ volatile ("lqc2 $vf1, 0(%0)\n\tsqc2 $vf1, 0(%1)" : : "r"(*(u8 **)a), "r"(q));
            *(s32 *)(q + 0x20) = *(s32 *)(D_0046FDD0 + *(s16 *)(a + 0x22) * 4);
            *(s32 *)(q + 0x28) = (*(s16 *)(a + 0x22) << 5) + 0x03001000;
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00216880);
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00216A60);
void func_00215500(s32);
void func_00216D20(void) {
    u8 *g;
    u8 *s1;
    u8 *s0;
    s32 idx;

    if (*(s8 *)(gBattle + 0x8975) == 1) {
        return;
    }
    g = D_0046FDD0;
    if (*(s32 *)(g + 0x1A0) != 0 || *(s32 *)(g + 0x1A4) != 0) {
        func_0013B160(gBattle + 0x60);
        func_00209D70(*(u8 **)(gBattle + 0x260));
        __asm__ volatile (
            "vmove.xyzw $vf28, $vf24\n"
            "vmove.xyzw $vf29, $vf25\n"
            "vmove.xyzw $vf30, $vf26\n"
            "vmove.xyzw $vf31, $vf27\n"
            : : : "memory");
        if (*(s32 *)(D_0046FDD0 + 0x1A0) != 0) {
            s0 = D_0046FDD0 + 0x188;
            s1 = gBattle + 0x830;
            if (*(s32 *)D_0046FDD0 != 0) {
                D_00470238 = 0;
                amModel_SetCurrent(*(s32 *)D_0046FDD0, 0x3001000);
            }
            func_0013B160(0);
            idx = *(s32 *)(s0 + 0x10);
            __asm__ volatile (
                "lqc2 $vf1, 0(%0)\n"
                "vmulax.xyzw ACC, $vf28, $vf1x\n"
                "vmadday.xyzw ACC, $vf29, $vf1y\n"
                "vmaddaz.xyzw ACC, $vf30, $vf1z\n"
                "vmaddw.xyzw $vf31, $vf31, $vf0w\n"
                : : "r"(s1 + (idx << 4) + 0x650) : "memory");
            func_00208D70(*(s32 *)(s0 + 0x18));
            __asm__ volatile (
                "vmove.xyzw $vf28, $vf24\n"
                "vmove.xyzw $vf29, $vf25\n"
                "vmove.xyzw $vf30, $vf26\n"
                "vmove.xyzw $vf31, $vf27\n"
                : : : "memory");
            if (*(s32 *)(*(u8 **)(s0 + 0x18) + 0x38) < 0) {
                *(s32 *)(s0 + 0x18) = 0;
            }
        }
        if (*(s32 *)(D_0046FDD0 + 0x1A4) != 0) {
            s0 = D_0046FDD0 + 0x188;
            s1 = gBattle + 0x2850;
            if (*(s32 *)D_0046FDD0 != 0) {
                D_00470238 = 0;
                amModel_SetCurrent(*(s32 *)D_0046FDD0, 0x3001000);
            }
            func_0013B160(0);
            idx = *(s32 *)(s0 + 0x14);
            __asm__ volatile (
                "lqc2 $vf1, 0(%0)\n"
                "vmulax.xyzw ACC, $vf28, $vf1x\n"
                "vmadday.xyzw ACC, $vf29, $vf1y\n"
                "vmaddaz.xyzw ACC, $vf30, $vf1z\n"
                "vmaddw.xyzw $vf31, $vf31, $vf0w\n"
                : : "r"(s1 + (idx << 4) + 0x650) : "memory");
            func_00208D70(*(s32 *)(s0 + 0x1C));
            __asm__ volatile (
                "vmove.xyzw $vf28, $vf24\n"
                "vmove.xyzw $vf29, $vf25\n"
                "vmove.xyzw $vf30, $vf26\n"
                "vmove.xyzw $vf31, $vf27\n"
                : : : "memory");
            if (*(s32 *)(*(u8 **)(s0 + 0x1C) + 0x38) < 0) {
                *(s32 *)(s0 + 0x1C) = 0;
            }
        }
        func_00209C50();
    }
    if (*(s32 *)(gWave + 0x8C) != 0) {
        func_00215500(0x10);
    }
}
void Hm_TaskMain(void) {
    if ((gBattle != 0 ? *(s32 *)(gBattle + 0x88EC) : 0) == 0 && Hm_IsBusy != 0) {
        func_00208E50(0x4000002, 1);
    }
}
extern u8 *gBattle;
extern u8 *D_0046FDD0;
extern u8 D_00469CE8[];
void func_00216A60(void);
u8 *amTask_Create(void *, s32, s32, s32, s32, void *);
s32 func_00216080(s32);
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
        *(u8 **)(loc + 0x0) = gBattle + *(s32 *)(in + 0x10) * 0x2020 + 0x830;
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
#if 0
void func_00217070(u8 *p) {
    u8 *s0;
    s32 a2;
    s32 k;
    Copy16A t30;

    a2 = *(s32 *)(p + 0x10);
    k = a2 * 257;
    s0 = gBattle + (k << 5) + 0x830;
    if (*(s32 *)(p + 0xC) == 1) {
        __asm__ volatile (
            "lqc2 $vf1, 0(%0)\n"
            "lqc2 $vf2, 0(%1)\n"
            "vsub.xyz $vf1, $vf1, $vf2\n"
            "sqc2 $vf1, 0(%2)\n"
            : : "r"(s0 + 0x650), "r"(D_0044BA90), "r"(&t30) : "memory");
        func_00146F30(&t30);
        *(u8 **)(p + 4) = (u8 *)&t30;
    } else if (*(s32 *)(p + 0xC) == 0) {
        func_00215230(-1, 0x400);
        __asm__ volatile (
            "lqc2 $vf1, 0(%0)\n"
            "sqc2 $vf1, 0(%1)\n"
            : : "r"(s0 + 0x650), "r"(D_0044BA90) : "memory");
        __asm__ volatile (
            "lqc2 $vf1, 0(%0)\n"
            "lqc2 $vf2, 0(%1)\n"
            "vsub.xyz $vf1, $vf1, $vf2\n"
            "sqc2 $vf1, 0(%2)\n"
            : : "r"(*(u8 **)(s0 + 0x1354) + 0x650), "r"(D_0044BA90), "r"(&t30) : "memory");
        func_00146F30(&t30);
        *(u8 **)(p + 4) = (u8 *)&t30;
    }
    *(s16 *)(p + 0x20) = 0x14;
    *(s16 *)(p + 0x22) = 0;
    *(s16 *)(p + 0x24) = 0;
    *(u8 **)(p) = s0 + 0x650;
    jtbl_00469CC4[0](p);
    *(u8 **)(p) = s0 + 0x6F0;
    jtbl_00469CC4[0](p);
    *(u8 **)(p) = s0 + 0x700;
    jtbl_00469CC4[0](p);
    *(u8 **)(p) = s0 + 0x6B0;
    jtbl_00469CC4[0](p);
    *(u8 **)(p) = s0 + 0x6C0;
    jtbl_00469CC4[0](p);
    *(u8 **)(p) = s0 + 0x680;
    jtbl_00469CC4[0](p);
}
// differs: same family as 217200 (sizes 0x17C vs 0x190): the v==1 block is inline here (the original tests v==1 with beq to an out-of-line block, then beqz to the v==0 block and a b to the tail); the nested if form gives the beq but not the beqz/b pair
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00217070);
#if 0
void func_00217200(u8 *p) {
    u8 *s0;
    s32 a2;
    s32 k;
    Copy16A t30;

    a2 = *(s32 *)(p + 0x10);
    k = a2 * 257;
    s0 = gBattle + (k << 5) + 0x830;
    if (*(s32 *)(p + 0xC) != 1) {
        if (*(s32 *)(p + 0xC) != 0) {
        } else {
            func_002CA290(-1);
            func_00216150(*(s32 *)(p + 0x10));
            __asm__ volatile (
                "lqc2 $vf1, 0(%0)\n"
                "sqc2 $vf1, 0(%1)\n"
                : : "r"(s0 + 0x650), "r"(D_0044BA90) : "memory");
            __asm__ volatile (
                "lqc2 $vf1, 0(%0)\n"
                "sqc2 $vf1, 0(%1)\n"
                : : "r"(*(u8 **)(s0 + 0x1354) + 0xD0), "r"(&t30) : "memory");
            func_00146F30(&t30);
            *(u8 **)(p + 4) = (u8 *)&t30;
        }
    } else {
        __asm__ volatile (
            "lqc2 $vf1, 0(%0)\n"
            "lqc2 $vf2, 0(%1)\n"
            "vsub.xyz $vf1, $vf1, $vf2\n"
            "sqc2 $vf1, 0(%2)\n"
            : : "r"(s0 + 0x650), "r"(D_0044BA90), "r"(&t30) : "memory");
        func_00146F30(&t30);
        *(u8 **)(p + 4) = (u8 *)&t30;
    }
    *(s16 *)(p + 0x20) = 0x14;
    *(s16 *)(p + 0x22) = 0;
    *(s16 *)(p + 0x24) = 0;
    *(u8 **)(p) = s0 + 0x650;
    jtbl_00469CC4[0](p);
    *(u8 **)(p) = s0 + 0x6F0;
    jtbl_00469CC4[0](p);
    *(u8 **)(p) = s0 + 0x700;
    jtbl_00469CC4[0](p);
    *(u8 **)(p) = s0 + 0x6B0;
    jtbl_00469CC4[0](p);
    *(u8 **)(p) = s0 + 0x6C0;
    jtbl_00469CC4[0](p);
    *(u8 **)(p) = s0 + 0x680;
    jtbl_00469CC4[0](p);
}
// differs: compiled size 0x174 against 0x190: the v==1 block sits out of line with a beq (matched), but the v==0 test is laid out as bnez to the tail with the v==0 block inline; the original has beqz to an out-of-line v==0 block followed by a b to the tail (an empty then-part or a nested else does not give it)
#endif
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
#if 0
void func_002178C0(u8 *s) {
    u8 *q;
    s32 a1;
    s32 a2;
    u8 *p1;
    u8 *p2;
    Copy16A t40;
    Copy16A t30;
    Copy16A t20;

    q = gBattle + (*(s32 *)(s + 0x10) * 257 << 5) + 0x830;
    a2 = *(s32 *)(s + 0x14);
    a1 = *(s32 *)(s + 0x18);
    if (a1 != -1) {
        p1 = q + (a2 << 4) + 0x7B0;
        p2 = *(u8 **)(q + 0x1354) + (a1 << 4) + 0x7B0;
        __asm__ volatile (
            "lqc2 $vf1, 0(%0)\n"
            "lqc2 $vf2, 0(%1)\n"
            "qmtc2.ni %2, $vf3\n"
            "vsub.xyz $vf2, $vf2, $vf1\n"
            "vaddax.xyz ACC, $vf1, $vf0x\n"
            "vmaddx.xyz $vf1, $vf2, $vf3x\n"
            "sqc2 $vf1, 0(%3)\n"
            : : "r"(p2), "r"(p1), "r"(0x3E4CCCCD), "r"(&t40) : "memory");
    } else {
        __asm__ volatile (
            "lqc2 $vf1, 0(%0)\n"
            "sqc2 $vf1, 0(%1)\n"
            : : "r"(q + (a2 << 4) + 0x7B0), "r"(&t40) : "memory");
    }
    __asm__ volatile (
        "lqc2 $vf1, 0(%0)\n"
        "lqc2 $vf2, 0(%1)\n"
        "vsub.xyz $vf1, $vf1, $vf2\n"
        "sqc2 $vf1, 0(%2)\n"
        : : "r"(*(u8 **)(q + 0x1354) + 0x7B0), "r"(q + 0x7B0), "r"(&t30) : "memory");
    func_00146F30(&t30);
    func_0020D780(&t20);
    *(void **)(s + 0x4) = &t20;
    *(void **)(s + 0x0) = &t40;
    *(s16 *)(s + 0x20) = 10;
    *(s16 *)(s + 0x22) = 0;
    *(s16 *)(s + 0x24) = 0;
    jtbl_00469CC4[0](s);
}
// differs: the loads of the three words and the base pointer q take other registers (q in t0 where the original keeps it in a3), the VU0 lerp (qmtc2.ni, vaddax, vmaddx) and the jump-table call match
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_002178C0);
#if 0
void func_002179E0(u8 *s) {
    f32 kf;
    s32 tmp;
    s32 idx;
    s32 a2;
    s32 a1;
    u8 *q;
    u8 *p1;
    u8 *p2;
    Copy16A t40;
    Copy16A t30;
    Copy16A t20;

    idx = *(s32 *)(s + 0x10);
    a2 = *(s32 *)(s + 0x14);
    a1 = *(s32 *)(s + 0x18);
    q = gBattle + (idx * 257 << 5) + 0x830;
    if (a1 != -1) {
        p1 = q + (a2 << 4) + 0x7B0;
        p2 = *(u8 **)(q + 0x1354) + (a1 << 4) + 0x7B0;
        kf = 0.2f;
        __asm__ volatile (
            "lqc2 $vf1, 0(%2)\n\t"
            "lqc2 $vf2, 0(%3)\n\t"
            "mfc1 %0, %4\n\t"
            "nop\n\t"
            "qmtc2.ni %0, $vf3\n\t"
            "vsub.xyz $vf2, $vf2, $vf1\n\t"
            "vaddax.xyz ACC, $vf1, $vf0x\n\t"
            "vmaddx.xyz $vf1, $vf2, $vf3x\n\t"
            "sqc2 $vf1, 0(%1)\n\t"
            : "=r"(tmp) : "r"(&t40), "r"(p1), "r"(p2), "f"(kf) : "memory");
    } else {
        __asm__ volatile (
            "lqc2 $vf1, 0(%0)\n\t"
            "sqc2 $vf1, 0(%1)\n\t"
            : : "r"(q + (a2 << 4) + 0x7B0), "r"(&t40) : "memory");
    }
    __asm__ volatile (
        "lqc2 $vf1, 0(%0)\n\t"
        "lqc2 $vf2, 0(%2)\n\t"
        "vsub.xyz $vf1, $vf1, $vf2\n\t"
        "sqc2 $vf1, 0(%1)\n\t"
        : : "r"(*(u8 **)(q + 0x1354) + 0x7B0), "r"(&t30), "r"(q + 0x7B0) : "memory");
    func_00146F30(&t30);
    func_0020D780(&t20);
    *(void **)(s + 0x4) = &t20;
    *(void **)(s + 0x0) = &t40;
    *(s16 *)(s + 0x20) = 9;
    *(s16 *)(s + 0x22) = 0;
    *(s16 *)(s + 0x24) = 0;
    jtbl_00469CC4[0](s);
}
// differs: 4 of 70 instructions: the first asm block takes the registers of p1 and &t40 swapped (a1/a2 here, the reverse in the original); every operand order tried (6) either swaps those or moves the index register (a2/a3); the float constant route (lui/ori, mtc1 f0, mfc1, nop, qmtc2) and the tail match
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_002179E0);
void func_00217B00(u8 *s) {
    *(s16 *)(s + 0x20) = 8;
    *(s16 *)(s + 0x22) = 0;
    *(s16 *)(s + 0x24) = 0;
    jtbl_00469CC4[0](s);
}
void func_00217B20(u8 *s) {
    V4Q v;
    func_0020D780(&v);
    *(void **)(s + 0x4) = &v;
    *(s16 *)(s + 0x20) = 0x7;
    *(s16 *)(s + 0x22) = 0;
    *(s16 *)(s + 0x24) = 0;
    jtbl_00469CC4[0](s);
}
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
s32 Scr_CmdCallTable469CB0(void) {
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

void Hm_Exit(void) {
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
void Hm_Start(void) {
    amTask_Create((void *)Hm_TaskMain, 0, 0x5A00, 0x400, 0x40002, D_00469CF8);
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
#if 0
void func_002186D0(u8 *p) {
    u8 *sl;
    u8 *n;
    u8 *v;
    f32 t;
    s32 a;

    t = *(f32 *)(p + 0x3C) / *(f32 *)(p + 0x40);
    v = *(u8 **)(p + 0x30);
    *(f32 *)v = *(f32 *)(p + 0x34) * (1.0f - t) + *(f32 *)(p + 0x38) * t;
    sl = p + 0x30;
    a = *(s32 *)(v + 0x8);
    if (a >= 0 && a < 5) {
        amAdx_SetVolume(a, *(f32 *)v * *(f32 *)(v + 0x4));
    }
    n = *(u8 **)sl;
    if (*(s32 *)(n + 0xC) == 2 || *(s32 *)(n + 0xC) == 1) {
        amAdx_Pause(*(s32 *)(n + 0x8), 0);
        *(s32 *)(n + 0xC) = 3;
    }
    if (*(f32 *)(sl + 0xC) >= *(f32 *)(sl + 0x10)) {
        if (*(f32 *)(sl + 0x8) <= 0.0f) {
            n = *(u8 **)sl;
            a = *(s32 *)(n + 0x8);
            if (a >= 0 && a < 5) {
                amAdx_Stop(a);
            }
            a = *(s32 *)(n + 0x8);
            if (a != 0 && a != 1) {
                *(s32 *)(n + 0x8) = -1;
            }
            *(s32 *)(n + 0xC) = 0;
            *(s32 *)(n + 0x10) = 0;
            *(s16 *)(n + 0x14) = -1;
            *(s16 *)(n + 0x16) = -1;
            *(f32 *)(n + 0x18) = -1.0f;
        }
        *(s32 *)(*(u8 **)sl + 0x1C) = 0;
        amTask_Kill((s32)p);
    } else {
        *(f32 *)(sl + 0xC) = *(f32 *)(sl + 0xC) + *(f32 *)(gBattle + 0x88F0);
        *(f32 *)(sl + 0xC) = (*(f32 *)(sl + 0xC) < *(f32 *)(sl + 0x10)) ? *(f32 *)(sl + 0xC) : *(f32 *)(sl + 0x10);
    }
}
// differs: all but the top pause check match: the original compiles the (c == 2 || c == 1) test as bne c,2 / beq c,2 / bne c,1 (the nested-if forms gave other layouts); the fade and stop branches are laid out as in the original
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_002186D0);
extern u8 *gBattle;
s32 amAdx_IsStopped(s32);
void amAdx_Stop(s32);

void Adx_TaskStopCheck(void) {
    u8 *p;
    s32 i;

    p = gBattle + 0x5C4;
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

s32 AdxSlot_IsPlaying(s32 *a) {
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
        u8 *n;
        s32 fl;
        fl = 0x800002;
        n = amTask_Create((void *)func_002186D0, 0, 0x4080, 0x20, fl, D_0046A3B8);
        *(u8 **)(n + 0x30) = s;
        o = n;
    }
    *(f32 *)(o + 0x34) = *(f32 *)s;
    *(f32 *)(o + 0x38) = a;
    *(s32 *)(o + 0x3C) = 0;
    *(f32 *)(o + 0x40) = b;
    *(u8 **)(s + 0x1C) = o;
}
// differs: 4 of 36 differ, all in the create branch: the ori of the flags (t0) is laid out before the low half of the data pointer (t1); moving the flags to a local did not change it
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00218C40);
extern s32 rand(void);
extern u8 D_00469D10[];
s32 amAdx_PlayAfs(s32, s32, s32);

s32 func_00218CD0(s32 a, s32 b) {
    s32 *ent;
    u8 *ch;
    s32 k;

    ch = gBattle + 0x664;
    if (a < 0 || a >= 14) {
        return -1;
    }
    ent = (s32 *)(D_00469D10 + *(s16 *)(gBattle + 0x7E2) * 224 + a * 16);
    if (ent[0] <= 0) {
        return -1;
    }
    if (b >= ent[0]) {
        b = ent[0] - 1;
    } else if (b <= -1) {
        b = rand() % ent[0];
    }
    k = ent[b + 1];
    if (k != -1) {
        *(s32 *)(ch + 0x10) = *(s32 *)(ch + 0x10) | 2;
        *(s32 *)(ch + 0x14) = k;
        *(s32 *)(ch + 0x8) = amAdx_PlayAfs(-1, k | 0x20000, 0);
        amAdx_Pause(*(s32 *)(ch + 0x8), 1);
        *(s32 *)(ch + 0xC) = 2;
    }
    if (*(s32 *)(ch + 0xC) == 2 || *(s32 *)(ch + 0xC) == 1) {
        amAdx_Pause(*(s32 *)(ch + 0x8), 0);
        *(s32 *)(ch + 0xC) = 3;
    }
    *(f32 *)ch = 1.0f;
    if (*(s32 *)(ch + 0x8) >= 0 && *(s32 *)(ch + 0x8) < 5) {
        amAdx_SetVolume(*(s32 *)(ch + 0x8), *(f32 *)ch * *(f32 *)(ch + 0x4));
    }
    return b;
}
extern u8 *gBattle;
extern u8 D_0046A3B8[];
void func_002186D0(u8 *p);
u8 *amTask_Create(void *, s32, s32, s32, s32, void *);

#if 0
void func_00218E50(void) {
    u8 *g = gBattle;
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
extern u8 *gBattle;
extern u8 D_0044F494[];
u8 *amTask_Create(void *, s32, s32, s32, s32, void *);
extern u8 D_0046A3B8[];
void func_002186D0(u8 *p);
void func_00218F00(s32);

#if 0
void func_00219270(s32 x) {
    u8 *g;
    s32 idx;
    u8 *slot;
    u8 *s1;
    u8 *obj;

    if (x < 0) {
        g = gBattle;
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
void AdxSlot_SetVolume(u8 *s, f32 v) {
    *(f32 *)s = v;
    if (*(s32 *)(s + 0x8) >= 0 && *(s32 *)(s + 0x8) < 5) {
        amAdx_SetVolume(*(s32 *)(s + 0x8), *(f32 *)s * *(f32 *)(s + 0x4));
    }
}
void AdxSlot_Stop(u8 *s) {
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
void AdxSlot_Suspend(u8 *s) {
    func_002194C0(s);
    if (*(s32 *)(s + 0xC) == 2 || *(s32 *)(s + 0xC) == 1) {
        amAdx_Pause(*(s32 *)(s + 0x8), 0);
        *(s32 *)(s + 0xC) = 3;
    }
}
void AdxSlot_Pause(u8 *s) {
    if (*(s32 *)(s + 0xC) == 2 || *(s32 *)(s + 0xC) == 1) {
        amAdx_Pause(*(s32 *)(s + 0x8), 0);
        *(s32 *)(s + 0xC) = 3;
    }
}
extern u8 *gBattle;
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
                *(f32 *)(p + 0x18) = *(f32 *)(gBattle + 0x8908);
            }
        }
    }
}
// differs: the early exits: the original leaves a b to the end for each range test, this build branches to the end directly; the else forms gave more differences
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_002194C0);
extern u8 *gBattle;
void amAdx_Pause(s32, s32);

void AdxSlot_SetPausedAll(s32 a) {
    u8 *p = gBattle + 0x5C4;
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
extern u8 *gBattle;
void amAdx_Stop(s32);

#if 0
void func_00219650(s32 flag) {
    s32 i = 0;
    s32 two = 2;
    u8 *p;
    u8 *g;

    i = flag ? 0 : two;
    g = gBattle;
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
extern u8 *gBattle;
extern f32 D_004E0610[];
extern f32 D_004E0614[];
extern f32 D_004E0618[];
void amAdx_SetVolume(s32, f32);

void func_00219790(s32 flag) {
    s32 i;
    u8 *p;
    f32 f22;
    f32 f21;
    f32 f20;

    s32 two = 2;
    u8 *base;
    f22 = D_004E0610[0];
    base = gBattle + 0x5C4;
    i = (flag != 0) ? 0 : two;
    f21 = D_004E0614[0];
    f20 = D_004E0618[0];
    if (i < 5) {
        p = base + (i << 5);
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
extern s32 D_00470670;

void func_00219870(void) {
    D_00470670 = 0;
}
#if 0
extern u8 D_0044F494[];
void func_00218F00(s32 x);

void func_00219880(void) {
    u8 *g;
    s32 i;
    u8 *q;
    u8 *p;
    s32 j;
    u8 *t;
    s32 a;

    g = gBattle;
    p = g + 0x5C4;
    q = p + 0x40;
    i = 2;
    do {
        a = *(s32 *)(q + 0x8);
        if (a >= 0 && a < 5) {
            amAdx_Stop(a);
        }
        a = *(s32 *)(q + 0x8);
        if (a != 0 && a != 1) {
            *(s32 *)(q + 0x8) = -1;
        }
        *(s32 *)(q + 0xC) = 0;
        *(s32 *)(q + 0x10) = 0;
        *(s16 *)(q + 0x14) = -1;
        *(s16 *)(q + 0x16) = -1;
        *(f32 *)(q + 0x18) = -1.0f;
        i++;
        q += 0x20;
    } while (i < 5);
    p += 0x40;
    j = 2;
    do {
        if (*(s32 *)(p + 0x1C) != 0) {
            amTask_Kill(*(s32 *)(p + 0x1C));
            *(s32 *)(p + 0x1C) = 0;
        }
        j++;
        p += 0x20;
    } while (j < 5);
    if (*(s16 *)(g + 0x7E6) < 0) {
        g = gBattle;
        a = *(s32 *)(g + 0x684);
        if (a != -1) {
            t = g + (a << 5);
            p = t + 0x5C4;
            if (*(u8 **)(t + 0x5E0) != 0) {
                t = *(u8 **)(t + 0x5E0);
                *(u8 **)(t + 0x30) = p;
            } else {
                t = amTask_Create((void *)func_002186D0, 0, 0x4080, 0x20, 0x800002, D_0046A3B8);
                *(u8 **)(t + 0x30) = p;
            }
            *(f32 *)(t + 0x34) = *(f32 *)p;
            *(s32 *)(t + 0x38) = 0;
            *(s32 *)(t + 0x3C) = 0;
            *(s32 *)(t + 0x40) = 0x42F00000;
            *(u8 **)(p + 0x1C) = t;
            *(s32 *)(g + 0x684) = -1;
        }
    } else {
        func_00218F00(((s32 *)*(u8 **)D_0044F494)[*(s16 *)(g + 0x7E6)]);
    }
}
// differs: all differences are in the amTask_Create branch: the original sets t1 (the data pointer) before the ori of t0 and leaves the ori in the jal delay slot; this build does the reverse (same as the sibling in the file)
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_20A4D0", func_00219880);
extern s32 D_00470670;
void amTask_Kill(s32);

void Adx_KillStopCheck(void) {
    if (D_00470670 != 0) {
        amTask_Kill(D_00470670);
        D_00470670 = 0;
    }
}
void Adx_StartStopCheck(void) {
    D_00470670 = (s32)amTask_Create(Adx_TaskStopCheck, 0, 0x9F00, 0x20, 0x800001, D_0046A3C8);
}
