#include "common.h"

s32 scePrintf(s32 *);                       /* extern */
extern s32 D_0045DDE0;

s32 DI();                                           /* extern */
s32 EI();                                       /* extern */
s32 func_0010D3A8(s32, s32 *, s32); /* extern */
extern s32 D_003EDDA4;
extern s32 D_003EDDC8;
extern s32 func_00118628;

INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_001180F0);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00118158);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_001181F8);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00118368);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00118420);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00118508);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_001185A8);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00118628);
s32 func_00118680(void) {
    s32 temp_s0;

    D_003EDDA4 = 1;
    temp_s0 = DI();
    func_0010D3A8(0x80000012, &func_00118628, 0);
    if (temp_s0 != 0) {
        EI();
    }
    D_003EDDA4 = 0;
    D_003EDDC8 = 1;
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_001186F8);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_001189F8);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00118A18);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00118B70);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00118C08);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00118CA8);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00118D18);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00118E70);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00118F20);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00119208);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00119420);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00119640);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00119820);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_001198F0);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00119988);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00119A40);
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00119AF8);
s32 sceCdChgSys(void) {
    scePrintf(&D_0045DDE0);
    return 2;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libcdvd", func_00119BF0);
