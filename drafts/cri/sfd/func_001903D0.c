/* Draft (not built): func_001903D0 at 0x001903D0, size 0x240, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_001903D0.c:63: `sp8' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_001903D0.s */

u32 func_0017B420(s32);                             /* extern */
s32 func_0018AA80(s32, void *);                     /* extern */
s32 func_0018AEA0(void *, s32, s32 *, s32 *);   /* extern */
s32 func_0018AF10(void *, s32, s32, s32);       /* extern */
s32 func_00190610(void *, s32, s32);                /* extern */
s32 func_001907B8(void *, s32);                     /* extern */
s32 func_00190820(void *);                          /* extern */
s32 func_001908A8(void *, s32, s32 *);          /* extern */
s32 func_00190A00(void *, s32, u32 *);          /* extern */

s32 func_001903D0(u8 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    s32 sp20;
    s32 sp24;
    s32 sp28;
    u32 sp2C;
    s32 var_a1;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_5;
    s32 var_a1_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u32 temp_v0_4;

    *arg1 = 0;
    temp_s0 = *(s32 *)((u8 *)arg0 + 0x1C78);
    *arg2 = 0;
    *arg3 = 0;
    var_v0 = func_0018AA80(temp_s0, sp);
    if ((var_v0 == 0) && (sp4 != 0)) {
        temp_v0 = func_001908A8(sp, 0xCE, &sp20);
        if (temp_v0 != sp0) {
            if (temp_v0 != 0) {
                var_v0_2 = func_001907B8(sp, temp_v0);
            } else {
                temp_v0_2 = (sp4 + spC) - 3;
                var_v0_2 = (temp_v0_2 < 0) int 0 : temp_v0_2;
            }
            *arg1 = var_v0_2;
            var_v0 = 0;
            if (*arg1 > 0) {
                *arg3 = 1;
                goto block_32;
            }
            /* Duplicate return node #33. Try simplifying control flow for better match */
            return var_v0;
        }
        *arg1 = 4;
        var_v0 = 0;
        *arg2 = sp20;
        if (!(sp20 & 0x80)) {
            func_0018AEA0(arg0, temp_s0, &sp24, &sp28);
            if (func_00190610(sp, sp20, sp24) != 0) {
                sp24 = 0;
                if (spC == 0) {
                    var_v1 = sp0 + sp4;
                } else {
                    var_v1 = sp8 + spC;
                }
                if (sp28 != var_v1) {
                    sp28 = var_v1;
                    temp_v0_3 = func_00190A00(sp, 0xCC, &sp2C);
                    sp24 = temp_v0_3;
                    func_0018AF10(arg0, temp_s0, temp_v0_3, sp28);
                }
            }
            if (sp24 != 0) {
                temp_v0_4 = func_0017B420(sp24);
                sp2C = temp_v0_4;
                switch (temp_v0_4) {                /* irregular */
                case 8:
                    var_a1 = 8;
                    if (sp20 & 0x40) {
block_25:
                        temp_v0_5 = func_001908A8(sp, var_a1, &sp20);
                        if ((temp_v0_5 == 0) || (var_a1_2 = sp24, (temp_v0_5 == sp24))) {
                            goto block_27;
                        }
                        goto block_31;
                    }
block_29:
                default:
                    var_a1_2 = sp24;
block_31:
                    *arg1 = func_001907B8(sp, var_a1_2);
block_32:
                    var_v0 = 0;
                    /* Duplicate return node #33. Try simplifying control flow for better match */
                    return var_v0;
                case 4:
                    var_a1 = 4;
                    if (sp20 & 0x48) {
                        goto block_25;
                    }
                    goto block_29;
                }
            } else {
block_27:
                return func_00190820(arg0);
            }
        } else {
            /* Duplicate return node #33. Try simplifying control flow for better match */
            return var_v0;
        }
    } else {
        return var_v0;
    }
}
