/* Draft (not built): ADXT_SetWaitPlayStart at 0x0015F7F8, size 0x30, segment cri/adx_0015EFB0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_0015EFB0/ADXT_SetWaitPlayStart.s */

s32 ADXERR_CallErrFunc1(s32 *);             /* extern */
extern s32 D_00461E70;

void ADXT_SetWaitPlayStart(u8 *arg0, s8 arg1) {
    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461E70);
        return;
    }
    *(s8 *)((u8 *)arg0 + 0x70) = arg1;
}
