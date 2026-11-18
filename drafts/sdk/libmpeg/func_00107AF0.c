/* Draft (not built): func_00107AF0 at 0x00107AF0, size 0xB0, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/sdk/libmpeg.s */

s32 DI();                                           /* extern */
s32 EI(s32, s32, s32, s32);         /* extern */
s32 func_00109BD8();                            /* extern */

s32 func_00107AF0(void) {
    s32 temp_a0;
    s32 temp_v0;

    temp_v0 = DI();
    *(s32 *)0x1000F590 = *(s32 *)0x1000F520 | 0x10000;
    *(s32 *)0x1000B000 &= 0xFFFFFEFF;
    *(s32 *)0x1000B400 &= 0xFFFFFEFF;
    temp_a0 = *(s32 *)0x1000F520 & 0xFFFEFFFF;
    *(s32 *)0x1000F590 = temp_a0;
    if (temp_v0 != 0) {
        EI(temp_a0, 0x1000B400, 0x1000B000, 0xFFFEFFFF);
    }
    *(s32 *)0x1000B020 = 0;
    *(s32 *)0x1000B420 = 0;
    func_00109BD8();
    return 1;
}
