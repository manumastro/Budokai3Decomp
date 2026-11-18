/* Draft (not built): func_00192D68 at 0x00192D68, size 0x78, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 120 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_00192D68.s */

s32 func_00192D68(u8 *arg0) {
    s32 var_v0;
    u8 *temp_a1;

    temp_a1 = arg0 + 0xD80;
    var_v0 = *(s32 *)((u8 *)temp_a1 + 0x24) < *(s32 *)((u8 *)arg0 + 0xDFC);
    if (var_v0 != 0) {
        M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($a1) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, ($a1) */);
        M2C_ERROR(/* unknown instruction: ldl $v1, 0xf($a1) */);
        M2C_ERROR(/* unknown instruction: ldr $v1, 0x8($a1) */);
        M2C_ERROR(/* unknown instruction: ldl $a2, 0x17($a1) */);
        M2C_ERROR(/* unknown instruction: ldr $a2, 0x10($a1) */);
        M2C_ERROR(/* unknown instruction: ldl $a3, 0x1f($a1) */);
        M2C_ERROR(/* unknown instruction: ldr $a3, 0x18($a1) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($a0) */);
        M2C_ERROR(/* unknown instruction: sdr $v0, ($a0) */);
        M2C_ERROR(/* unknown instruction: sdl $v1, 0xf($a0) */);
        M2C_ERROR(/* unknown instruction: sdr $v1, 0x8($a0) */);
        M2C_ERROR(/* unknown instruction: sdl $a2, 0x17($a0) */);
        M2C_ERROR(/* unknown instruction: sdr $a2, 0x10($a0) */);
        M2C_ERROR(/* unknown instruction: sdl $a3, 0x1f($a0) */);
        M2C_ERROR(/* unknown instruction: sdr $a3, 0x18($a0) */);
        M2C_ERROR(/* unknown instruction: ldl $v0, 0x27($a1) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, 0x20($a1) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0x27($a0) */);
        var_v0 = M2C_ERROR(/* unknown instruction: sdr $v0, 0x20($a0) */);
        *(s32 *)((u8 *)(arg0 + 0xDAC) + 0x28) = (s32) *(s32 *)((u8 *)temp_a1 + 0x28);
    }
    return var_v0;
}
