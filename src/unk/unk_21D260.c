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

extern Work21D260 *D_0046FDFC;
extern s32 D_0058BAE0[];
extern void amTask_Kill(s32);
extern void func_0022D4B0(s32, s32);

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
    Work21D260 *w = D_0046FDFC;
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
