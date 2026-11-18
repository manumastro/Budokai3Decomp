/* Draft (not built): mwl_convPtypeFromSFD at 0x00181370, size 0x68, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/mwl_convPtypeFromSFD.s */

s32 func_001870E8(s32 *, s32);              /* extern */
extern s32 D_00465AC0;

s32 mwl_convPtypeFromSFD(u32 arg0) {
    s32 temp_a1;
    s32 var_v0;
    s32 var_v1;

    temp_a1 = arg0 < 3U;
    var_v1 = 2;
    if (arg0 == 2) {
        goto block_10;
    }
    if (temp_a1 != 0) {
        goto block_3;
    }
    goto block_6;
block_3:
    var_v0 = 1;
    var_v1 = 1;
    goto block_8;
block_6:
    var_v1 = 3;
    if (arg0 == 3) {
        goto block_10;
    }
    var_v0 = 4;
    var_v1 = 4;
block_8:
    if (arg0 == var_v0) {
        goto block_11;
    }
    func_001870E8(&D_00465AC0, temp_a1);
    var_v1 = 1;
block_10:
block_11:
    return var_v1;
}
