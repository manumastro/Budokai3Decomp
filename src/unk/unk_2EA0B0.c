#include "common.h"

extern void func_002E0D40(void);
void func_002EA0B0(void) {
    func_002E0D40();
}
extern u8 *D_00470570;
s32 func_002EA0C0(void) {
    if (*(f32 *)(D_00470570 + 0x8930) >= 1.0f) {
        return 2;
    }
    return 1;
}
extern u8 *D_00470570;
extern u8 *D_00470958;
extern s32 func_002EA0C0(void);
void func_002EA0F0(void) {
    u8 *g = D_00470570;
    u8 *o = D_00470958;
    g[0x8AB2] = 1;
    *(s8 *)(g + 0x8AB3) = -1;
    *(s32 *)(g + 0x891C) = 0;
    *(void **)(o + 0x24) = func_002EA0C0;
}
extern u8 D_0046F678[];
extern u8 D_0046F680[];
extern void func_002E9B10(void *, void *);
extern void func_002E9B90(s32);
void func_002EA140(void) {
    func_002E9B10(D_0046F678, D_0046F680);
    func_002E9B90(1);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EA170);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EA1A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EA1D0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EA200);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EA230);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EA260);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EA290);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EA2C0);
extern u8 *D_00470958;
extern void func_002E9970(s32, s32);
extern s32 func_002E9900(void);
void func_002EA2F0(void) {
    u8 *p = D_00470958;
    func_002E9970(0, 5);
    *(void **)(p + 0x24) = func_002E9900;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EA330);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EA370);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EA3B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EA3F0);
extern s32 func_002E9900(void);
s32 func_002EA430(void) {
    return func_002E9900() ? 2 : 0;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EA460);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EA4A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EA6C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EA7B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EA8F0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EA940);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EAA80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EAAF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EAC30);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EAEB0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EAF70);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EB0D0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EB140);
extern u8 *D_00470958;
void func_002EB280(void) {
    D_00470958 = NULL;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EB290);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EB380);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EB3E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EB560);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2EA0B0", func_002EB7B0);
