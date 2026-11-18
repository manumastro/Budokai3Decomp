#include "common.h"

extern s32 D_00411E30;

s32 func_0016DAD8();                            /* extern */
s32 func_0016DAF0();                            /* extern */

extern s32 D_00411614;

INCLUDE_ASM("asm/nonmatchings/cri/dtr", DTR_ExecHndl);
s8 func_001654F0(u8 *arg0) {
    return *(s8 *)((u8 *)arg0 + 1);
}
INCLUDE_ASM("asm/nonmatchings/cri/dtr", func_001654F8);
INCLUDE_ASM("asm/nonmatchings/cri/dtr", DTR_Init);
void func_00165620(void) {
    D_00411614 -= 1;
}
INCLUDE_ASM("asm/nonmatchings/cri/dtr", func_00165638);
void func_00165728(s8 *arg0) {
    func_0016DAD8();
    *arg0 = 0;
    func_0016DAF0();
}
void func_00165750(u8 *arg0) {
    *(s32 *)((u8 *)arg0 + 0x3C) = 0;
    *(s8 *)((u8 *)arg0 + 1) = 1;
}
INCLUDE_ASM("asm/nonmatchings/cri/dtr", func_00165760);
INCLUDE_ASM("asm/nonmatchings/cri/dtr", func_00165810);
INCLUDE_ASM("asm/nonmatchings/cri/dtr", func_001658C0);
INCLUDE_ASM("asm/nonmatchings/cri/dtr", func_00165940);
INCLUDE_ASM("asm/nonmatchings/cri/dtr", func_001659B0);
void func_00165A00(void) {
    D_00411E30 += 1;
}
INCLUDE_ASM("asm/nonmatchings/cri/dtr", func_00165A18);
INCLUDE_ASM("asm/nonmatchings/cri/dtr", func_00165A88);
INCLUDE_ASM("asm/nonmatchings/cri/dtr", func_00165AB8);
