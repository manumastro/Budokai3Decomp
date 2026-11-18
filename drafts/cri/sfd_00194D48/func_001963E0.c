/* Draft (not built): func_001963E0 at 0x001963E0, size 0x8C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 31 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_001963E0.s */

s32 func_00196470(s32, s32, s32);               /* extern */

s32 func_001963E0(u8 *arg0, s32 arg1) {
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a1;
    s32 var_a3;
    s32 var_v0;

    var_a1 = arg1;
    temp_a2 = var_a1;
    var_a3 = 0;
    if (temp_a2 != 1) {
        if (temp_a2 == 0) {
            temp_v0 = *(s32 *)((u8 *)arg0 + 0x54) - 1;
            *(s32 *)((u8 *)arg0 + 0x54) = temp_v0;
            if (temp_v0 == 0) {
                var_a1 = 0;
                goto block_11;
            }
            goto block_12;
        }
        if (temp_a2 == 2) {
            var_v0 = 0;
            if (*(s32 *)((u8 *)arg0 + 0x48) == 4) {
                goto block_11;
            }
        } else {
            goto block_13;
        }
    } else {
        temp_v0_2 = *(s32 *)((u8 *)arg0 + 0x54) + 1;
        *(s32 *)((u8 *)arg0 + 0x54) = temp_v0_2;
        if (temp_v0_2 == temp_a2) {
block_11:
            var_a3 = func_00196470(var_a1, temp_a2, 0);
        }
block_12:
block_13:
        var_v0 = var_a3;
    }
    return var_v0;
}
