#include "common.h"

extern u8 *D_004707E0;

INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_00269A00);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_00269AC0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_00269B90);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_00269CC0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026A4F0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026A620);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026A650);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026A680);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026ADC0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026AEB0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026B010);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026B100);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026B250);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026B310);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026B460);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026B560);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026B770);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026B880);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026BD10);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026BD20);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026BD50);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026C7C0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026C910);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026C9F0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026CB30);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026CC30);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026CD50);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026CF80);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026D030);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026D150);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026D230);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026D320);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026D480);
/* The byte at 0x5D of the block that D_004707E0 points to: bit 0 as a flag. */
u8 EssMain_GetFlag(void) {
    return D_004707E0[0x5D] & 1;
}
/* Sets the byte at 0x5C of that block. */
void EssMain_SetByte(u8 v) {
    D_004707E0[0x5C] = v;
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026D530);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026D570);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026D610);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026D6A0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026D8A0);
