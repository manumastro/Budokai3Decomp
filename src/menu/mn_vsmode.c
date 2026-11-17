#include "common.h"

INCLUDE_ASM("asm/nonmatchings/menu/mn_vsmode", func_00267E00);
INCLUDE_ASM("asm/nonmatchings/menu/mn_vsmode", func_00268170);
INCLUDE_ASM("asm/nonmatchings/menu/mn_vsmode", func_002682E0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_vsmode", func_00268550);
INCLUDE_ASM("asm/nonmatchings/menu/mn_vsmode", func_00268860);
INCLUDE_ASM("asm/nonmatchings/menu/mn_vsmode", func_00268A80);
INCLUDE_ASM("asm/nonmatchings/menu/mn_vsmode", func_00268BF0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_vsmode", func_00268D00);
INCLUDE_ASM("asm/nonmatchings/menu/mn_vsmode", func_00268E40);
INCLUDE_ASM("asm/nonmatchings/menu/mn_vsmode", func_002693E0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_vsmode", func_002695B0);
extern void *D_004707DC;

void VsMode_Clear(void) {
    D_004707DC = 0;
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_vsmode", func_00269730);
INCLUDE_ASM("asm/nonmatchings/menu/mn_vsmode", func_00269820);
extern char D_0046B430[];
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void *amHeap_Alloc(s32, s32, char *, s32);

void VsMode_Load(void) {
    u8 *s0;
    s0 = D_004707DC = amHeap_Alloc(0x14, 0, D_0046B430, 0x84);
    *(s32 *)(s0 + 0x10) = 0;
    *(s32 *)s0 = amCdFs_ReadFileId(0x1083C, 0, 0);
    *(s32 *)(s0 + 0x4) = amCdFs_ReadFileId(0x1083D, 0, 0);
    *(s32 *)(s0 + 0x8) = 0;
    *(s32 *)(s0 + 0xC) = 0;
}
