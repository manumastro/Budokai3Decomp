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
extern void func_00223660();
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
    Work21D260 *g;

    func_00224680(s);
    if ((bs->fE30 & 2) != 0) {
        g = gBtlSys;
        switch (s->f28) {
        case 0:
            f = s->f2C + D_00470710;
            s->f2C = f;
            if (!(f < 8.0f)) {
                s->f28 = 1;
            }
            break;
        case 1:
            break;
        case 2:
            f = s->f2C + D_00470710;
            s->f2C = f;
            if (!(f < 8.0f)) {
                g->fE30 = g->fE30 & -3;
            }
            break;
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
        {
            Task2_21D260 *n = (Task2_21D260 *)s->f0;
            n->f1C = (func_0021F3A0 == 0) ? 0 : (void (*)(void))func_0021F3A0;
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_00222440);
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
    Work21D260 *g;

    func_00224680(s);
    if ((bs->fE30 & 2) != 0) {
        g = gBtlSys;
        switch (s->f28) {
        case 0:
            f = s->f2C + D_00470710;
            s->f2C = f;
            if (!(f < 8.0f)) {
                s->f28 = 1;
            }
            break;
        case 1:
            break;
        case 2:
            f = s->f2C + D_00470710;
            s->f2C = f;
            if (!(f < 8.0f)) {
                g->fE30 = g->fE30 & -3;
            }
            break;
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
void func_00222A90(u8 *arg0) {
    Task21D260 *temp_v1;
    Work21D260 *temp_s0_2;
    Work21D260 *temp_s1;
    f32 temp_f1;
    s32 temp_a0;
    s32 *f30p;
    void (*var_v1)();
    u8 *temp_s0;

    temp_s1 = gBtlSys;
    temp_s0 = arg0 + 0x30;
    func_00224680(temp_s0);
    if (temp_s1->fE30 & 2) {
        var_v1 = func_00223660;
        if (func_00223660 == NULL) {
            var_v1 = NULL;
        }
        *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
        return;
    }
    func_00224BB0(D_0058BB30);
    func_002249B0();
    if (*D_0058BB38 == 0) {
        if (*D_0058BB36 != 0) {
            *(f32 *)((u8 *)temp_s0 + 0x20) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x20) + D_00470710);
        } else {
            *(f32 *)((u8 *)temp_s0 + 0x20) = 0.0f;
        }
        return;
    }
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x1C) + D_00470710;
    *(f32 *)((u8 *)temp_s0 + 0x1C) = temp_f1;
    if (!(temp_f1 < 8.0f)) {
        amTask_Kill(*(s32 *)temp_s0);
        amTask_Kill((s32) arg0);
        temp_s1->fEF0 = NULL;
        temp_s0_2 = gBtlSys;
        temp_s0_2->fE30 &= ~1;
        func_0022D4B0(*D_0058BAE0, 1);
        *D_0058BAE0 = 0;
        temp_v1 = temp_s0_2->fEF0;
        if (temp_v1 != NULL) {
            f30p = &temp_v1->f30;
            temp_a0 = *f30p;
            if (temp_a0 != 0) {
                amTask_Kill(temp_a0);
            }
            amTask_Kill((s32) temp_s0_2->fEF0);
            *f30p = 0;
            temp_s0_2->fEF0 = NULL;
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_00222BF0);
extern void *BtlSys_GetSlot(s32);
extern s32 func_0021C2E0(s32);
extern void func_00224680(void *);
extern void func_00224BB0(void *);
extern s32 func_002249B0(void);
extern void func_002228F0(Task2_21D260 *);
extern void func_0021F0E0(void);
extern void func_00222BF0(void);
extern f32 D_00470710;
extern char D_0058BB30[];
extern s8 D_0058BB36[];
extern s32 D_0058BB38[];

typedef struct Sub_223660 {
    s32 f0;
    s32 f4;
    s16 f8;
    s16 fA;
    char padC[0x8];
    s32 f14;
    char pad18[0x4];
    f32 f1C;
    f32 f20;
    char pad24[0x4];
    s32 f28;
    f32 f2C;
    s32 f30;
    s32 f34;
} Sub_223660;

void func_00223660(Task2_21D260 *o) {
    Work21D260 *bs = gBtlSys;
    Sub_223660 *s = (Sub_223660 *)((char *)o + 0x30);
    s32 slot;
    void *slot_ptr;
    Work21D260 *g;
    f32 f;

    slot = *(s16 *)((char *)bs + 0xE42);
    if (slot == -1) {
        slot = func_0021C2E0(*(s16 *)((char *)bs + 0xE40));
    }
    if (slot == -1) {
        slot_ptr = NULL;
    } else {
        slot_ptr = BtlSys_GetSlot(slot);
    }
    func_00224680(s);
    if ((bs->fE30 & 2) != 0) {
        g = gBtlSys;
        switch (s->f28) {
        case 0:
            f = s->f2C + D_00470710;
            s->f2C = f;
            if (!(f < 8.0f)) {
                s->f28 = 1;
            }
            break;
        case 1:
            break;
        case 2:
            f = s->f2C + D_00470710;
            s->f2C = f;
            if (!(f < 8.0f)) {
                g->fE30 = g->fE30 & -3;
            }
            break;
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
    if (slot_ptr != NULL && *(s16 *)((char *)slot_ptr + 0x4E) != -2) {
        s->f8 = 8;
        s->f4 = 3;
        s->fA = 0;
        s->f14 = *(s32 *)((char *)slot_ptr + 0x1C);
        s->f30 = 0;
        s->f34 = 0;
        o->f1C = (func_002228F0 == 0) ? 0 : (void (*)(void))func_002228F0;
        {
            Task2_21D260 *n = (Task2_21D260 *)s->f0;
            n->f1C = (func_0021F0E0 == 0) ? 0 : (void (*)(void))func_0021F0E0;
        }
    }
    f = s->f1C + D_00470710;
    s->f1C = f;
    if (!(f < 8.0f)) {
        s->f4 = 1;
        s->f1C = 0.0f;
        o->f1C = (func_00222BF0 == 0) ? 0 : func_00222BF0;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_002238B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_00223DA0);
extern s32 D_0058BB3C[];
extern char *func_0021C660(s32);
extern void func_0021D6C0(s32, f32, f32);
void func_00224480(char *p) {
    s32 s2;
    char *w;
    f32 f0;
    f32 buf[24];
    char *t;
    s32 a3;
    f32 Y;
    s32 a2;
    char *sys;
    f32 X;
    s32 idx;
    s32 e;
    s32 a1;

    sys = (char *)gBtlSys;
    s2 = *(s16 *)(func_0021C660(D_0058BB3C[0]) + 0x3E);
    if (s2 == -1) {
        return;
    }
    memset(buf, 0, sizeof(buf));
    e = *(s32 *)(sys + 0xED8);
    D_00470704 = e;
    D_0047070C = 0x4040000;
    D_00470708 = 0;
    amModel_SetCurrent(e, 0x4040000);
    D_00470238 = 0;
    func_00228430(0);
    w = *(char **)(sys + 0xEDC);
    idx = (s2 & 1) << 2;
    w = *(char **)(w + 0x1C);
    func_0022B900(*(s32 *)(idx + (s32)w + 0x3C), 0.0f, buf);
    func_00228410();
    t = (char *)*(s32 *)(sys + 0xED8);
    a1 = *(s16 *)((char *)buf + 0x18) - *(s32 *)(t + 0x18);
    a3 = *(s32 *)(t + 0x14);
    a3 += (s32)t;
    a1 = a1 * 4 + a3;
    // FAKEMATCH: scheduling barrier between address calculation and load
    if (w && w && w) {
    }
    a1 = *(s32 *)a1;
    a1 = (s32)(t + a1);
    a2 = *(s16 *)(a1 + 0x10);
    a1 = *(s16 *)(a1 + 0x12);
    X = (f32)a2;
    Y = (f32)a1;
    buf[12] = (-X) / 2.0f;
    buf[14] = X / 2.0f;
    buf[13] = (-Y) / 2.0f;
    buf[15] = Y / 2.0f;
    buf[16] = 0.5f;
    buf[17] = 0.5f;
    buf[18] = X - 0.5f;
    buf[19] = Y - 0.5f;
    a1 = *(s32 *)(p + 0x28);
    X = X + 15.0f;
    Y = Y + 10.0f;
    switch (a1) {
    case 0:
        f0 = *(f32 *)(p + 0x2C) / 8.0f;
        X = X * f0;
        Y = Y * f0;
        func_0021D6C0(1, X, Y);
        break;
    case 1:
        func_0021D6C0(1, X, Y);
        func_0022C6B0(buf);
        break;
    case 2:
        f0 = (8.0f - *(f32 *)(p + 0x2C)) / 8.0f;
        X = X * f0;
        Y = Y * f0;
        func_0021D6C0(1, X, Y);
        break;
    }
}
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
