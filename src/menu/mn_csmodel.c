#include "common.h"
#include "menu/menu.h"

/* The character select model's work area (task data.work). */
typedef struct CsModelWork {
    char pad0[0xB0];
    s16 fB0;
    char padB2[0xA];
    s32 fBC;
    f32 fC0;
    char padC4[0x1C];
    f32 fE0;
    f32 fE4;
    f32 fE8;
} CsModelWork;

INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B61E0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B6C30);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B6DC0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B7140);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B7180);
/* Sets the model's mode 4 (fB0) and clears fBC. */
void CsModel_SetMode(Task *t) {
    CsModelWork *w = (CsModelWork *)t->data.work;
    w->fBC = 0;
    w->fB0 = 4;
}
/* Clears fBC and sets the scale fC0 to 2.0. */
void CsModel_SetScale(Task *t) {
    CsModelWork *w = (CsModelWork *)t->data.work;
    w->fBC = 0;
    w->fC0 = 2.0f;
}
/* Moves the model's value fE0 towards target (fE4), by a step of (target - fE0) / div. */
void CsModel_Ease(Task *t, f32 target, f32 div) {
    CsModelWork *w = (CsModelWork *)t->data.work;
    w->fE4 = target;
    w->fE8 = (target - w->fE0) / div;
    w->fE0 = w->fE0 + w->fE8;
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B7230);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B7270);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B7340);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B7690);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B7800);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B7930);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B7A60);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B7C40);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B7DC0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B7F00);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B8070);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B8260);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B8410);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B84F0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B8540);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B85F0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B89E0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B8B50);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B8C20);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B8C70);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B8D20);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B91F0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B92E0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_csmodel", func_002B93D0);
extern s32 gPracMode;
extern s32 D_0047010C;

/* Turns practice mode off and sets D_0047010C to -1. */
void CsModel_ResetPrac(void) {
    gPracMode = 0;
    D_0047010C = -1;
}
