#include "common.h"

/* A work object of this file: its state function (f1C) and the part at 0x30 (f30). */
typedef struct Work2918A0 {
    char pad0[0x1C];
    void (*f1C)(void);
    char pad20[0x10];
    s32 f30;
} Work2918A0;

extern Work2918A0 *D_005AA5A0[];
extern void func_00291BF0(void);
extern void func_00293250(void);
extern void func_002BD660(s32, s32);
extern void func_00133780(s32, s32);
extern void func_00139620(s32, void *, s32, s32, s32, f32);

INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_002918A0);
void func_00291970(void) {
    Work2918A0 *w;

    func_002BD660(0xB000, 0x80000);
    w = D_005AA5A0[0];
    w->f1C = (func_00293250 == 0) ? 0 : func_00293250;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_002919B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_00291AD0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_00291BF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_00291E30);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_002920E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_002922C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_002925A0);
void func_00292780(Work2918A0 *o) {
    func_00133780(0, 1);
    func_00139620(0x900, (char *)o + 0x30, -1, 0x44, 0, 0.0f);
    func_00133780(0, 0);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_002927E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_002928C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_002929A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_00292A40);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_00292FF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_00293250);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_002934F0);
void func_002935F0(void) {
    func_00291BF0();
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_00293600);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_00293950);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_00293D70);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_00293E80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_002948C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_00294960);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_00294A10);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_00295260);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_00295300);
