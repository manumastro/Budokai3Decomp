/* Draft (not built): ADXF_ReadSj32 at 0x001555B8, size 0x8C, segment cri/adx_001554B8 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/adx_001554B8/ADXF_ReadSj32.s */

s32 ADXERR_CallErrFunc1(s32 *);             /* extern */
s32 func_001554B8(s8);                              /* extern */
extern s32 D_00460818;
extern s32 D_00460840;
extern s32 D_00460870;

s32 ADXF_ReadSj32(u8 *arg0, s32 arg1, s32 arg2) {
    s32 *var_a0;
    s32 var_v0;
    s8 temp_a3;

    if (arg0 != NULL) {
        goto block_2;
    }
    var_a0 = &D_00460818;
    goto block_9;
block_2:
    if (arg1 >= 0) {
        goto block_5;
    }
    var_a0 = &D_00460840;
    goto block_9;
block_5:
    if (arg2 == 0) {
        goto block_7;
    }
    temp_a3 = *(s8 *)((u8 *)arg0 + 1);
    goto block_10;
block_7:
    var_a0 = &D_00460870;
block_9:
    ADXERR_CallErrFunc1(var_a0);
    return -3;
block_10:
    var_v0 = 0;
    if (temp_a3 == 2) {
        goto block_12;
    }
    var_v0 = func_001554B8(temp_a3);
    *(s8 *)((u8 *)arg0 + 2) = 1;
block_12:
    return var_v0;
}
