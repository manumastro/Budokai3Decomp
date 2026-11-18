/* Draft (not built): func_00166F70 at 0x00166F70, size 0x194, segment cri/dvci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/dvci/func_00166F70.s */

s32 func_00166380(s32);                         /* extern */
s32 memcpy(s32, void *, s32);                   /* extern */
extern s32 D_00413740;

s32 func_00166F70(s32 arg0, s8 *arg1, s32 arg2, s32 arg3) {
    s32 sp0;
    s32 sp4;
    s32 temp_s1;
    s32 temp_s7;
    s32 var_a0;
    s32 var_s0;
    s32 var_s2;
    s32 var_s5;
    s32 var_v1;
    s8 *temp_s3;
    s8 *var_a1;
    s8 *var_v0_2;
    s8 *var_v1_2;
    s8 temp_v0;
    s8 temp_v0_2;
    s8 temp_v1;
    s8 var_v0;
    u8 *temp_a2;
    u8 *var_a1_2;

    var_a1 = arg1;
    var_s2 = 0;
    temp_s3 = var_a1;
    var_s5 = 0;
    temp_s7 = M2C_ERROR(/* Read from unset register $t0 */);
    sp0 = arg0;
    var_a0 = 0;
    sp4 = arg2;
    if (*temp_s3 != 0) {
        var_s0 = (arg3 * 8) + sp0;
        var_v0 = *var_a1;
loop_2:
        if ((var_v0 == 0xA) || (var_v1 = var_s2 + 1, (var_v0 == 0))) {
            temp_v0 = *(s8 *)((u8 *)var_a1 + 1);
            if ((temp_v0 == 0xA) || (var_v1_2 = var_a1 - 1, (temp_v0 == 0))) {
                var_s2 += 1;
                var_a1 = temp_s3 + var_s2;
                var_v1_2 = var_a1 - 1;
            }
            temp_v0_2 = *var_v1_2;
            temp_s1 = var_s2 - var_a0;
            if ((temp_v0_2 == 0xA) || (var_v0_2 = var_a1 - 2, (temp_v0_2 == 0xD))) {
                *var_v1_2 = 0;
                var_v0_2 = var_a1 - 2;
            }
            temp_v1 = *var_v0_2;
            if ((temp_v1 == 0xA) || (var_a1_2 = temp_s3 + var_a0, (temp_v1 == 0xD))) {
                *var_v0_2 = 0;
                var_a1_2 = temp_s3 + var_a0;
            }
            memcpy(var_s0, var_a1_2, temp_s1);
            func_00166380(var_s0);
            temp_a2 = var_s0 + temp_s1;
            if (*(s8 *)((u8 *)temp_a2 + -1) != 0) {
                *(s8 *)((u8 *)temp_a2 + 0) = 0;
            }
            var_v1 = var_s2 + 1;
            var_s5 += 1;
            var_s0 = temp_s7 + var_s0 + 1;
            var_a0 = var_v1;
            if (var_s5 != arg3) {
                goto block_16;
            }
        } else {
block_16:
            var_s2 = var_v1;
            if (sp4 >= var_v1) {
                var_a1 = temp_s3 + var_v1;
                if (*var_a1 != 0) {
                    var_v0 = *var_a1;
                    goto loop_2;
                }
            }
        }
    }
    if (*(s32 *)((u8 *)(&D_00413740) + 0) == 0) {
        *(s32 *)((u8 *)(&D_00413740) + 0xC) = temp_s7;
        *(s32 *)((u8 *)(&D_00413740) + 8) = arg3;
        *(s32 *)((u8 *)(&D_00413740) + 0) = sp0;
        *(s32 *)((u8 *)(&D_00413740) + 4) = var_s5;
    }
    return var_s5;
}
