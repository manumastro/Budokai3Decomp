/* Draft (not built): func_00193478 at 0x00193478, size 0xA4, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 88 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_00193478.s */

s32 func_00193520(void *, void *);              /* extern */
s32 func_001957B8(s32, s32);                /* extern */
s32 func_001960E0(void *);                          /* extern */

void func_00193478(u8 *arg0, u8 *arg1) {
    M2C_ERROR(/* unknown instruction: ldl $v0, 0xd87($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, 0xd80($s0) */);
    M2C_ERROR(/* unknown instruction: ldl $v1, 0xd8f($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, 0xd88($s0) */);
    M2C_ERROR(/* unknown instruction: ldl $a1, 0xd97($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $a1, 0xd90($s0) */);
    M2C_ERROR(/* unknown instruction: ldl $a2, 0xd9f($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $a2, 0xd98($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0x13($s1) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, 0xc($s1) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0x1b($s1) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0x14($s1) */);
    M2C_ERROR(/* unknown instruction: sdl $a1, 0x23($s1) */);
    M2C_ERROR(/* unknown instruction: sdl $a2, 0x2b($s1) */);
    M2C_ERROR(/* unknown instruction: ldl $v0, 0xda7($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, 0xda0($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0x33($s1) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, 0x2c($s1) */);
    *(s32 *)((u8 *)arg1 + 0x34) = (s32) *(s32 *)((u8 *)arg0 + 0xDA8);
    if (func_001957B8(M2C_ERROR(/* unknown instruction: sdr $a1, 0x1c($s1) */), M2C_ERROR(/* unknown instruction: sdr $a2, 0x24($s1) */)) != 0) {
        *(s32 *)((u8 *)arg1 + 0xD8) = func_001960E0(arg0);
    }
    func_00193520(arg0, arg1);
}
