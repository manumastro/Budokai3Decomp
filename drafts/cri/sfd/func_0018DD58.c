/* Draft (not built): func_0018DD58 at 0x0018DD58, size 0x19C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0018DD58.c:56: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_0018DD58.s */

s32 func_00179148(s32, s32, s32, void *);           /* extern */
s32 func_0018B840(void *);                          /* extern */
s32 func_0018B860(void *);                          /* extern */
s32 func_0018D650(void *, s32);                 /* extern */
s32 func_0018DEF8(void *, s32, s32, s32 *);     /* extern */
s32 func_0018E0A0(void *, s32, s32, s32 *);         /* extern */
s32 func_0018EB18(void *);                      /* extern */
s32 func_0018EB30(s32);                         /* extern */
s32 func_0018F210(void *, s32, s32, s32);       /* extern */

s32 func_0018DD58(u8 *arg0, s32 arg1, s32 arg2, s32 *arg3) {
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 temp_s1;
    s32 var_s5;
    s32 var_v0;
    s32 var_v0_2;

    var_s5 = 0;
    *arg3 = 0;
    temp_s1 = **(s32 **)((u8 *)arg0 + 0x1C2C);
    var_v0 = func_0018EB30(M2C_ERROR(/* Read from unset register $t0 */));
    if (var_v0 != 0) {
        if (func_00179148(temp_s1, arg1, arg2, sp) != 0) {
            var_s5 = func_0018D650(arg0, 0xFF000D03);
        }
        if (sp4 & 0x20000) {
            func_0018F210(arg0, temp_s1, arg1, arg2);
        }
        if (sp4 == 0x80000) {
            if (func_0018B840(arg0) != 0) {
                func_0018EB18(arg0);
                var_v0_2 = 4;
                goto block_20;
            }
            if (sp4 == sp4) {
                var_v0_2 = 4;
                if (func_0018B860(arg0) == 0) {
                    goto block_11;
                }
                goto block_20;
            }
            goto block_11;
        }
block_11:
        if (sp4 == 0) {
            func_0018DEF8(arg0, arg1, arg2, &sp8);
            var_v0_2 = sp8;
            goto block_20;
        }
        if (sp4 & 0x40000) {
            var_s5 = func_0018E0A0(arg0, arg1 + sp0, arg2 - sp0, &spC);
            var_v0 = var_s5;
            if (sp10 == 1) {
                var_v0_2 = sp0 + spC;
block_20:
                *arg3 = var_v0_2;
                goto block_21;
            }
        } else {
            var_s5 = func_0018D650(arg0, 0xFF000D05);
block_21:
            var_v0 = var_s5;
        }
    }
    return var_v0;
}
