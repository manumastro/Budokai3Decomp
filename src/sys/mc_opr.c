#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_002880B0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_00288500);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_00288870);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_002889C0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_00288AF0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_00288BF0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_00288E70);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_00289210);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_00289380);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_002893F0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_002898F0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_00289BE0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_00289DF0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_00289E80);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_00289F30);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028A0A0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028A300);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028A480);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028A730);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028A9E0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028AAA0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028AD20);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028AE60);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028AFB0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028B270);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028B380);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028B720);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028B9B0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028BDB0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028BEB0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028C0F0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028C250);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028C310);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028C3E0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028C4C0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028C580);

void func_0028C730(void) {
}

INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028C740);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028CCE0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028CE10);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028CEF0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028D1E0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028D4D0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028D810);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028DDA0);
extern f32 D_00470884;
extern s32 D_00470894;
void func_0028DDB0(u8 *arg0) {
    s32 var_v1;

    if (D_00470884 == 0.0f) {
        var_v1 = D_00470894;
        if (var_v1 == 0) {
            var_v1 = 0;
        }
        *(s32 *)((u8 *)arg0 + 0x1C) = var_v1;
    }
}

INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028DDF0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028DE30);
extern s32 func_0028D810();
void func_0028DEA0(u8 *arg0) {
    s32 (*var_v0)();

    D_00470884 = D_00470884 + 0.05f;
    if (!(D_00470884 < 1.0f)) {
        var_v0 = func_0028D810;
        D_00470884 = 1.0f;
        if (func_0028D810 == NULL) {
            var_v0 = NULL;
        }
        *(s32 (**)())((u8 *)arg0 + 0x1C) = var_v0;
        func_0028D810();
        return;
    }
    func_00288500();
}

void func_0028DF10(void) {
}

extern void amHeap_Free(void *);
extern void amTask_Kill(void *);
extern s32 D_00470048;
extern s32 D_00470838;
extern s32 D_0047083C;
extern s32 D_00470848;

extern void *D_0047088C;
extern void *D_00470890;
extern void *D_0047089C;
extern void *D_004708A0;
extern void amHeap_Free(void *);
extern void amTask_Kill(void *);
void func_0028DF20(void) {
    if (D_0047088C != NULL) {
        amTask_Kill(D_0047088C);
    }
    if (D_00470890 != NULL) {
        amTask_Kill(D_00470890);
    }
    if (D_0047089C != NULL) {
        amHeap_Free(D_0047089C);
    }
    if (D_004708A0 != NULL) {
        amHeap_Free(D_004708A0);
    }
    D_00470848 = 0;
    D_0047088C = NULL;
    D_00470048 = -1;
    D_00470890 = NULL;
    D_00470884 = 0;
    D_0047089C = NULL;
    D_004708A0 = NULL;
    D_00470838 = 0;
    D_0047083C = 0;
}

INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028DFC0);
