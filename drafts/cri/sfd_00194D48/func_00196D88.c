/* Draft (not built): func_00196D88 at 0x00196D88, size 0xA0, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00196D88.s */

s32 func_00196EA0(void *);                          /* extern */
s32 func_00197DC0(void *);                      /* extern */

s32 func_00196D88(u8 *arg0) {
    s32 temp_v1;
    s32 var_s1;

    temp_v1 = *(s32 *)((u8 *)arg0 + 0x4C);
    var_s1 = *(s32 *)((u8 *)arg0 + 0x48);
    if (temp_v1 != 3) {
        if (temp_v1 < 4) {
            if (temp_v1 != 2) {
                return var_s1;
            }
            var_s1 = 2;
            goto block_12;
        }
        if ((temp_v1 != 4) && (temp_v1 != 6)) {
            return var_s1;
        }
        if (func_00196EA0(arg0) != 0) {
            var_s1 = 4;
            func_00197DC0(arg0);
        }
        goto block_12;
    }
    var_s1 = 3;
block_12:
    return var_s1;
}
