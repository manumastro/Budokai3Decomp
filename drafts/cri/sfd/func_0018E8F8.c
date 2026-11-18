/* Draft (not built): func_0018E8F8 at 0x0018E8F8, size 0x140, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0018E8F8.c:27: `sp14' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_0018E8F8.s */

s32 func_00178BA8(s32, s32, s32);               /* extern */
s32 func_0018AA68(void *);                          /* extern */
s32 func_0018AB40(s32, s32, s32, s32);              /* extern */
s32 func_00198568(s32, s32, s32 *, s32 *);      /* extern */
s32 func_00198890(s32, s32);                        /* extern */

s32 func_0018E8F8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp30;
    s32 temp_fp;
    s32 var_v0;

    temp_fp = M2C_ERROR(/* Read from unset register $t0 */);
    var_v0 = func_0018AA68(sp);
    if (var_v0 == 0) {
        if (((sp4 + spC) >= arg3) && (var_v0 = 0, (func_00198890(arg0, arg1) == 0))) {
            if (sp4 >= arg3) {
                func_00178BA8(sp0, arg2, arg3);
            } else {
                func_00178BA8(sp0, arg2, sp4);
                func_00178BA8(sp8, arg2 + sp4, arg3 - sp4);
            }
            var_v0 = func_0018AB40(arg0, arg1, arg3, sp14);
            if (var_v0 == 0) {
                if ((temp_fp < 0) || (sp20 = temp_fp, sp24 = sp0, sp28 = arg3, var_v0 = func_00198568(arg0, arg1, &sp20, &sp30), (var_v0 == 0))) {
                    var_v0 = 1;
                }
            }
        }
    }
    return var_v0;
}
