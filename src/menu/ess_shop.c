#include "common.h"

INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00272D30);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00272E20);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_002730B0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00273210);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00273330);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_002735D0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_002737C0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00273AF0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00273E20);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00274120);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00274A00);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00274B40);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00274C10);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00274E70);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00275050);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00275230);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_002759F0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_002763B0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00276400);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00276470);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00276610);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00276840);
extern s32 D_00470808;
extern void Zenie_Init(void);
extern void func_00283C10(void);

/* Clears D_00470808, then sets up the Zenie display. */
void Shop_InitZenie(void) {
    D_00470808 = 0;
    Zenie_Init();
    func_00283C10();
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00276A40);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00276AB0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00276B50);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00276CE0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00276DC0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00277010);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00277310);
