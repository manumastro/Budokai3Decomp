#include "common.h"
#include "menu/menu.h"

INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A1510);
extern s32 *D_004708D0;
extern void Zenie_Update(void *);
extern void Zenie_Draw(void);
extern void Zenie_Close(s32);
extern s32 func_002A1020(s32);

// func_002A1640: the pointer to the work block is reloaded after the kill and the store sits in the delay slot; not matched yet.
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A1640);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A1690);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A1700);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A17D0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A18A0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A1980);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A19B0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A1B30);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A1C20);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A1DB0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A1F30);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A2020);
extern void func_002A2020(void);

void func_002A21E0(void) {
    func_002A2020();
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A21F0);
extern void func_002A5B00(void);
extern void func_0029A9F0(void);

void func_002A22C0(void) {
    s32 *s0 = D_004708D0;
    if (s0[2] != 0) {
        func_002A5B00();
    }
    if (s0[0x124 / 4] >= 0) {
        func_0029A9F0();
    }
}
extern void func_00264300(s32, void *, s32);
extern void func_002A22C0(void);

void *func_002A2310(void) {
    func_00264300(10, func_002A22C0, 0);
    return NULL;
}
void *func_002A2340(void) {
    return NULL;
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A2350);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A23D0);
s32 func_002A2480(void) {
    return 3;
}
extern s32 func_002A2480(void);

s32 func_002A2490(void *p) {
    *(void **)((char *)p + 0x10) = func_002A2480;
    return 3;
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A24B0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A2670);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A2730);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A2890);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A2AA0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A2BB0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A2C70);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A2E50);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A2F30);
extern s32 D_004700A0;

s32 func_002A2FD0(void *a0, char *a1) {
    D_004700A0 = *(s32 *)(*(char **)(a1 + 0x2C));
    return 1;
}
extern s32 func_002A1310(void *);

s32 func_002A2FF0(void *a0, s32 *a1) {
    *a1 = func_002A1310(a0);
    return 1;
}
extern void func_002A1320(s32);
extern void func_002A12E0(s32);
extern void func_002A1300(s32);
extern void func_002A12F0(s32);

s32 func_002A3020(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    s32 C = args[2];
    s32 A = args[1];
    s32 B = args[0];
    func_002A1320(args[3]);
    func_002A12E0(C);
    func_002A1300(A);
    func_002A12F0(B);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A3080);
extern void Zenie_Open(s32);
extern s32 *D_004708D0;

s32 func_002A30F0(void) {
    Zenie_Open(0);
    D_004708D0[0x64 / 4] = 1;
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A3120);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A3190);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A37E0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A3910);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A39C0);
extern s32 *D_004708D0;

// func_002A3A10 (returns 1 or 3 by a flag of D_004708D0): the original branches, 3.0b52 makes movz from ?: and if/else alike; not matched yet.
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A3A10);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A3A40);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A3B50);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A3C30);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A3CD0);
extern void func_002A3CD0(void);

s32 func_002A3DE0(s32 *p) {
    p[0x2C / 4] = 0;
    p[0x30 / 4] = 0x42080000;
    p[0x38 / 4] = 0x3FE1E1E2;
    p[0x10 / 4] = (s32)func_002A3CD0;
    return 3;
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A3E10);
extern s32 func_002A1020(s32);
extern void func_002A3E10(void);

// func_002A3E60: the test of the call result and the store of 0 are ordered differently (store in a branch delay slot); not matched yet.
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A3E60);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A3EC0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A3F10);
extern void func_002A07D0(s32, s32, f32);

s32 func_002A3F70(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    func_002A07D0(args[2], args[1], *(f32 *)args);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A3FA0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A3FF0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A40A0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4130);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A41D0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A42C0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4320);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4410);
extern void func_002A09F0(s32, s32, f32 *);

// func_002A4470: the loads and the vector copy are scheduled in another order; not matched yet.
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4470);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A44C0);
extern void func_002A0A60(s32, s32);

s32 func_002A4500(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    func_002A0A60(args[1], args[0]);
    return 1;
}
extern void func_002A0AD0(s32, s32, f32 *);

// func_002A4530: the loads and the vector copy are scheduled in another order; not matched yet.
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4530);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4580);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4620);
extern void func_002A0BC0(s32, s32, s32, f32 *);

// func_002A46C0: the loads and the vector copy are scheduled in another order; not matched yet.
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A46C0);
extern void func_002A0C10(s32, s32, f32 *);

// func_002A4710: the loads and the vector copy are scheduled in another order; not matched yet.
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4710);
extern void func_002A0C60(s32, s32, f32 *);

// func_002A4760: the loads and the vector copy are scheduled in another order; not matched yet.
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4760);
extern void func_002A0CB0(s32, s32, s32);

s32 func_002A47B0(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    func_002A0CB0(args[2], args[1], args[0]);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A47E0);
extern void func_002A0D20(s32, s32, s32);

s32 func_002A4830(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    func_002A0D20(args[2], args[1], args[0]);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4860);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A48A0);
extern f32 func_002A1050(s32, s32, s32);

s32 func_002A48F0(void *a0, s32 *a1) {
    s32 *args = *(s32 **)((char *)a1 + 0x2C);
    *a1 = (s32)func_002A1050(args[1], args[0], 1);
    return 1;
}
extern f32 func_002A1050(s32, s32, s32);

s32 func_002A4940(void *a0, s32 *a1) {
    s32 *args = *(s32 **)((char *)a1 + 0x2C);
    *a1 = (s32)func_002A1050(args[1], args[0], 0);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4990);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4A30);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4AD0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4BD0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4CF0);
extern s8 D_004B4B63;
extern char D_00492FCE[];

// func_002A4D60: the join of the if/else returns the value in a different order; not matched yet.
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4D60);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4DC0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4E20);
extern void func_002A1420(s32);

s32 func_002A4E90(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    func_002A1420(args[0]);
    return 1;
}
extern void func_002A1430(s32, s32, s32, s32);

s32 func_002A4EC0(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    func_002A1430(args[3], args[2], args[1], args[0]);
    return 1;
}
s32 func_002A4EF0(void) {
    return 1;
}
// func_002A4F00 (stores 1 into D_004708D0->f144 and returns it): the constant goes to $a0, not $v0; not matched yet.
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4F00);
extern void func_00264380(f32);
extern f32 D_004703BC;

s32 func_002A4F10(s32 *a0) {
    s32 *g = D_004708D0;
    if (g[0x144 / 4] == 1) {
        a0[0x10 / 4] = 0;
        g[0x144 / 4] = 0;
        func_00264380(0.01f * D_004703BC);
        return 1;
    }
    return 3;
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4F70);
extern s32 D_004700B0;

s32 func_002A5010(void *a0, char *a1) {
    D_004700B0 = *(s32 *)(*(char **)(a1 + 0x2C));
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A5030);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A51E0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A52B0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A5330);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A53A0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A5420);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A5580);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A56A0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A5790);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A5870);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A5B00);
void func_002A5D70(void) {
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A5D80);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A5F50);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A6090);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A6110);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A6190);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A6210);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A6DB0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A6E40);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A6FD0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A7160);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A7240);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A7400);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A75C0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A76E0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A7820);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A7940);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A7B50);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A7CB0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A7F70);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A80D0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A81B0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A8330);
