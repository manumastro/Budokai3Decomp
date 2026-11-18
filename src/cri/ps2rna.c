#include "common.h"

extern s32 D_00464CD0;

extern s32 D_00464C80;

extern s32 D_00464BB8;

extern s32 D_00464B90;

extern s32 D_00464B68;

extern s32 D_0041A104;

s32 scePrintf(s32 *);                       /* extern */
extern s32 D_0041A0D0;
extern s32 D_0041A0D8;
extern s32 D_00464B48;

INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", PS2RNA_SetupVoice);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", ps2rna_init_psj);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016BF98);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016C078);
void func_0016C0F0(s8 *arg0) {
    *arg0 = 0;
}
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016C0F8);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016C158);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016C460);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016C730);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016C788);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016C7E8);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016C838);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016C8A8);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016C910);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016C968);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016CA28);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016CDA8);
void PS2RNA_Start(void) {
    if ((D_0041A0D8 != 1) || (D_0041A0D0 > 0)) {
        scePrintf(&D_00464B48);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016CED8);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016CF38);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016CFD0);
void func_0016D000(s32 arg0) {
    if ((D_0041A0D8 != 1) || (D_0041A0D0 > 0)) {
        D_0041A104 = arg0;
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D030);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D068);
void PS2RNA_ClearBuf(void) {
    if ((D_0041A0D8 != 1) || (D_0041A0D0 > 0)) {
        scePrintf(&D_00464B68);
    }
}
void PS2RNA_SetPcmType(void) {
    if ((D_0041A0D8 != 1) || (D_0041A0D0 > 0)) {
        scePrintf(&D_00464B90);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D128);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D160);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D1C8);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D228);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D3E8);
void PS2RNA_SetStartSmpl(void) {
    if ((D_0041A0D8 != 1) || (D_0041A0D0 > 0)) {
        scePrintf(&D_00464BB8);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D4D8);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D508);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D5E0);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D620);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D670);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", PS2RNA_SetBitPerSmpl);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", PS2RNA_GetStartSmpl);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D798);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D7C8);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D7F8);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D830);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", func_0016D860);
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", PS2RNA_IsOverflow);
void PS2RNA_ClearOverflow(void) {
    if ((D_0041A0D8 != 1) || (D_0041A0D0 > 0)) {
        scePrintf(&D_00464C80);
    }
}
void func_0016D918(void) {

}
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", PS2RNA_DiscardData);
void PS2RNA_SetTotalNumSmpl(void) {
    if ((D_0041A0D8 != 1) || (D_0041A0D0 > 0)) {
        scePrintf(&D_00464CD0);
    }
}
INCLUDE_ASM("asm/nonmatchings/cri/ps2rna", PS2RNA_SetStmHdInfo);
