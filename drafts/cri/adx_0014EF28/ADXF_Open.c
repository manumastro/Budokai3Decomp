/* Draft (not built): ADXF_Open at 0x00155068, size 0xB0, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_0014EF28/ADXF_Open.s */

s32 ADXERR_CallErrFunc1(s32 *);             /* extern */
s32 func_0015CC00(s32, s32);                /* extern */
s32 func_0015CC78(s32);                         /* extern */
s32 func_0015CCD0(s32);                             /* extern */
s32 func_0015D4D0(s32);                             /* extern */
s32 func_0015D4D8(s32);                             /* extern */
extern s32 D_004607E0;

s32 ADXF_Open(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    if (arg1 == 0) {
        ADXERR_CallErrFunc1(&D_004607E0);
        return -1;
    }
    *(s32 *)((u8 *)arg0 + 0x38) = arg1;
    *(s32 *)((u8 *)arg0 + 0x34) = arg2;
    *(s32 *)((u8 *)arg0 + 0x14) = 0;
    func_0015CC00(*(s32 *)((u8 *)arg0 + 4), 0);
    if (func_0015CCD0(*(s32 *)((u8 *)arg0 + 4)) == 4) {
        func_0015CC78(*(s32 *)((u8 *)arg0 + 4));
        return -1;
    }
    *(s32 *)((u8 *)arg0 + 0x10) = func_0015D4D0(*(s32 *)((u8 *)arg0 + 4));
    temp_v0 = func_0015D4D8(*(s32 *)((u8 *)arg0 + 4));
    *(s32 *)((u8 *)arg0 + 0x3C) = 0;
    *(s32 *)((u8 *)arg0 + 0x40) = temp_v0;
    *(s32 *)((u8 *)arg0 + 0xC) = temp_v0;
    return 0;
}
