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

typedef struct Sub4_21D260 {
    s32 f0;
    s32 f4;
    s16 f8;
    s16 fA;
    char padC[0x10];
    f32 f1C;
    f32 f20;
    char pad24[0x4];
    s32 f28;
    f32 f2C;
} Sub4_21D260;

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
void func_0021E420(char *p) {
    char *sys;
    s32 s1;
    s32 s0;
    f32 f20;
    f32 buf[24];
    char *w;
    s32 e;
    s32 rem;

    s0 = *(s32 *)(p + 0x14) + *(s16 *)(p + 0xA);
    s1 = *(s32 *)(p + 0x18);
    sys = (char *)gBtlSys;
    if (s0 >= s1) {
        s0 -= s1;
    }
    if (s1 > 0) {
        s0++;
    }
    e = *(s32 *)(sys + 0xED8);
    D_00470704 = e;
    D_0047070C = 0x4040000;
    D_00470708 = 0;
    amModel_SetCurrent(e, 0x4040000);
    D_00470238 = 0;
    func_00228430(0);
    w = *(char **)(*(char **)(sys + 0xEDC) + 0x1C);
    func_0022B900(*(s32 *)(w + 0x60), 0.0f, buf);
    func_00228410();
    func_0022C6B0(buf);
    func_00228430(0);
    w = *(char **)(*(char **)(sys + 0xEDC) + 0x1C);
    func_0022B900(*(s32 *)(w + 0x64), 0.0f, buf);
    func_00228410();
    f20 = buf[8];
    while (s1 != 0) {
        rem = s1 % 10;
        buf[8] = f20;
        buf[16] = (f32)(rem % 5) * 16.0f;
        buf[18] = buf[16] + 16.0f;
        buf[17] = (f32)(rem / 5) * 20.0f;
        buf[19] = buf[17] + 20.0f;
        func_0022C6B0(buf);
        f20 -= buf[14] - buf[12];
        s1 /= 10;
    }
    func_00228430(0);
    w = *(char **)(*(char **)(sys + 0xEDC) + 0x1C);
    func_0022B900(*(s32 *)(w + 0x68), 0.0f, buf);
    func_00228410();
    buf[8] = f20;
    f20 -= buf[14] - buf[12];
    func_0022C6B0(buf);
    while (s0 != 0) {
        rem = s0 % 10;
        buf[8] = f20;
        buf[16] = (f32)(rem % 5) * 16.0f;
        buf[18] = buf[16] + 16.0f;
        buf[17] = (f32)(rem / 5) * 20.0f;
        buf[19] = buf[17] + 20.0f;
        func_0022C6B0(buf);
        f20 -= buf[14] - buf[12];
        s0 /= 10;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_0021E740);
typedef struct V16_21D260 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} __attribute__((aligned(16))) V16_21D260;

extern V16_21D260 D_0044FA50;
extern f32 D_0044F768[];
extern s32 D_0058BB40[];
extern void func_002CFC50(void);
extern void func_0021D6C0(s32, f32, f32);
extern void func_0021F740(void *);
extern void func_0021DCF0(void *);
extern void func_0021E740(void *);
extern void func_00139620(s32, void *, s32, s32, s32, f32);

static inline void spawn_v(V16_21D260 *v, f32 scale) {
    *v = D_0044FA50;
    v->w *= scale;
    func_00139620(0x902, v, -1, 0x44, 0, 0.0f);
}

void func_0021F0E0(Task2_21D260 *o) {
    Work21D260 *bs;
    Sub4_21D260 *s;
    f32 f20;
    f32 f;
    V16_21D260 v4;
    V16_21D260 v3;
    V16_21D260 v2;
    V16_21D260 v1;

    s = (Sub4_21D260 *)o->f30;
    f20 = D_0044F768[0];
    bs = gBtlSys;
    if (*(s8 *)((char *)gBattle + 0x8975) == 1) {
        func_002CFC50();
    }
    if (D_0058BB38[0] == 0 || D_0058BB40[0] != 0) {
        if (!(s->f20 < 18000.0f)) {
            f = (s->f20 - 18000.0f) / 8.0f;
            v4 = D_0044FA50;
            if (f < 0.0f) {
                f = 0.0f;
            }
            if (f > 1.0f) {
                f = 1.0f;
            }
            v4.w *= f;
            func_00139620(0x902, &v4, -1, 0x44, 0, 0.0f);
        }
        return;
    }
    if (s->f8 == 10 || s->f8 == 9) {
        func_0021D6C0(0, f20, 340.0f);
        func_0021F740(s);
        if (!(bs->fE30 & 2)) {
            spawn_v(&v3, 1.0f);
        }
        func_0021DCF0(s);
    }
    if (s->f8 == 8) {
        if (!(bs->fE30 & 2)) {
            spawn_v(&v2, 1.0f);
        }
        func_0021E740(s);
    }
    if (!(s->f20 < 18000.0f)) {
        f = (s->f20 - 18000.0f) / 8.0f;
        v1 = D_0044FA50;
        if (f < 0.0f) {
            f = 0.0f;
        }
        if (f > 1.0f) {
            f = 1.0f;
        }
        v1.w *= f;
        func_00139620(0x902, &v1, -1, 0x44, 0, 0.0f);
    }
}
extern f32 D_0044F760[];

void func_0021F3A0(o)
Task2_21D260 *o;
{
    Work21D260 *bs;
    f32 *d;
    Sub4_21D260 *s;
    f32 f21;
    f32 f20;
    f32 f22;
    f32 f;
    V16_21D260 v1;
    V16_21D260 v2;
    V16_21D260 v3;
    V16_21D260 v4;
    V16_21D260 v5;

    s = (Sub4_21D260 *)o->f30;
    d = D_0044F760;
    bs = gBtlSys;
    if (*(s8 *)((char *)gBattle + 0x8975) == 1) {
        func_002CFC50();
    }
    if (D_0058BB38[0] == 0) {
        if (!(s->f20 < 18000.0f)) {
            f = (s->f20 - 18000.0f) / 8.0f;
            v1 = D_0044FA50;
            if (f < 0.0f) {
                f = 0.0f;
            }
            if (f > 1.0f) {
                f = 1.0f;
            }
            v1.w *= f;
            func_00139620(0x902, &v1, -1, 0x44, 0, 0.0f);
        }
        return;
    }
    f20 = 340.0f;
    f21 = d[2];
    switch (s->f4) {
    case 1:
        if (!(bs->fE30 & 2)) {
            spawn_v(&v2, 1.0f);
        }
        func_0021D6C0(0, f21, 340.0f);
        func_0021F740(s);
        if (bs->fE30 & 2) {
            spawn_v(&v3, 1.0f);
            func_00224480(s);
        }
        break;
    default:
        if (s->f4 == 0) {
            f22 = s->f1C / 8.0f;
        } else {
            f22 = (8.0f - s->f1C) / 8.0f;
        }
        if (!(bs->fE30 & 2)) {
            f = f22;
            v4 = D_0044FA50;
            if (f < 0.0f) {
                f = 0.0f;
            }
            if (f > 1.0f) {
                f = 1.0f;
            }
            v4.w *= f;
            func_00139620(0x902, &v4, -1, 0x44, 0, 0.0f);
        }
        f21 *= f22;
        f20 *= f22;
        func_0021D6C0(0, f21, f20);
        break;
    }
    if (!(s->f20 < 18000.0f)) {
        f = (s->f20 - 18000.0f) / 8.0f;
        v5 = D_0044FA50;
        if (f < 0.0f) {
            f = 0.0f;
        }
        if (f > 1.0f) {
            f = 1.0f;
        }
        v5.w *= f;
        func_00139620(0x902, &v5, -1, 0x44, 0, 0.0f);
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_0021F740);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_00221110);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_002214B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_00221950);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_00221E10);
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
extern void func_0021F0E0();
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
extern void SoundRpc_SetVolume(s32, s32, f32);
extern void SoundRpc_Send3(s32, s32, s32, s32);
extern f32 D_004E0614[];
extern s32 D_0058BB3C[];
extern s32 func_0021C360(s32);
extern u8 *func_0021C3E0(s32);
extern u8 D_00492FC0[];

void func_00224680(void *arg) {
    Work21D260 *bs = gBtlSys;
    Sub4_21D260 *s = (Sub4_21D260 *)arg;
    s32 slot;
    s32 found;
    s32 i;
    u8 *p;
    s16 a2;

    if (*(s16 *)((char *)bs + 0xE46) != 0) {
        bs->fE30 &= ~2;
        return;
    }
    memset(D_0058BB30, 0, 8);
    slot = *(s16 *)((char *)bs + 0xE40);
    if (slot != -1) {
        if (*(s32 *)(D_00492FC0 + slot * 184) == 3) {
            if (!(bs->fE30 & 2)) {
                return;
            }
            if (s->f28 == 2) {
                return;
            }
            s->f28 = 2;
            s->f2C = 0.0f;
            SoundRpc_SetVolume(0, 0, D_004E0614[0]);
            if (D_004E0614[0] <= 0.0f) {
                return;
            }
            SoundRpc_Send3(0, 0, 0x16, 0);
            return;
        }
        if (!(bs->fE30 & 2)) {
            s->f28 = 0;
            s->f2C = 0.0f;
            SoundRpc_SetVolume(0, 0, D_004E0614[0]);
            if (!(D_004E0614[0] <= 0.0f)) {
                SoundRpc_Send3(0, 0, 0x15, 0);
            }
        }
        D_0058BB3C[0] = func_0021C360(*(s16 *)((char *)bs + 0xE42));
        D_0058BB38[0] = 1;
        bs->fE30 |= 2;
        return;
    }

    found = 0;
    for (i = 0; i < *(s32 *)((char *)gBattle + 0x88D8); i++) {
        p = func_0021C3E0(i);
        a2 = *(s16 *)(p + 0x1A);
        if (a2 != -1 && *(s32 *)(D_00492FC0 + a2 * 184) != 3) {
            if (!found) {
                D_0058BB3C[0] = i;
            }
            found = 1;
        }
    }
    if (!found) {
        if (!(bs->fE30 & 2)) {
            return;
        }
        if (s->f28 == 2) {
            return;
        }
        s->f28 = 2;
        s->f2C = 0.0f;
        SoundRpc_SetVolume(0, 0, D_004E0614[0]);
        if (D_004E0614[0] <= 0.0f) {
            return;
        }
        SoundRpc_Send3(0, 0, 0x16, 0);
        return;
    }
    if (!(bs->fE30 & 2)) {
        s->f28 = 0;
        s->f2C = 0.0f;
        SoundRpc_SetVolume(0, 0, D_004E0614[0]);
        if (!(D_004E0614[0] <= 0.0f)) {
            SoundRpc_Send3(0, 0, 0x15, 0);
        }
    }
    D_0058BB38[0] = 1;
    bs->fE30 |= 2;
}
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
