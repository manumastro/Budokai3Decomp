/* Draft (not built): func_001995C8 at 0x001995C8, size 0x48, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 9 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_001995C8.s */

s32 func_001995C8(s32 arg0) {
    s32 temp_v0;
    u8 *temp_a1;

    temp_a1 = arg0 + 0x1BE0;
    temp_v0 = *(s32 *)((u8 *)(temp_a1 + (*(s32 *)((u8 *)(arg0 + (*(s32 *)((u8 *)temp_a1 + 0x14) * 0x74)) + 0x12D0) * 0x44)) + 0x20);
    return (temp_v0 < 0) ? -1 : temp_v0;
}
