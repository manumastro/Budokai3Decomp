/* Draft (not built): ADXT_GetNumSctIbuf at 0x0015F390, size 0x60, segment cri/adx_0015EFB0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_0015EFB0/ADXT_GetNumSctIbuf.s */

s32 ADXERR_CallErrFunc1(s32 *);             /* extern */
extern s32 D_00461C88;

s32 ADXT_GetNumSctIbuf(u8 *arg0) {
    s32 temp_v0;
    u8 **temp_v1;

    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461C88);
        return -1;
    }
    temp_v1 = *(u8 ***)((u8 *)arg0 + 0x14);
    if (temp_v1 != NULL) {
        temp_v0 = (*(s32 (**)(u8 **, s32))((u8 *)(*temp_v1) + 0x24))(temp_v1, 1);
        return (s32) ((temp_v0 < 0) ? (temp_v0 + 0x7FF) : temp_v0) >> 0xB;
    }
    return 0;
}
