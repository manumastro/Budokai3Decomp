/* Draft (not built): func_00115E00 at 0x00115E00, size 0x70, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 24 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_00115E00.s */

s32 __udivdi3(s32, s32, u64);                   /* extern */

s32 func_00115E00(s32 arg0, s32 arg1) {
    u64 temp_a2;

    temp_a2 = (u64) ((arg0 * 0x08CA0000) << 0x20) >> 0x20;
    return ((MULTU_HI(arg0, 0x08CA0000) << 0x20) | temp_a2) + __udivdi3((MULTU_HI(arg1, 0x08CA0000) << 0x20) | ((u64) ((arg1 * 0x08CA0000) << 0x20) >> 0x20), 0xF4240, temp_a2);
}
