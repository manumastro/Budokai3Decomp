/* Draft (not built): sfxcnv_IsCnvUpHalf at 0x0019EDD0, size 0xB8, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfx/sfxcnv_IsCnvUpHalf.s */

s32 func_0019F6D0(s32, s32, s32 *); /* extern */
extern s32 D_00467A80;

s32 sfxcnv_IsCnvUpHalf(u8 *arg0) {
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = *(s32 *)((u8 *)arg0 + 4);
    if (temp_v1 == 0x41) {
        goto block_16;
    }
    if (temp_v1 >= 0x42) {
        goto block_9;
    }
    var_v0 = 1;
    if (temp_v1 == 0x21) {
        goto block_17;
    }
    if (temp_v1 >= 0x22) {
        goto block_7;
    }
    if (temp_v1 == 0x11) {
        goto block_16;
    }
    goto block_15;
block_7:
    if (temp_v1 == 0x31) {
        goto block_16;
    }
    goto block_15;
block_9:
    var_v0 = 1;
    if (temp_v1 == 0x101) {
        goto block_17;
    }
    if (temp_v1 >= 0x102) {
        goto block_13;
    }
    if (temp_v1 == 0xF1) {
        goto block_16;
    }
    goto block_15;
block_13:
    if (temp_v1 != 0x1001) {
        goto block_15;
    }
    goto block_16;
block_15:
    func_0019F6D0(0, 0, &D_00467A80);
block_16:
    var_v0 = 0;
block_17:
    return var_v0;
}
