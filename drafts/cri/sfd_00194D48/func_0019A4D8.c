/* Draft (not built): func_0019A4D8 at 0x0019A4D8, size 0x78, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019A4D8.s */

s32 func_0017EE78(s32, s32);                        /* extern */
extern s32 D_00426B30;
extern s32 D_00426B34;

s32 func_0019A4D8(u8 *arg0, s32 *arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_a2;
    s32 var_s0;
    u8 *temp_a0;
    u8 *temp_v1;

    temp_v1 = arg0 + 0x118;
    temp_a0 = arg0 + 0xEC;
    temp_v0_2 = *(s32 *)((u8 *)arg0 + 0x118);
    *arg2 = temp_v0_2;
    if (temp_v0_2 != 0) {
        var_a2 = *(s32 *)((u8 *)temp_v1 + 0x28);
        var_s0 = *(s32 *)((u8 *)temp_v1 + 0x24);
        goto block_7;
    }
    temp_v0_3 = *(s32 *)((u8 *)temp_a0 + 0x24);
    var_s0 = temp_v0_3;
    if (temp_v0_3 >= 0) {
        var_a2 = *(s32 *)((u8 *)temp_a0 + 0x28);
block_7:
        temp_v0 = func_0017EE78(var_s0, var_a2);
        D_00426B30 = var_s0;
        D_00426B34 = temp_v0;
        return temp_v0;
    }
    return -1;
}
