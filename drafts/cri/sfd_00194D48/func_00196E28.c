/* Draft (not built): func_00196E28 at 0x00196E28, size 0x70, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 7 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00196E28.s */

s32 func_00196F08(void *);                          /* extern */
s32 func_001973F0();                                /* extern */

s32 func_00196E28(u8 *arg0) {
    s32 temp_a1;
    s32 var_a0;
    s32 var_v0;

    if (func_001973F0() != 0) {
        goto block_4;
    }
    if (func_00196F08(arg0) != 0) {
        goto block_3;
    }
    temp_a1 = *(s32 *)((u8 *)arg0 + 0x4C);
    goto block_6;
block_3:
block_4:
    return *(s32 *)((u8 *)arg0 + 0x48);
block_6:
    var_a0 = *(s32 *)((u8 *)arg0 + 0x48);
    if (temp_a1 < 2) {
        goto block_9;
    }
    var_v0 = var_a0;
    if (temp_a1 < 5) {
        goto block_10;
    }
    var_a0 = ((temp_a1 ^ 6) == 0) ? 6 : var_a0;
block_9:
    var_v0 = var_a0;
block_10:
    return var_v0;
}
