/* Draft (not built): func_001519C0 at 0x001519C0, size 0xF4, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 48 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_001519C0.s */

s32 func_001518A0(s32, s32, s16 *, void *, void *, s32, void *); /* extern */

s16 func_001519C0(u8 *arg0, s32 arg1, s32 arg2) {
    s16 sp20;

    *(s16 *)((u8 *)arg0 + 2) = 1;
    if (func_001518A0(arg1, arg2, &sp20, arg0 + 0xC, arg0 + 0x18, arg0 + 0x10, arg0 + 0x9C) < 0) {
        goto block_2;
    }
    *(s32 *)((u8 *)arg0 + 0x34) = 0;
    goto block_4;
block_2:
    return 0;
block_4:
    *(s32 *)((u8 *)arg0 + 0x30) = 0;
    *(s32 *)((u8 *)arg0 + 0x2C) = 0;
    *(s32 *)((u8 *)arg0 + 0x28) = 0;
    *(s32 *)((u8 *)arg0 + 0x20) = 0;
    *(s16 *)((u8 *)arg0 + 0x1C) = 0;
    *(s16 *)((u8 *)arg0 + 0x26) = 0;
    *(s16 *)((u8 *)arg0 + 0x24) = 0;
    *(s32 *)((u8 *)arg0 + 0x50) = (s32) *(s8 *)((u8 *)arg0 + 0xE);
    *(s32 *)((u8 *)arg0 + 0x54) = (s32) *(s8 *)((u8 *)arg0 + 0xF);
    *(s16 *)((u8 *)arg0 + 0x98) = 2;
    *(s32 *)((u8 *)arg0 + 0x5C) = (s32) *(s32 *)((u8 *)arg0 + 0x3C);
    *(s32 *)((u8 *)arg0 + 0x60) = (s32) *(s32 *)((u8 *)arg0 + 0x40);
    *(s32 *)((u8 *)arg0 + 0x58) = (s32) *(s32 *)((u8 *)arg0 + 0x10);
    *(s32 *)((u8 *)arg0 + 0x64) = (s32) *(s32 *)((u8 *)arg0 + 0x44);
    *(s32 *)((u8 *)arg0 + 0x8C) = 0;
    *(s32 *)((u8 *)arg0 + 0x88) = 0;
    return sp20;
}
