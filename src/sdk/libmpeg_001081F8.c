#include "common.h"

s32 func_001099A8(s32);                         /* extern */

s32 func_001098C0(s32);                         /* extern */

s32 func_001081F8(u8 *arg0) {
    func_001098C0(*(s32 *)((u8 *)arg0 + 0x40) + 0x68);
    return 1;
}
s32 func_00108220(u8 *arg0) {
    func_001099A8(*(s32 *)((u8 *)arg0 + 0x40) + 0x68);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_001081F8", func_00108248);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_001081F8", func_001084D8);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_001081F8", func_00108798);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_001081F8", func_00108BB8);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_001081F8", func_00108C78);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_001081F8", func_00108D08);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_001081F8", func_00108EC8);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_001081F8", func_001093A0);
INCLUDE_ASM("asm/nonmatchings/sdk/libmpeg_001081F8", func_001094E8);
