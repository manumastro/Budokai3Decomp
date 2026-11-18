/* Draft (not built): func_00184870 at 0x00184870, size 0x5C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_00184870.s */

s32 func_001870E8(s32 *, s32);              /* extern */
extern s32 D_00466768;

s32 func_00184870(u32 arg0) {
    s32 temp_a1;
    s32 var_v0;
    s32 var_v1;

    temp_a1 = arg0 < 3U;
    var_v1 = 2;
    if (arg0 == 2) {
        goto block_9;
    }
    if (temp_a1 != 0) {
        goto block_3;
    }
    var_v0 = 3;
    goto block_6;
block_3:
    var_v0 = 1;
    var_v1 = 1;
    goto block_7;
block_6:
    var_v1 = 3;
block_7:
    if (arg0 == var_v0) {
        goto block_10;
    }
    func_001870E8(&D_00466768, temp_a1);
    var_v1 = 3;
block_9:
block_10:
    return var_v1;
}
