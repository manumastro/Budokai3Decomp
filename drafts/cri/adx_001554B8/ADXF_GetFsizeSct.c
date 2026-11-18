/* Draft (not built): ADXF_GetFsizeSct at 0x00155C58, size 0x78, segment cri/adx_001554B8 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/adx_001554B8/ADXF_GetFsizeSct.s */

s32 ADXERR_CallErrFunc1(s32 *);             /* extern */
s32 func_0015CCD0(s32);                             /* extern */
s32 func_0015D4D8(s32);                             /* extern */
s32 func_0015D680(s32);                         /* extern */
extern s32 D_00460AA8;

s32 ADXF_GetFsizeSct(u8 *arg0) {
    s32 var_v0;

    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00460AA8);
        return -3;
    }
    if ((*(s32 *)((u8 *)arg0 + 0xC) <= 0xFFFFE) || (func_0015D680(*(s32 *)((u8 *)arg0 + 4)), var_v0 = -5, (func_0015CCD0(*(s32 *)((u8 *)arg0 + 4)) != 4))) {
        var_v0 = func_0015D4D8(*(s32 *)((u8 *)arg0 + 4));
        *(s32 *)((u8 *)arg0 + 0xC) = var_v0;
    }
    return var_v0;
}
