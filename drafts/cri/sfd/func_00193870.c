/* Draft (not built): func_00193870 at 0x00193870, size 0xEC, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00193870.c:32: `sp8' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_00193870.s */

s32 func_0018AA80(s32, void *);                     /* extern */
u32 func_001908A8(void *, s32, s32 *);          /* extern */
s32 func_00193960(void *, s32);                 /* extern */

s32 func_00193870(u8 *arg0, s32 arg2) {
    s32 sp20;
    s32 var_s0;
    s32 var_v0;
    u32 temp_v0;

    var_v0 = func_0018AA80(*(s32 *)((u8 *)arg0 + 0x1C78), sp);
    if (var_v0 != 0) {
        return 0;
    }
    if (sp4 != 0) {
        temp_v0 = func_001908A8(sp, arg2, &sp20);
        if (temp_v0 == 0) {
            var_s0 = (sp4 + spC) - 3;
            if (var_s0 < 0) {
                var_s0 = 0;
            }
        } else if (temp_v0 >= sp0) {
            var_s0 = temp_v0 - sp0;
            if (temp_v0 >= (u32) (sp0 + sp4)) {
                goto block_10;
            }
        } else {
block_10:
            var_s0 = 0;
            if ((temp_v0 >= sp8) && (temp_v0 < (u32) (sp8 + spC))) {
                var_s0 = (temp_v0 - sp8) + sp4;
            }
        }
        func_00193960(arg0, var_s0);
        var_v0 = var_s0;
    }
    return var_v0;
}
