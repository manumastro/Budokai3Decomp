/* Draft (not built): ADXT_IsIbufSafety at 0x0015F540, size 0x6C, segment cri/adx_0015EFB0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_0015EFB0/ADXT_IsIbufSafety.s */

s32 ADXERR_CallErrFunc1(s32 *);             /* extern */
extern s32 D_00461D20;

s32 ADXT_IsIbufSafety(u8 *arg0) {
    u8 **temp_v1;

    if (arg0 == NULL) {
        ADXERR_CallErrFunc1(&D_00461D20);
        return -1;
    }
    temp_v1 = *(u8 ***)((u8 *)arg0 + 0x14);
    if (temp_v1 != NULL) {
        return ((*(s32 (**)(u8 **, s32))((u8 *)(*temp_v1) + 0x24))(temp_v1, 1) < (*(s16 *)((u8 *)arg0 + 0x3E) << 0xB)) == 0;
    }
    return 0;
}
