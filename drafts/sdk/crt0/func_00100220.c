/* Draft (not built): func_00100220 at 0x00100220, size 0x30, segment sdk/crt0 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/crt0/func_00100220.s */

s32 func_00121ED8();                                /* extern */

s32 func_00100220(void) {
    M2C_ERROR(/* unknown instruction: syscall 0x0 */);
    return func_00121ED8() < 0;
}
