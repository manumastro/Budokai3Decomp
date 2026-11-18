/* Draft (not built): func_0018A678 at 0x0018A678, size 0x88, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 64 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd/func_0018A678.s */

void func_0018A678(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a2;
    s32 temp_v1;
    s32 var_v0;
    u8 *temp_a0;
    u8 *temp_a0_2;

    temp_v1 = arg2 + 7;
    temp_a0 = arg0 + (arg1 * 0x74);
    temp_a0_2 = temp_a0 + 0x1290;
    var_v0 = *(s32 *)((u8 *)temp_a0_2 + 4);
    temp_a2 = *(s32 *)((u8 *)temp_a0 + 0x1290);
    if (arg3 >= 2) {
        var_v0 = var_v0 / arg3;
    }
    *(s32 *)((u8 *)temp_a0_2 + 0xC) = arg2;
    *(s32 *)((u8 *)temp_a0_2 + 0x10) = arg3;
    *(s32 *)((u8 *)temp_a0_2 + 8) = (s32) M2C_ERROR(/* Read from unset register $t0 */);
    *(s32 *)((u8 *)temp_a0_2 + 0x14) = temp_a2;
    *(s32 *)((u8 *)temp_a0_2 + 0x18) = (s32) (temp_a2 + var_v0);
    *(s32 *)((u8 *)temp_a0_2 + 0x1C) = (s32) (var_v0 / (s32) ((s32) ((temp_v1 < 0) ? (arg2 + 0xE) : temp_v1) >> 3));
}
