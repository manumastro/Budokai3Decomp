/* Draft (not built): func_00193B18 at 0x00193B18, size 0x1FC, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 172 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd/func_00193B18.s */

s32 func_0018D650(s32, s32);                    /* extern */
s32 func_00191588(void *);                      /* extern */
s32 func_00193D18();                                /* extern */
s32 func_00193DE0(void *, void *, s32, s32); /* extern */
s32 func_00193E80(void *);                      /* extern */
s32 func_00193EA0(void *);                      /* extern */
extern s32 D_00492988;

s32 func_00193B18(s32 arg0, u8 *arg1) {
    s32 var_a0;
    u8 **var_v1;
    u8 *var_v0;

    if (func_00193D18() != 0) {
        return func_0018D650(arg0, 0xFF000F15);
    }
    M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($a3) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, ($a3) */);
    M2C_ERROR(/* unknown instruction: ldl $a1, 0xf($a3) */);
    M2C_ERROR(/* unknown instruction: ldr $a1, 0x8($a3) */);
    M2C_ERROR(/* unknown instruction: ldl $a2, 0x17($a3) */);
    M2C_ERROR(/* unknown instruction: ldr $a2, 0x10($a3) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0xb($s0) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0x4($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $a1, 0x13($s0) */);
    M2C_ERROR(/* unknown instruction: sdr $a1, 0xc($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $a2, 0x1b($s0) */);
    M2C_ERROR(/* unknown instruction: sdr $a2, 0x14($s0) */);
    M2C_ERROR(/* unknown instruction: ldl $v1, 0x1f($a3) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, 0x18($a3) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x23($s0) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0x1c($s0) */);
    *(s32 *)((u8 *)arg1 + 0x24) = (s32) *(s32 *)((u8 *)(&D_00492988) + 0x20);
    M2C_ERROR(/* unknown instruction: ldl $t0, 0x7($t3) */);
    M2C_ERROR(/* unknown instruction: ldr $t0, ($t3) */);
    M2C_ERROR(/* unknown instruction: sdl $t0, 0x2f($s0) */);
    M2C_ERROR(/* unknown instruction: sdr $t0, 0x28($s0) */);
    M2C_ERROR(/* unknown instruction: ldl $a0, 0x7($t3) */);
    M2C_ERROR(/* unknown instruction: ldr $a0, ($t3) */);
    M2C_ERROR(/* unknown instruction: ldl $a2, 0xf($t3) */);
    M2C_ERROR(/* unknown instruction: ldr $a2, 0x8($t3) */);
    M2C_ERROR(/* unknown instruction: ldl $t2, 0x17($t3) */);
    M2C_ERROR(/* unknown instruction: ldr $t2, 0x10($t3) */);
    M2C_ERROR(/* unknown instruction: sdl $a0, 0x7($v1) */);
    M2C_ERROR(/* unknown instruction: sdr $a0, ($v1) */);
    M2C_ERROR(/* unknown instruction: sdl $a2, 0xf($v1) */);
    M2C_ERROR(/* unknown instruction: sdr $a2, 0x8($v1) */);
    M2C_ERROR(/* unknown instruction: sdl $t2, 0x17($v1) */);
    M2C_ERROR(/* unknown instruction: sdr $t2, 0x10($v1) */);
    M2C_ERROR(/* unknown instruction: ldl $a0, 0x1f($t3) */);
    M2C_ERROR(/* unknown instruction: ldr $a0, 0x18($t3) */);
    M2C_ERROR(/* unknown instruction: ldl $a2, 0x27($t3) */);
    M2C_ERROR(/* unknown instruction: ldr $a2, 0x20($t3) */);
    M2C_ERROR(/* unknown instruction: ldl $t2, 0x2f($t3) */);
    M2C_ERROR(/* unknown instruction: ldr $t2, 0x28($t3) */);
    M2C_ERROR(/* unknown instruction: sdl $a0, 0x1f($v1) */);
    M2C_ERROR(/* unknown instruction: sdr $a0, 0x18($v1) */);
    M2C_ERROR(/* unknown instruction: sdl $a2, 0x27($v1) */);
    M2C_ERROR(/* unknown instruction: sdr $a2, 0x20($v1) */);
    M2C_ERROR(/* unknown instruction: sdl $t2, 0x2f($v1) */);
    M2C_ERROR(/* unknown instruction: sdr $t2, 0x28($v1) */);
    M2C_ERROR(/* unknown instruction: ldl $a0, 0x37($t3) */);
    M2C_ERROR(/* unknown instruction: ldr $a0, 0x30($t3) */);
    M2C_ERROR(/* unknown instruction: ldl $a2, 0x3f($t3) */);
    M2C_ERROR(/* unknown instruction: ldr $a2, 0x38($t3) */);
    M2C_ERROR(/* unknown instruction: sdl $a0, 0x37($v1) */);
    M2C_ERROR(/* unknown instruction: sdr $a0, 0x30($v1) */);
    M2C_ERROR(/* unknown instruction: sdl $a2, 0x3f($v1) */);
    M2C_ERROR(/* unknown instruction: sdr $a2, 0x38($v1) */);
    *(s32 *)((u8 *)arg1 + 0x74) = 5;
    *(s32 *)((u8 *)arg1 + 0x78) = 0xC0;
    *(s32 *)((u8 *)arg1 + 0x134) = 1;
    *(s32 *)((u8 *)arg1 + 0) = 0;
    *(s32 *)((u8 *)arg1 + 0x70) = 0;
    *(s32 *)((u8 *)arg1 + 0x130) = 0;
    *(s32 *)((u8 *)arg1 + 0x7C) = 0;
    *(s32 *)((u8 *)arg1 + 0x80) = 0;
    *(s32 *)((u8 *)arg1 + 0x158) = 0;
    *(s32 *)((u8 *)arg1 + 0x15C) = 0;
    *(s32 *)((u8 *)arg1 + 0x160) = 0;
    *(s32 *)((u8 *)arg1 + 0x164) = 0;
    func_00193DE0(arg1 + 0x16C, arg1 + 0x30, 0x10, 5);
    *(s32 *)((u8 *)arg1 + 0x84) = 0;
    *(s32 *)((u8 *)arg1 + 0x88) = 0;
    func_00193E80(arg1 + 0x8C);
    *(s32 *)((u8 *)arg1 + 0x10C) = -1;
    *(s32 *)((u8 *)arg1 + 0x110) = 0;
    *(s32 *)((u8 *)arg1 + 0x114) = 0x7FFFFFFF;
    func_00191588(arg1 + 0x118);
    func_00193EA0(arg1 + 0xF2C);
    var_a0 = 0xF;
    var_v0 = arg1 + 0xFC0;
    var_v1 = arg1 + 0xEA4;
    do {
        var_a0 -= 1;
        *var_v1 = var_v0;
        var_v1 -= 0xDC;
        var_v0 -= 8;
    } while (var_a0 >= 0);
    return 0;
}
