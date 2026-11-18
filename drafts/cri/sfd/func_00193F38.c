/* Draft (not built): func_00193F38 at 0x00193F38, size 0x16C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 188 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd/func_00193F38.s */

s32 func_0018D650(void *, s32);                 /* extern */
s32 func_001940A8(s32);                             /* extern */
s32 func_00195C78(s32 *, s32 *, s32);   /* extern */
extern s32 D_00492988;
extern s32 D_004929B8;

s32 func_00193F38(u8 *arg0) {
    s32 temp_a3;
    s32 temp_s1;
    s32 var_v0;
    u8 *temp_s0;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x1C70);
    temp_s1 = *(s32 *)((u8 *)temp_s0 + 0);
    var_v0 = 0;
    if (temp_s1 != 0) {
        M2C_ERROR(/* unknown instruction: ldl $a2, 0xb($s0) */);
        M2C_ERROR(/* unknown instruction: ldr $a2, 0x4($s0) */);
        M2C_ERROR(/* unknown instruction: ldl $a3, 0x13($s0) */);
        M2C_ERROR(/* unknown instruction: ldr $a3, 0xc($s0) */);
        M2C_ERROR(/* unknown instruction: ldl $t0, 0x1b($s0) */);
        M2C_ERROR(/* unknown instruction: ldr $t0, 0x14($s0) */);
        M2C_ERROR(/* unknown instruction: sdl $a2, 0x7($t1) */);
        M2C_ERROR(/* unknown instruction: sdr $a2, ($t1) */);
        M2C_ERROR(/* unknown instruction: sdl $a3, 0xf($t1) */);
        M2C_ERROR(/* unknown instruction: sdr $a3, 0x8($t1) */);
        M2C_ERROR(/* unknown instruction: sdl $t0, 0x17($t1) */);
        M2C_ERROR(/* unknown instruction: sdr $t0, 0x10($t1) */);
        M2C_ERROR(/* unknown instruction: ldl $a2, 0x23($s0) */);
        M2C_ERROR(/* unknown instruction: ldr $a2, 0x1c($s0) */);
        temp_a3 = *(s32 *)((u8 *)temp_s0 + 0x24);
        M2C_ERROR(/* unknown instruction: sdl $a2, 0x1f($t1) */);
        M2C_ERROR(/* unknown instruction: sdr $a2, 0x18($t1) */);
        *(s32 *)((u8 *)(&D_00492988) + 0x20) = temp_a3;
        M2C_ERROR(/* unknown instruction: ldl $v0, 0x2f($s0) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, 0x28($s0) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($t0) */);
        M2C_ERROR(/* unknown instruction: sdr $v0, ($t0) */);
        M2C_ERROR(/* unknown instruction: ldl $t1, 0x37($s0) */);
        M2C_ERROR(/* unknown instruction: ldr $t1, 0x30($s0) */);
        M2C_ERROR(/* unknown instruction: ldl $v0, 0x3f($s0) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, 0x38($s0) */);
        M2C_ERROR(/* unknown instruction: ldl $v1, 0x47($s0) */);
        M2C_ERROR(/* unknown instruction: ldr $v1, 0x40($s0) */);
        M2C_ERROR(/* unknown instruction: sdl $t1, 0x7($a2) */);
        M2C_ERROR(/* unknown instruction: sdr $t1, ($a2) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0xf($a2) */);
        M2C_ERROR(/* unknown instruction: sdr $v0, 0x8($a2) */);
        M2C_ERROR(/* unknown instruction: sdl $v1, 0x17($a2) */);
        M2C_ERROR(/* unknown instruction: sdr $v1, 0x10($a2) */);
        M2C_ERROR(/* unknown instruction: ldl $t1, 0x4f($s0) */);
        M2C_ERROR(/* unknown instruction: ldr $t1, 0x48($s0) */);
        M2C_ERROR(/* unknown instruction: ldl $v0, 0x57($s0) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, 0x50($s0) */);
        M2C_ERROR(/* unknown instruction: ldl $v1, 0x5f($s0) */);
        M2C_ERROR(/* unknown instruction: ldr $v1, 0x58($s0) */);
        M2C_ERROR(/* unknown instruction: sdl $t1, 0x1f($a2) */);
        M2C_ERROR(/* unknown instruction: sdr $t1, 0x18($a2) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0x27($a2) */);
        M2C_ERROR(/* unknown instruction: sdr $v0, 0x20($a2) */);
        M2C_ERROR(/* unknown instruction: sdl $v1, 0x2f($a2) */);
        M2C_ERROR(/* unknown instruction: sdr $v1, 0x28($a2) */);
        M2C_ERROR(/* unknown instruction: ldl $t1, 0x67($s0) */);
        M2C_ERROR(/* unknown instruction: ldr $t1, 0x60($s0) */);
        M2C_ERROR(/* unknown instruction: ldl $v0, 0x6f($s0) */);
        M2C_ERROR(/* unknown instruction: ldr $v0, 0x68($s0) */);
        M2C_ERROR(/* unknown instruction: sdl $t1, 0x37($a2) */);
        M2C_ERROR(/* unknown instruction: sdr $t1, 0x30($a2) */);
        M2C_ERROR(/* unknown instruction: sdl $v0, 0x3f($a2) */);
        M2C_ERROR(/* unknown instruction: sdr $v0, 0x38($a2) */);
        func_00195C78(&D_004929B8, &D_004929B8, temp_a3);
        var_v0 = func_001940A8(temp_s1);
        if (var_v0 != 0) {
            return func_0018D650(arg0, 0xFF000F0C);
        }
        *(s32 *)((u8 *)temp_s0 + 0) = 0;
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}
