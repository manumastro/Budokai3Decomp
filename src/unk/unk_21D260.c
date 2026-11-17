#include "common.h"

typedef struct Task21D260 {
    char pad0[0x30];
    s32 f30;
} Task21D260;

typedef struct Work21D260 {
    char pad0[0xE30];
    s32 fE30;
    char padE34[0xBC];
    Task21D260 *fEF0;
} Work21D260;

extern Work21D260 *gBtlSys;
extern s32 D_0058BAE0[];
extern void amTask_Kill(s32);
extern void func_0022D4B0(s32, s32);
extern char D_0058BB30[];
extern s8 D_0058BB36[];
extern s32 D_0058BB38[];
extern f32 D_00470710;
extern void func_00224680(void *);
extern void func_00224BB0(void *);
extern s32 func_002249B0(void);
extern char *gBattle;
extern void func_00223660(void);
extern void func_00224F90(void);

typedef struct Sub2_21D260 {
    s32 f0;
    char pad4[0x18];
    f32 f1C;
    f32 f20;
} Sub2_21D260;

typedef struct Task2_21D260 {
    char pad0[0x1C];
    void (*f1C)(void);
    char pad20[0x10];
    s32 f30;
    char pad34[0x18];
    f32 f4C;
    f32 f50;
} Task2_21D260;

INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_0021D260);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_0021D6C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_0021DCF0);
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern void amModel_SetCurrent(s32, s32);
extern void func_00228430(s32);
extern void func_00228410(void);
extern void func_0022C430(f32, s32);
extern void func_0022B900(s32, f32, void *);
extern void func_0022C6B0(void *);
void func_0021E250(char *p) {
    char *sys;
    s32 s1;
    s32 s0;
    f32 f20;
    f32 buf[24];
    char *w;
    s32 e;

    sys = (char *)gBtlSys;
    s0 = *(s32 *)(p + 0x14) + *(s16 *)(p + 0xA);
    s1 = *(s32 *)(p + 0x18);
    if (s0 >= s1) {
        s0 -= s1;
    }
    if (s1 > 0) {
        s1--;
    }
    e = *(s32 *)(sys + 0xED8);
    D_00470704 = e;
    D_0047070C = 0x4040000;
    D_00470708 = 0;
    amModel_SetCurrent(e, 0x4040000);
    D_00470238 = 0;
    func_00228430(0);
    w = *(char **)(*(char **)(sys + 0xEDC) + 0x1C);
    func_0022C430(0.0f, *(s32 *)(w + 0x74));
    func_00228410();
    func_00228430(0);
    if ((*(s16 *)(p + 0x10) & 1) != 0) {
        w = *(char **)(*(char **)(sys + 0xEDC) + 0x1C);
        func_0022C430(*(f32 *)(p + 0x24), *(s32 *)(w + 0x7C));
    } else {
        w = *(char **)(*(char **)(sys + 0xEDC) + 0x1C);
        func_0022C430(0.0f, *(s32 *)(w + 0x78));
    }
    func_00228410();
    func_00228430(0);
    if ((*(s16 *)(p + 0x10) & 2) != 0) {
        w = *(char **)(*(char **)(sys + 0xEDC) + 0x1C);
        func_0022C430(*(f32 *)(p + 0x24), *(s32 *)(w + 0x84));
    } else {
        w = *(char **)(*(char **)(sys + 0xEDC) + 0x1C);
        func_0022C430(0.0f, *(s32 *)(w + 0x80));
    }
    func_00228410();
    if (s1 == 0) {
        f20 = 0.0f;
    } else {
        f20 = (30.0f * (f32)s0) / (f32)s1;
    }
    func_00228430(0);
    w = *(char **)(*(char **)(sys + 0xEDC) + 0x1C);
    func_0022B900(*(s32 *)(w + 0x70), f20, buf);
    func_00228410();
    func_0022C6B0(buf);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_0021E420);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_0021E740);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_0021F0E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_0021F3A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_0021F740);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_00221110);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_002214B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_00221950);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_00221E10);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_00222280);
#if 0
// differs: the state switch (f28 == 2 out of line, the beqz to the else block) is laid out in another order: 40 of 72 instructions differ
typedef struct Sub4_21D260 {
    s32 f0;
    s32 f4;
    char pad8[0x2];
    s16 fA;
    char padC[0x10];
    f32 f1C;
    f32 f20;
    char pad24[0x4];
    s32 f28;
    f32 f2C;
} Sub4_21D260;
extern void func_00222BF0(void);
extern void func_0021F3A0(void);
void func_00222280(Task2_21D260 *o) {
    Work21D260 *bs = gBtlSys;
    Sub4_21D260 *s = (Sub4_21D260 *)((char *)o + 0x30);
    f32 f;
    s32 st;

    func_00224680(s);
    if ((bs->fE30 & 2) != 0) {
        st = s->f28;
        if (st != 2) {
            if (st == 0) {
                f = s->f2C + D_00470710;
                s->f2C = f;
                if (!(f < 8.0f)) {
                    s->f28 = 1;
                }
            }
        } else {
            f = s->f2C + D_00470710;
            s->f2C = f;
            if (!(f < 8.0f)) {
                gBtlSys->fE30 = gBtlSys->fE30 & -3;
            }
        }
        s->f20 = s->f20 + D_00470710;
    } else {
        func_00224BB0(D_0058BB30);
        func_002249B0();
        if (D_0058BB38[0] == 0) {
            if (D_0058BB36[0] != 0) {
                s->f20 = s->f20 + D_00470710;
            } else {
                s->f20 = 0.0f;
            }
            return;
        }
    }
    f = s->f1C + D_00470710;
    s->f1C = f;
    if (!(f < 8.0f)) {
        s->f4 = 1;
        s->f1C = 0.0f;
        s->fA = 0;
        o->f1C = (func_00222BF0 == 0) ? 0 : func_00222BF0;
        ((Task2_21D260 *)s->f0)->f1C = (func_0021F3A0 == 0) ? 0 : (void (*)(void))func_0021F3A0;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_00222440);
#if 0
// differs: compiled 0x198 bytes, original 0x1A0; the state blocks (f28 == 2, == 0) and the shared tail are laid out in another order (a switch gives 37 of 104)
typedef struct Sub3_21D260 {
    s32 f0;
    s32 f4;
    char pad8[0x14];
    f32 f1C;
    f32 f20;
    char pad24[0x4];
    s32 f28;
    f32 f2C;
} Sub3_21D260;
extern void func_00222440(void);
void func_002228F0(Task2_21D260 *o) {
    Work21D260 *bs = gBtlSys;
    Sub3_21D260 *s = (Sub3_21D260 *)((char *)o + 0x30);
    f32 f;

    func_00224680(s);
    if ((bs->fE30 & 2) != 0) {
        if (s->f28 == 2) {
            f = s->f2C + D_00470710;
            s->f2C = f;
            if (!(f < 8.0f)) {
                gBtlSys->fE30 = gBtlSys->fE30 & -3;
            }
        } else if (s->f28 == 1) {
        } else if (s->f28 == 0) {
            f = s->f2C + D_00470710;
            s->f2C = f;
            if (!(f < 8.0f)) {
                s->f28 = 1;
            }
        }
        s->f20 = s->f20 + D_00470710;
    } else {
        func_00224BB0(D_0058BB30);
        func_002249B0();
        if (D_0058BB38[0] == 0) {
            if (D_0058BB36[0] != 0) {
                s->f20 = s->f20 + D_00470710;
            } else {
                s->f20 = 0.0f;
            }
            return;
        }
    }
    f = s->f1C + D_00470710;
    s->f1C = f;
    if (!(f < 8.0f)) {
        s->f4 = 4;
        s->f1C = 0.0f;
        o->f1C = (func_00222440 == 0) ? 0 : func_00222440;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_002228F0);
#if 0
// differs: the step test's two branches are laid out in another order and the lb block is two instructions short
void func_00222A90(Task2_21D260 *t) {
    Work21D260 *w = gBtlSys;
    Sub2_21D260 *s = (Sub2_21D260 *)((char *)t + 0x30);
    f32 f;

    func_00224680(s);
    if ((w->fE30 & 2) != 0) {
        t->f1C = (func_00223660 == 0) ? 0 : func_00223660;
    } else {
        func_00224BB0(D_0058BB30);
        func_002249B0();
        if (D_0058BB38[0] == 0) {
            if (D_0058BB36[0] != 0) {
                s->f20 = s->f20 + D_00470710;
            } else {
                s->f20 = 0.0f;
            }
        } else {
            f = s->f1C + D_00470710;
            s->f1C = f;
            if (f >= 8.0f) {
                amTask_Kill(s->f0);
                amTask_Kill((s32)t);
                w->fEF0 = 0;
                gBtlSys->fE30 = gBtlSys->fE30 & -2;
                func_0022D4B0(D_0058BAE0[0], 1);
                D_0058BAE0[0] = 0;
                if (gBtlSys->fEF0 != 0) {
                    amTask_Kill(gBtlSys->fEF0->f30);
                    amTask_Kill((s32)gBtlSys->fEF0);
                    gBtlSys->fEF0->f30 = 0;
                    gBtlSys->fEF0 = 0;
                }
            }
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_00222A90);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_00222BF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_00223660);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_002238B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_00223DA0);
#if 0
// differs: 2 instructions short (0x1F8 vs 0x200): the original keeps the buffer address in t0 (addiu t0,sp,0x40) and stores through it; the 0x3F000000 stores are scheduled late; a1==1 block layout
extern s32 D_0058BB3C[];
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern void memset(void *, s32, s32);
extern char *func_0021C660(s32);
extern void amModel_SetCurrent(s32, s32);
extern void func_00228430(s32);
extern void func_00228410(void);
extern void func_0022B900(s32, f32, void *);
extern void func_0021D6C0(s32, f32, f32);
extern void func_0022C6B0(void *);
void func_00224480(char *p) {
    char buf[0x60];
    char *sys;
    char *t;
    s32 s2;
    s32 e;
    s32 a2;
    s32 a1;
    s32 base;
    f32 X;
    f32 Y;
    f32 f0;
    f32 *fb;

    sys = (char *)gBtlSys;
    s2 = *(s16 *)(func_0021C660(D_0058BB3C[0]) + 0x3E);
    if (s2 == -1) {
        return;
    }
    memset(buf, 0, 0x60);
    e = *(s32 *)(sys + 0xED8);
    D_00470704 = e;
    D_0047070C = 0x4040000;
    D_00470708 = 0;
    amModel_SetCurrent(e, 0x4040000);
    D_00470238 = 0;
    func_00228430(0);
    func_0022B900(*(s32 *)(*(char **)(*(char **)(sys + 0xEDC) + 0x1C) + ((s2 & 1) << 2) + 0x3C), 0.0f, buf);
    func_00228410();
    t = (char *)*(s32 *)(sys + 0xED8);
    a2 = *(s16 *)(buf + 0x18);
    base = *(s32 *)(t + 0x14) + (s32)t;
    a1 = *(s32 *)(base + ((a2 - *(s32 *)(t + 0x18)) << 2));
    a1 = (s32)t + a1;
    a2 = *(s16 *)(a1 + 0x10);
    a1 = *(s16 *)(a1 + 0x12);
    X = (f32)a2;
    Y = (f32)a1;
    fb = (f32 *)buf;
    fb[12] = (-X) / 2.0f;
    fb[14] = X / 2.0f;
    fb[13] = (-Y) / 2.0f;
    fb[15] = Y / 2.0f;
    fb[18] = X - 0.5f;
    *(s32 *)(buf + 0x40) = 0x3F000000;
    *(s32 *)(buf + 0x44) = 0x3F000000;
    fb[19] = Y - 0.5f;
    a1 = *(s32 *)(p + 0x28);
    X = X + 15.0f;
    Y = Y + 10.0f;
    if (a1 != 2) {
        if (a1 == 1) {
            func_0021D6C0(1, X, Y);
            func_0022C6B0(buf);
        } else if (a1 == 0) {
            f0 = *(f32 *)(p + 0x2C) / 8.0f;
            X = X * f0;
            Y = Y * f0;
            func_0021D6C0(1, X, Y);
        }
    } else {
        f0 = (8.0f - *(f32 *)(p + 0x2C)) / 8.0f;
        X = X * f0;
        Y = Y * f0;
        func_0021D6C0(1, X, Y);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_00224480);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_00224680);
extern u8 *func_0021C3E0(s32);
extern u8 D_00492FC0[];
extern u8 D_00492FD2[];
extern u8 D_0058BB34[];
s32 func_002249B0(void) {
    s32 ret = 0;
    s32 f2;
    s32 f1;
    s32 i;
    s32 cnt;
    s32 a;
    u16 v;
    u8 *e;

    if (gBtlSys->fE30 & 2) {
        return 0;
    }
    a = *(s16 *)((char *)gBtlSys + 0xE40);
    if (a != -1) {
        v = *(u16 *)((u8 *)D_00492FD2 + a * 184);
        if ((v & 0x502) == 0x502) {
            if (D_0058BB38[0] == 0) {
                ret = 1;
            }
            D_0058BB38[0] = D_0058BB38[0] ^ 1;
        }
        if ((v & 8) != 0 && D_0058BB38[0] == 0) {
            ret = 1;
            D_0058BB34[0] = 0;
            D_0058BB38[0] = ret;
        }
    } else {
        f2 = 0;
        f1 = 0;
        i = 0;
        if (0 < *(s32 *)(gBattle + 0x88D8)) {
            do {
                e = func_0021C3E0(i);
                a = *(s16 *)(e + 0x1A);
                if (a != -1) {
                    v = *(u16 *)(D_00492FC0 + a * 184 + 0x12);
                } else {
                    v = 0;
                }
                if ((v & 0x502) == 0x502) {
                    f2 = 1;
                }
                if ((v & 8) != 0) {
                    f1 = 1;
                    D_0058BB34[0] = 0;
                }
                i++;
                cnt = *(s32 *)(gBattle + 0x88D8);
            } while (i < cnt);
        }
        if (f2 != 0) {
            if (D_0058BB38[0] == 0) {
                ret = 1;
            }
            D_0058BB38[0] = D_0058BB38[0] ^ 1;
        } else if (f1 != 0) {
            if (D_0058BB38[0] == 0) {
                D_0058BB38[0] = 1;
            }
        }
    }
    return ret;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_00224BB0);
void func_00224F90(void) {
    Work21D260 *w = gBtlSys;
    s32 *p;

    w->fE30 = w->fE30 & -2;
    func_0022D4B0(D_0058BAE0[0], 1);
    D_0058BAE0[0] = 0;
    if (w->fEF0 != 0) {
        p = &w->fEF0->f30;
        if (*p != 0) {
            amTask_Kill(*p);
        }
        amTask_Kill((s32)w->fEF0);
        *p = 0;
        w->fEF0 = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_00225020);
