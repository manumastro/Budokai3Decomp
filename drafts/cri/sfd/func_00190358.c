/* Draft (not built): func_00190358 at 0x00190358, size 0x74, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00190358.c:15: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_00190358.s */

s32 func_001903D0(s32, void *, s32 *, s32 *);       /* extern */
s32 func_00190B68(s32, s32, s32, s32);              /* extern */

s32 func_00190358(s32 arg0) {
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 var_v1;

loop_1:
    var_v1 = func_001903D0(arg0, sp, &sp4, &sp8);
    if (var_v1 == 0) {
        var_v1 = func_00190B68(arg0, sp0, sp4, sp8);
        if (var_v1 == 0) {
            if (spC != 0) {
                goto loop_1;
            }
        }
    }
    return var_v1;
}
