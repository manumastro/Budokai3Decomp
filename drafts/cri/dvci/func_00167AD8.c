/* Draft (not built): func_00167AD8 at 0x00167AD8, size 0xC8, segment cri/dvci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: rror: d_00167AD8.c:29: too few arguments to function `strlen'
 * Original: asm/nonmatchings/cri/dvci/func_00167AD8.s */

s32 func_00127810(s8 *, s8 *, s8, s8 *);        /* extern */
s32 strlen(s8 *, s32);                          /* extern */
extern s8 D_00413760;
extern s32 D_00463690;

void func_00167AD8(s8 *arg0, s8 arg2, s8 *arg3) {
    s8 *var_a3;
    s8 temp_v0;
    s8 temp_v1;
    s8 var_a2;

    var_a2 = arg2;
    var_a3 = arg3;
    if (arg0 == NULL) {
        *(s8 *)((u8 *)(&D_00413760) + 0) = 0;
    } else {
        temp_v1 = *arg0;
        if ((temp_v1 != 0x2F) && (temp_v1 != 0x5C)) {
            var_a3 = &D_00413760;
            var_a2 = *(s8 *)((u8 *)(&D_00463690) + 1);
            *(s8 *)((u8 *)(&D_00413760) + 0) = *(s8 *)((u8 *)(&D_00463690) + 0);
            *(s8 *)((u8 *)(&D_00413760) + 1) = var_a2;
        } else {
            *(s8 *)((u8 *)(&D_00413760) + 0) = 0;
        }
        func_00127810(&D_00413760, arg0, var_a2, var_a3);
        temp_v0 = *(s8 *)((u8 *)(&arg0[strlen(arg0)]) + -1);
        if ((temp_v0 == 0x2F) || (temp_v0 == 0x5C)) {
            *(s8 *)((u8 *)(&(&D_00413760)[strlen(&D_00413760, 0x5C)]) + -1) = 0;
        }
    }
}
