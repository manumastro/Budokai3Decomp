/* Draft (not built): ADXT_SetOutVol at 0x0015F078, size 0x68, segment cri/adx_0015EFB0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_0015EFB0/ADXT_SetOutVol.s */

s32 ADXERR_CallErrFunc1(s32 *);             /* extern */
s32 func_00158990(s32, s32);                    /* extern */
s32 func_00159F18(s32);                             /* extern */
extern s32 D_00461B68;

void ADXT_SetOutVol(u8 *arg0, s16 arg1) {
    s32 temp_s0;

    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461B68);
        return;
    }
    *(s16 *)((u8 *)arg0 + 0x40) = arg1;
    temp_s0 = *(s32 *)((u8 *)arg0 + 0xC);
    func_00158990(temp_s0, *(s16 *)((u8 *)arg0 + 0x40) + func_00159F18(*(s32 *)((u8 *)arg0 + 4)));
}
