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
extern void func_002249B0(void);
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
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_0021E250);
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
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_00222440);
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
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_00224480);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_00224680);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21D260", func_002249B0);
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
