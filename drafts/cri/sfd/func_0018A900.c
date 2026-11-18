/* Draft (not built): func_0018A900 at 0x0018A900, size 0xA0, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0018A900.c:22: warning: passing arg 1 of `func_0018A9A0' makes integer from pointer without a cast
 * Original: asm/nonmatchings/cri/sfd/func_0018A900.s */

s32 func_0018A9A0(s32, s32);                /* extern */
s32 func_0018D908(void *);                      /* extern */
s32 func_0018D920(void *);                      /* extern */
s32 func_00198450(void *);                      /* extern */

void func_0018A900(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3) {
    func_0018D908(sp);
    *(s32 *)((u8 *)arg2 + 4) = arg3;
    M2C_ERROR(/* unknown instruction: ldl $v0, 0x7($s3) */);
    M2C_ERROR(/* unknown instruction: ldr $v0, ($s3) */);
    M2C_ERROR(/* unknown instruction: ldl $v1, 0xf($s3) */);
    M2C_ERROR(/* unknown instruction: ldr $v1, 0x8($s3) */);
    M2C_ERROR(/* unknown instruction: ldl $a1, 0x17($s3) */);
    M2C_ERROR(/* unknown instruction: ldr $a1, 0x10($s3) */);
    M2C_ERROR(/* unknown instruction: sdl $v0, 0x7($s0) */);
    M2C_ERROR(/* unknown instruction: sdr $v0, ($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $v1, 0xf($s0) */);
    M2C_ERROR(/* unknown instruction: sdr $v1, 0x8($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $a1, 0x17($s0) */);
    func_0018A9A0(arg0 + 0x18, M2C_ERROR(/* unknown instruction: sdr $a1, 0x10($s0) */));
    *(s32 *)((u8 *)arg0 + 0x20) = 0;
    *(s32 *)((u8 *)arg0 + 0x24) = 0;
    func_00198450(arg0 + 0x28);
    func_0018D920(sp);
}
