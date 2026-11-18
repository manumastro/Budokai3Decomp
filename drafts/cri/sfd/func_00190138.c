/* Draft (not built): func_00190138 at 0x00190138, size 0x44, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 24 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_00190138.s */

s32 func_00194798(s32);                             /* extern */

s32 func_00190138(u8 *arg0) {
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;

    temp_s0_2 = *(s32 *)((u8 *)arg0 + 0x9FC);
    temp_v0 = *(s32 *)((u8 *)arg0 + 0x2C);
    temp_s0 = (~temp_s0_2 == 0) ? temp_v0 : temp_s0_2;
    temp_a1 = temp_v0 < temp_s0;
    return (func_00194798(temp_a1) < ((temp_a1 != 0) ? temp_v0 : temp_s0)) == 0;
}
