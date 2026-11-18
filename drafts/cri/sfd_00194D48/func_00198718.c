/* Draft (not built): func_00198718 at 0x00198718, size 0xA8, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 28 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00198718.s */

s32 func_001987C0(s32, s32);                    /* extern */

void func_00198718(u8 *arg0, u8 *arg2, s32 arg3) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;

    if (*(s32 *)((u8 *)arg0 + 8) != 0) {
        temp_v0 = func_001987C0(arg3, M2C_ERROR(/* Read from unset register $t0 */));
        if (temp_v0 != -1) {
            temp_v0_2 = *(s32 *)((u8 *)arg0 + 4);
            temp_v1 = *(s32 *)((u8 *)arg0 + 0x10) + temp_v0;
            temp_v1_2 = (temp_v1 >= temp_v0_2) ? (temp_v1 - temp_v0_2) : temp_v1;
            *(s32 *)((u8 *)arg0 + 8) = (s32) (*(s32 *)((u8 *)arg0 + 8) - temp_v0);
            *(s32 *)((u8 *)arg0 + 0x10) = temp_v1_2;
            M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($v0) */);
            M2C_ERROR(/* unknown instruction: ldr $v1, ($v0) */);
            M2C_ERROR(/* unknown instruction: sdl $v1, 0x7($s1) */);
            M2C_ERROR(/* unknown instruction: sdr $v1, ($s1) */);
            *(s32 *)((u8 *)arg2 + 8) = (s32) *(s32 *)((u8 *)((temp_v1_2 * 0xC) + *(s32 *)((u8 *)arg0 + 0)) + 8);
        }
    }
}
