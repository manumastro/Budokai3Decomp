/* Draft (not built): func_001999F0 at 0x001999F0, size 0xD4, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 96 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_001999F0.s */

s32 func_0018D650(s32, s32);            /* extern */
s32 func_0018D870();                                /* extern */

void func_001999F0(s32 arg0, s32 arg1) {
    if (func_0018D870() != 0) {
        func_0018D650(0, 0xFF000114);
        return;
    }
    M2C_ERROR(/* unknown instruction: ldl $v1, 0x913($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, 0x90c($s0) */);
    M2C_ERROR(/* unknown instruction: ldl $a0, 0x91b($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $a0, 0x914($s0) */);
    M2C_ERROR(/* unknown instruction: ldl $a1, 0x923($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $a1, 0x91c($s0) */);
    M2C_ERROR(/* unknown instruction: ldl $a2, 0x92b($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $a2, 0x924($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x7($s1) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, ($s1) */);
    M2C_ERROR(/* unknown instruction: sdl $a0, 0xf($s1) */);
    M2C_ERROR(/* unknown instruction: sdr $a0, 0x8($s1) */);
    M2C_ERROR(/* unknown instruction: sdl $a1, 0x17($s1) */);
    M2C_ERROR(/* unknown instruction: sdr $a1, 0x10($s1) */);
    M2C_ERROR(/* unknown instruction: sdl $a2, 0x1f($s1) */);
    M2C_ERROR(/* unknown instruction: sdr $a2, 0x18($s1) */);
    M2C_ERROR(/* unknown instruction: ldl $v1, 0x933($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, 0x92c($s0) */);
    M2C_ERROR(/* unknown instruction: ldl $a0, 0x93b($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $a0, 0x934($s0) */);
    M2C_ERROR(/* unknown instruction: ldl $a1, 0x943($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $a1, 0x93c($s0) */);
    M2C_ERROR(/* unknown instruction: ldl $a2, 0x94b($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $a2, 0x944($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x27($s1) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0x20($s1) */);
    M2C_ERROR(/* unknown instruction: sdl $a0, 0x2f($s1) */);
    M2C_ERROR(/* unknown instruction: sdr $a0, 0x28($s1) */);
    M2C_ERROR(/* unknown instruction: sdl $a1, 0x37($s1) */);
    M2C_ERROR(/* unknown instruction: sdr $a1, 0x30($s1) */);
    M2C_ERROR(/* unknown instruction: sdl $a2, 0x3f($s1) */);
    M2C_ERROR(/* unknown instruction: sdr $a2, 0x38($s1) */);
}
