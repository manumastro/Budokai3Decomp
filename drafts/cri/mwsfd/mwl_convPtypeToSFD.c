/* Draft (not built): mwl_convPtypeToSFD at 0x00181730, size 0x68, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/mwl_convPtypeToSFD.s */

s32 func_001870E8(s32 *, s32);              /* extern */
extern s32 D_00465B20;

s32 mwl_convPtypeToSFD(u32 arg0) {
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
    func_001870E8(&D_00465B20, temp_a1);
    var_v1 = 1;
block_10:
block_11:
    return var_v1;
}

/* Similar function already in C: sfxcnv_CnvZbitToCft (src/cri/sfx.c), similarity 0.64.
 * It is the template below (not built). */
#if 0
s32 sfxcnv_CnvZbitToCft(u32 arg0) {
    s32 var_v1;

    var_v1 = 1;
    if (arg0 != 0x10) {
        if (arg0 >= 0x11U) {
            var_v1 = 2;
            if (arg0 != 0x18) {
                var_v1 = 3;
                if (arg0 != 0x20) {
                    goto block_5;
                }
            }
        } else {
block_5:
            func_0019F6D0(0, 0, &D_00467E90);
            var_v1 = 0;
        }
    }
    return var_v1;
}
#endif
