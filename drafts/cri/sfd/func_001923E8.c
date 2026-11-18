/* Draft (not built): func_001923E8 at 0x001923E8, size 0x11C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 76 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd/func_001923E8.s */

s32 func_00178BA8(void *, s32, s32, s32);   /* extern */
void *func_00194560();                              /* extern */

void func_001923E8(s32 arg0, s32 arg1, u8 *arg2) {
    s32 temp_a2;
    s32 temp_a2_2;
    u8 *temp_v0;
    u8 *temp_v1;

    temp_v0 = func_00194560();
    if ((temp_v0 != NULL) && (*(s32 *)((u8 *)temp_v0 + 0) == 0)) {
        temp_a2 = *(s32 *)((u8 *)arg2 + 4);
        temp_v1 = temp_v0 + 0x38;
        temp_a2_2 = (temp_a2 >= 0x201) ? 0x200 : temp_a2;
        *(s32 *)((u8 *)temp_v1 + 0x200) = temp_a2_2;
        func_00178BA8(temp_v1, *(s32 *)((u8 *)arg2 + 0), temp_a2_2, 0x200);
        if (arg1 == 0x3FFFF) {
            *(s32 *)((u8 *)temp_v0 + 4) = 0;
            *(s32 *)((u8 *)temp_v0 + 8) = 0;
        } else {
            *(s32 *)((u8 *)temp_v0 + 8) = 1;
            *(s32 *)((u8 *)temp_v0 + 4) = (s32) (arg1 * 0x32);
        }
        M2C_ERROR(/* unknown instruction: ldl $v0, 0x43($s2) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, 0x3c($s2) */);
        M2C_ERROR(/* unknown instruction: ldl $v1, 0x4b($s2) */);
        M2C_ERROR(/* unknown instruction: ldr $v1, 0x44($s2) */);
        M2C_ERROR(/* unknown instruction: ldl $a0, 0x53($s2) */);
        M2C_ERROR(/* unknown instruction: ldr $a0, 0x4c($s2) */);
        M2C_ERROR(/* unknown instruction: ldl $a1, 0x5b($s2) */);
        M2C_ERROR(/* unknown instruction: ldr $a1, 0x54($s2) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0x13($s0) */);
        M2C_ERROR(/* unknown instruction: sdr $v0, 0xc($s0) */);
        M2C_ERROR(/* unknown instruction: sdl $v1, 0x1b($s0) */);
        M2C_ERROR(/* unknown instruction: sdr $v1, 0x14($s0) */);
        M2C_ERROR(/* unknown instruction: sdl $a0, 0x23($s0) */);
        M2C_ERROR(/* unknown instruction: sdr $a0, 0x1c($s0) */);
        M2C_ERROR(/* unknown instruction: sdl $a1, 0x2b($s0) */);
        M2C_ERROR(/* unknown instruction: sdr $a1, 0x24($s0) */);
        M2C_ERROR(/* unknown instruction: ldl $v0, 0x63($s2) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, 0x5c($s2) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0x33($s0) */);
        M2C_ERROR(/* unknown instruction: sdr $v0, 0x2c($s0) */);
        *(s32 *)((u8 *)temp_v0 + 0x34) = (s32) *(s32 *)((u8 *)(arg0 + 0xCC0) + 0x64);
        *(s32 *)((u8 *)temp_v0 + 0) = 1;
    }
}
