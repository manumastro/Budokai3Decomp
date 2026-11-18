/* Draft (not built): func_00115A88 at 0x00115A88, size 0x48, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_00115A88.s */

s32 func_00115A88(u32 arg0) {
    s32 temp_a1;

    temp_a1 = (arg0 >> 0xA) << 6;
    if ((s32) arg0 < 0) {
        goto block_4;
    }
    if ((arg0 & 0x3FF) != *(s32 *)((u8 *)temp_a1 + 8)) {
        goto block_3;
    }
    goto block_5;
block_3:
block_4:
    return -1;
block_5:
    if (!(*(s32 *)((u8 *)temp_a1 + 0xC) & 1)) {
        goto block_7;
    }
    return *(s64 *)((u8 *)temp_a1 + 0x10) - *(s64 *)((u8 *)temp_a1 + 0x18);
block_7:
    return 0;
}
