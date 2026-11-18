/* Draft (not built): func_00166CD8 at 0x00166CD8, size 0xC4, segment cri/dvci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/dvci/func_00166CD8.s */

s32 func_00166C88();                                /* extern */
s32 func_00166C98();                                /* extern */
s32 func_00166CB8();                                /* extern */
s32 func_00166CC0();                                /* extern */

s32 func_00166CD8(s32 arg0, s32 arg1) {
    s32 var_v0;
    s32 var_v1;

    var_v0 = 0;
    if (arg0 == 0) {
        goto block_18;
    }
    if (arg1 == 0xCB) {
        goto block_15;
    }
    if (arg1 >= 0xCC) {
        goto block_8;
    }
    if (arg1 == 0xC9) {
        goto block_13;
    }
    if (arg1 >= 0xCA) {
        goto block_14;
    }
    if (arg1 == 0xC8) {
        goto block_12;
    }
    return 0;
block_8:
    if (arg1 == 0xCD) {
        goto block_15;
    }
    if (arg1 < 0xCD) {
        goto block_14;
    }
    if (arg1 == 0x12B) {
        goto block_16;
    }
    return 0;
block_12:
    var_v1 = func_00166C88();
    goto block_17;
block_13:
    var_v1 = func_00166C98();
    goto block_17;
block_14:
    var_v1 = func_00166CB8();
    goto block_17;
block_15:
    var_v1 = func_00166CC0();
    goto block_17;
block_16:
    var_v1 = 1;
block_17:
    var_v0 = var_v1;
block_18:
    return var_v0;
}
