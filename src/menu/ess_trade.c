#include "common.h"

extern s32 D_0047080C;

INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_002778D0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_00277A90);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_00277C80);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_002782D0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_00278490);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_00278980);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_00278B00);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_00278CA0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_00278D40);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_00278EA0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_00279010);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_002793C0);
extern void func_00277310(void);

/* Adds one to the five counters of the trade block D_0047080C, then runs func_00277310. */
void Trade_CountFrame(void) {
    *(s32 *)((u8 *)D_0047080C + 0xA0) += 1;
    *(s32 *)((u8 *)D_0047080C + 0x100) += 1;
    *(s32 *)((u8 *)D_0047080C + 0x130) += 1;
    *(s32 *)((u8 *)D_0047080C + 0x190) += 1;
    *(s32 *)((u8 *)D_0047080C + 0xD0) += 1;
    func_00277310();
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_002794D0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_00279C80);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_00279CD0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_00279D30);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_00279E60);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_00279FD0);
extern s32 D_0047080C;
extern void func_00283C10(void);
extern void func_002D2360(void);

/* Clears D_0047080C, then runs the two steps at 0x283C10 and 0x2D2360. */
void Trade_Start(void) {
    D_0047080C = 0;
    func_00283C10();
    func_002D2360();
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_0027A1C0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_0027A260);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_0027A2D0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_0027A370);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_0027A4C0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_trade", func_0027AAE0);
