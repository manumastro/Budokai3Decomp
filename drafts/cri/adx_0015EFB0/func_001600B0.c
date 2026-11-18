/* Draft (not built): func_001600B0 at 0x001600B0, size 0xDC, segment cri/adx_0015EFB0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 5 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/adx_0015EFB0/func_001600B0.s */

s32 ADXERR_CallErrFunc1();
s32 ADXT_Stop();
s32 func_00152508();
s32 func_00152520();
s32 func_0015E408();
s32 func_0015FB70();
s32 func_0016DBE0();
extern s32 D_00462020;
extern s32 D_00462050;

void func_001600B0(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    if ((arg0 == NULL) || (arg1 == 0) || (arg2 < 0)) {
        ADXERR_CallErrFunc1(&D_00462020);
        return;
    }
    ADXT_Stop();
    func_00152508();
    temp_v0 = func_0016DBE0(arg1, arg2);
    if (temp_v0 == 0) {
        func_00152520(arg0, temp_v0);
        ADXERR_CallErrFunc1(&D_00462050);
        return;
    }
    func_0015E408(arg0, temp_v0);
    *(s8 *)((u8 *)arg0 + 2) = 2;
    func_0015FB70(arg0, 0);
    func_00152520();
}
