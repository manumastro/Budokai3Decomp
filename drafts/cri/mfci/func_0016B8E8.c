/* Draft (not built): func_0016B8E8 at 0x0016B8E8, size 0x134, segment cri/mfci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 24 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mfci/func_0016B8E8.s */

s32 ADXERR_CallErrFunc1(s32 *);             /* extern */
s32 ADXT_Stop();                                /* extern */
s32 func_00157E70();                            /* extern */
s32 func_00157E88(s32 *, s32 *, s32 **, s32 **); /* extern */
s32 func_0016B008(s32 *, s32);          /* extern */
s32 func_0016B090(s32);                     /* extern */
s32 func_0016B148(s32, s32);                        /* extern */
s32 func_0016B720(s32, s32, s32);               /* extern */
s32 func_0016BA20(void *);                      /* extern */
extern s32 *D_00401094;
extern s32 *D_00401098;
extern s32 *D_0040D5E8;
extern s32 *D_00411178;
extern s32 D_004646F0;
extern s32 D_00464730;
extern s32 func_0016BAF0;
extern s32 func_0016BB60;
extern s32 func_0016BB78;
extern s32 func_0016BBB0;
extern s32 func_0016BBC8;

void func_0016B8E8(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    u8 *temp_s1;

    if (*(s8 *)((u8 *)arg0 + 3) < 2) {
        ADXERR_CallErrFunc1(&D_004646F0);
        return;
    }
    ADXT_Stop();
    func_0016BA20(arg0);
    func_0016B008(&func_0016BBC8, 0);
    func_0016B090(0);
    temp_s1 = *(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 4)) + 4);
    func_00157E70();
    temp_v0 = func_0016B148(arg1, arg2);
    if (temp_v0 == 0) {
        ADXERR_CallErrFunc1(&D_00464730);
        return;
    }
    func_0016B720(temp_v0, *(s32 *)((u8 *)temp_s1 + 0xEC), *(s32 *)((u8 *)temp_s1 + 0xF0));
    *(s32 *)((u8 *)temp_s1 + 0xE8) = temp_v0;
    D_00411178 = &func_0016BAF0;
    D_00401094 = &func_0016BB78;
    D_00401098 = &func_0016BB60;
    D_0040D5E8 = &func_0016BBB0;
    func_00157E88(&func_0016BB60, &func_0016BBB0, &D_00411178, &D_00401094);
}
