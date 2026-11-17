#include "common.h"
#include "menu/menu.h"

INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F06D0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F0870);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F0960);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F0B00);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F0BC0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F0D70);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F0FD0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F10F0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F1300);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F1500);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F1650);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F1770);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F21B0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F2350);
extern void func_00125740(void *, void *, s32);

/* Copies 0x28 bytes of the task's work area (from 0xB4) to dst, when there is a task. */
void InputPass_CopyName(Task *t, void *dst) {
    if (t != 0) {
        func_00125740(dst, (char *)t->data.work + 0xB4, 0x28);
    }
}
/* The byte at 0x170 of the task's work area, 0 without a task. */
u8 InputPass_GetKind(Task *t) {
    u8 k;

    if (t == 0) {
        k = 0;
    } else {
        k = ((u8 *)t->data.work)[0x170];
    }
    return k;
}
extern void *gInputName;

/* Clears the input name pointer. */
void InputPass_ClearName(void) {
    gInputName = 0;
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F2500);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F2600);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F26E0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F27B0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F2870);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F2A10);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F2AF0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F2C90);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F2D50);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F2F00);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F3020);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F3210);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F3C60);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F3E00);
/* Copies 0x10 bytes of the task's work area (from 0x50) to dst, when there is a task. */
void InputPass_CopyBuf(Task *t, void *dst) {
    if (t != 0) {
        func_00125740(dst, (char *)t->data.work + 0x50, 0x10);
    }
}
/* The byte at 0x60 of the task's work area, 0 without a task. */
u8 InputPass_GetPhase(Task *t) {
    u8 k;

    if (t == 0) {
        k = 0;
    } else {
        k = ((u8 *)t->data.work)[0x60];
    }
    return k;
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F3FA0);
