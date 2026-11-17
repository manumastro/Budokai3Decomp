#include "common.h"

INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DE250);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DE2C0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DE460);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DE5A0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DE910);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DEA00);
/* Empty callback: nothing to do. */
void Option_Nop1(void) {
}

/* Empty callback: nothing to do. */
void Option_Nop2(void) {
}

INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DEFF0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DF100);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DF3D0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DF4E0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DF5D0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DF6E0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DF740);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DF930);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DFBC0);
/* Reads the sound status (channel 0), then runs func_002DFBC0. */
void Option_ReadSound(void) {
    amAdx_GetStat(0);
    func_002DFBC0();
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DFE20);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DFEC0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002E0050);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002E0170);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002E0260);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002E06A0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002E0800);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002E08F0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002E0B70);
extern void *D_00470938;

typedef struct OptionState {
    char pad0[8];
    s32 f8;
} OptionState;

/* Clears the option screen's state word D_00470938. */
void Option_ClearState(void) {
    D_00470938 = 0;
}
/* Frees the option state block D_00470938 (if any) and clears the pointer. */
void Option_FreeState(void) {
    if (D_00470938 != 0) {
        amHeap_Free(D_00470938);
        D_00470938 = 0;
    }
}
/* The field at 0x8 of the option state, or 0 when there is no state. */
s32 Option_GetSub(void) {
    return D_00470938 == 0 ? 0 : ((OptionState *)D_00470938)->f8;
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002E0C90);
// GIVEN UP: func_002E0D10 (true when the block has 3 at offset 4): the compiler folds the test into xori / sltiu,
// the original keeps a branch (tried: ternary, if/return, if/else with a variable).
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002E0D10);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002E0D40);
