/* Draft (not built): func_0010F000 at 0x0010F000, size 0xA0, segment sdk/libkernl/kfiv_filestub (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: ile error: d_0010F000.c:24: for each function it appears in.)
 * Original: asm/nonmatchings/sdk/libkernl/kfiv_filestub/func_0010F000.s */

s32 DI();                                           /* extern */
s32 EI();                                       /* extern */
s32 _sceFsWaitS(s32);                       /* extern */
s32 func_0010EFF0();                            /* extern */
s32 func_0010F0E8();                            /* extern */
extern s32 D_003EC6BC;
extern s32 D_00474BC0;
extern s32 D_00474C00;

s32 func_0010F000(s32 arg0, s32 arg1) {
    s32 temp_s1;
    s32 temp_v0;

    _sceFsWaitS(0x1B);
    if (D_003EC6BC == 0) {
        func_0010F0E8();
    }
    temp_v0 = DI();
    temp_s1 = *(s32 *)((u8 *)(&D_00474BC0) + 0);
    *(s32 *)((u8 *)(&D_00474BC0) + 4) = arg1;
    *(s32 *)((u8 *)(&D_00474BC0) + 0) = arg0;
    D_00474C00 = saved_reg_gp;
    if (temp_v0 != 0) {
        EI();
    }
    func_0010EFF0();
    return temp_s1;
}
