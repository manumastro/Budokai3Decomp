#include "common.h"

extern s32 D_004708A4;
extern void func_0028F830(void);
extern void func_00133B50(void *, s32);

INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028E5D0);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028E640);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028E790);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028EA80);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028EAE0);
void func_0028EB20(void) {
    func_00133B50(NULL, 0);
}
void func_0028EB30(void) {
}
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028EB40);
void func_0028EB80(void *p, s32 v) {
    ((s32 *)p)[0x14] = v;
}
void func_0028EB90(void *p, f32 x, f32 y) {
    *(f32 *)((char *)p + 0x4C) = y;
    *(f32 *)(*(char **)(*(char **)((char *)p + 0x3C)) + 0x10) = x;
}
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028EBB0);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028EBF0);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028EC10);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028EC50);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028EC80);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028EE90);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028F090);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028F720);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028F830);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028F930);
void func_00290320(void) {
    D_004708A4 = 0;
}
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_00290330);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_00290390);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_00290410);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_002904C0);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_00290780);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_002908D0);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_00290A70);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_00290AE0);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_00290BB0);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_00290C90);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_00290D00);
void func_00291380(void) {
    func_0028F830();
}
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_00291390);
