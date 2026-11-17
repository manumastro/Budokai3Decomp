#include "common.h"

extern f32 D_004703BC;
extern char D_0046FBB0[];
extern void amSofdec_StartFname(s32, char *, s32);
extern void func_0030DB10(s32 *);
extern void func_0030E170(s32 *);
extern s32 func_002A8F90(void);
extern void func_001F0830(s32, s32);
extern void func_001F0810(s32, s32);
extern void func_0030D970(char *);
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;
extern s32 D_00470998;
extern s32 D_0046FD5C;
extern s32 amSofdec_Create(s32 *);
extern void func_0030DC70(s32 *);
extern s32 amSofdec_GetStat(s32);
extern void amSofdec_Stop(s32);
extern void amSofdec_Destroy(s32);
extern void func_00145CC0(s32, s32);
extern void func_0022C060(s32, f32);
extern void func_0022C560(s32);
extern void func_0022D0E0(s32, s32);
extern s32 func_0022D860(s32, f32);
extern void func_0030E4D0(s32 *);

INCLUDE_ASM("asm/nonmatchings/story/str_staffroll", func_0030D630);
INCLUDE_ASM("asm/nonmatchings/story/str_staffroll", func_0030D7D0);
INCLUDE_ASM("asm/nonmatchings/story/str_staffroll", func_0030D970);
void func_0030DB10(s32 *a0) {
    char *s0 = (char *)a0 + 0x30;
    func_0030D970(s0);
    *(f32 *)(s0 + 0x14) = *(f32 *)(s0 + 0x14) + D_004703BC;
    if (*(f32 *)(s0 + 0x14) < *(f32 *)(s0 + 0x10)) {
        return;
    }
    *(s16 *)(s0 + 0xC) = *(s16 *)(s0 + 0xC) + 1;
    if (*(s16 *)(s0 + 0xC) < *(s16 *)(s0 + 0x8)) {
        *(f32 *)(s0 + 0x14) = *(f32 *)(s0 + 0x14) - *(f32 *)(s0 + 0x10);
    } else {
        a0[0x1C / 4] = 0;
    }
}
void func_0030DBB0(s32 *a0) {
    s32 *a1 = a0 + 0x30 / 4;
    f32 v = *(f32 *)&a0[0x44 / 4] + D_004703BC;
    *(f32 *)&a0[0x44 / 4] = v;
    if (v < 317.0f) {
        return;
    }
    a1[0x14 / 4] = 0;
    {
        void *f = func_0030DB10;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
#if 0
// func_0030DC00: the original takes the pointer in t1, the short 3 in t0 and the float bits in a1 (temps in other registers); the early-constant forms gave the same code; four forms tried
void func_0030DC00(s32 *a0) {
    s32 *t1 = (s32 *)a0[0x34 / 4];
    s16 n;
    n = (s16)(*(s32 *)((char *)t1 + 0x10) - 5);
    *(s16 *)((char *)a0 + 0x38) = n;
    *(s16 *)((char *)a0 + 0x3A) = 3;
    *(s16 *)((char *)a0 + 0x3C) = 0;
    *(f32 *)&a0[0x48 / 4] = 300.0f;
    *(f32 *)&a0[0x4C / 4] = 342.0f;
    *(f32 *)&a0[0x40 / 4] = 13260.0f / (f32)n;
    a0[0x44 / 4] = 0;
    {
        void *f = func_0030DBB0;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_staffroll", func_0030DC00);
INCLUDE_ASM("asm/nonmatchings/story/str_staffroll", func_0030DC70);
#if 0
// func_0030E170: the two-value test branches to the end in ours; the original branches to a stub that jumps to the end; four forms tried
void func_0030E170(s32 *a0) {
    s32 *s0 = a0 + 0x30 / 4;
    s32 v;
    func_0030DC70(s0);
    *(f32 *)&s0[0x8 / 4] = *(f32 *)&s0[0x8 / 4] + D_004703BC;
    v = amSofdec_GetStat(s0[0]);
    if (v == 2) {
        return;
    }
    if (v == 1) {
        return;
    }
    if (s0[0] >= 0) {
        amSofdec_Stop(s0[0]);
        amSofdec_Destroy(s0[0]);
        s0[0] = -1;
    }
    a0[0x1C / 4] = 0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_staffroll", func_0030E170);
void func_0030E220(s32 *a0) {
    s32 *a1 = a0 + 0x30 / 4;
    f32 v = *(f32 *)&a0[0x38 / 4] + D_004703BC;
    *(f32 *)&a0[0x38 / 4] = v;
    if (v < 77.0f) {
        return;
    }
    amSofdec_StartFname(a1[0], D_0046FBB0, 1);
    {
        void *f = func_0030E170;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
#if 0
// func_0030E290: the original frame is 0x60 (ours 0x50: a second local block of 16 bytes is missing) and the stores are scheduled in another order; two forms tried
s32 func_0030E290(s32 *a0) {
    s32 arg[8];
    s16 h;
    s32 *s0;
    arg[1] = 1;
    arg[2] = 0x600000;
    arg[0] = 0;
    s0 = a0 + 0x30 / 4;
    arg[3] = 0x400;
    h = 0;
    arg[4] = 0x200;
    arg[5] = 3;
    arg[6] = -1;
    arg[7] = D_0046FD5C;
    s0[0] = amSofdec_Create(arg);
    s0[2] = 0;
    s0[3] = 0;
    {
        void *f = func_0030E220;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_staffroll", func_0030E290);
#if 0
// func_0030E330: the saved registers come out in another order (the copy of a0, the block pointer and the state value); three variants tried
void func_0030E330(s32 *a0) {
    s32 *p = a0;
    s32 *s0 = p + 0x30 / 4;
    s32 v = a0[0x38 / 4];
    f32 f;
    D_00470704 = a0[0x34 / 4];
    D_0047070C = 0x3000;
    D_00470708 = 0;
    func_00145CC0(a0[0x34 / 4], 0x3000);
    D_00470238 = 0;
    if (v != 0) {
        func_0022C060(v, 1.0f);
        func_0022C560(v);
    }
    f = *(f32 *)&s0[0xC / 4] + D_004703BC;
    *(f32 *)&s0[0xC / 4] = f;
    if (f < 14116.0f) {
        return;
    }
    if (s0[0x8 / 4] != 0) {
        s0[0x8 / 4] = 0;
        func_0022D0E0(s0[0x8 / 4], 1);
    }
    p[0x1C / 4] = 0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_staffroll", func_0030E330);
INCLUDE_ASM("asm/nonmatchings/story/str_staffroll", func_0030E3F0);
INCLUDE_ASM("asm/nonmatchings/story/str_staffroll", func_0030E4D0);
void func_0030E5B0(s32 *a0) {
    s32 *p = a0 + 0x30 / 4;
    s32 v = a0[0x34 / 4];
    D_00470704 = v;
    D_0047070C = 0x3000;
    D_00470708 = 0;
    func_00145CC0(v, 0x3000);
    D_00470238 = 0;
    p[2] = func_0022D860(*(s32 *)(*(s32 *)((char *)p[0] + 0x14)), 0.0f);
    p[3] = 0;
    {
        void *f = func_0030E4D0;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
void func_0030E630(s32 *a0) {
    char *p = (char *)a0[0x30 / 4];
    if (func_002A8F90() == 0) {
        p[0x1C] = 10;
        func_001F0830(6, 0);
        func_001F0810(-1, 0);
        a0[0x1C / 4] = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/story/str_staffroll", func_0030E690);
INCLUDE_ASM("asm/nonmatchings/story/str_staffroll", func_0030E890);
INCLUDE_ASM("asm/nonmatchings/story/str_staffroll", func_0030EAE0);
INCLUDE_ASM("asm/nonmatchings/story/str_staffroll", func_0030EDA0);
INCLUDE_ASM("asm/nonmatchings/story/str_staffroll", func_0030EFF0);
void func_0030F0D0(void) {
    D_00470998 = 0;
}
INCLUDE_ASM("asm/nonmatchings/story/str_staffroll", func_0030F0E0);
