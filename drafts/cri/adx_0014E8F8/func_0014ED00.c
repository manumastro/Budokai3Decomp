/* Draft (not built): func_0014ED00 at 0x0014ED00, size 0xB0, segment cri/adx_0014E8F8 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 25 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_0014E8F8/func_0014ED00.s */

s32 func_0014ED00(u8 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (*(s32 *)((u8 *)arg0 + 0xC0) != 0) {
        *(s8 *)((u8 *)arg0 + 0xE) = 1;
        *(s8 *)((u8 *)arg0 + 0xD) = 0x10;
        *(s32 *)((u8 *)arg0 + 0x18) = 0x7FFFFFFF;
        *(s8 *)((u8 *)arg0 + 0xF) = 0x7F;
        *(s16 *)((u8 *)arg0 + 0x98) = 0xF;
        *(s32 *)((u8 *)arg0 + 0x50) = 1;
        *(s32 *)((u8 *)arg0 + 0x54) = 0x7F;
        *(s32 *)((u8 *)arg0 + 0x58) = 0x600;
        *(s32 *)((u8 *)arg0 + 0x5C) = (s32) *(s32 *)((u8 *)arg0 + 0x3C);
        *(s32 *)((u8 *)arg0 + 0x60) = (s32) *(s32 *)((u8 *)arg0 + 0x40);
        *(s32 *)((u8 *)arg0 + 0x64) = (s32) *(s32 *)((u8 *)arg0 + 0x44);
        *(s32 *)((u8 *)arg0 + 0x88) = 0;
        *(s16 *)((u8 *)arg0 + 2) = 1;
        *(s32 *)((u8 *)arg0 + 0x10) = 0x600;
        *(s32 *)((u8 *)arg0 + 0x8C) = 0;
        *(s16 *)((u8 *)arg0 + 0x1C) = 0;
        *(s16 *)((u8 *)arg0 + 0x24) = 0;
        *(s16 *)((u8 *)arg0 + 0x26) = 0;
        *(s32 *)((u8 *)arg0 + 0x20) = 0;
        *(s32 *)((u8 *)arg0 + 0x28) = 0;
        *(s32 *)((u8 *)arg0 + 0x2C) = 0;
        *(s32 *)((u8 *)arg0 + 0x30) = 0;
        *(s32 *)((u8 *)arg0 + 0x34) = 0;
        *(s32 *)((u8 *)arg0 + 0x14) = 0xBB80;
        var_v0 = 1;
    }
    return var_v0;
}
