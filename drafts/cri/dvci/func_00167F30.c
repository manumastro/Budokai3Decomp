/* Draft (not built): func_00167F30 at 0x00167F30, size 0xA0, segment cri/dvci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00167F30.c:17: `sp4' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/dvci/func_00167F30.s */

s32 func_00164D38(s32);                     /* extern */
s32 func_00165048(s32 *, s32);              /* extern */
s32 func_001650B0(s32);                         /* extern */
s32 func_00168B48(s32, s32 *);              /* extern */
s32 func_001694B0(void *);                      /* extern */
extern s32 D_00413BD0;

s32 func_00167F30(s32 arg0) {
    s32 temp_s0;
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != 0) {
        func_001694B0(sp);
        if (sp4 == 0) {
            func_00168B48(arg0, &D_00413BD0);
            func_00164D38(0x4200);
            temp_s0 = func_00165048(&D_00413BD0, 1);
            func_00164D38(0x4201);
            var_v0 = 0;
            if (temp_s0 >= 0) {
                func_00164D38(0x4300);
                func_001650B0(temp_s0);
                func_00164D38(0x4301);
                goto block_4;
            }
        } else {
block_4:
            var_v0 = 1;
        }
    }
    return var_v0;
}
