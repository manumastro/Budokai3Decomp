/* Draft (not built): mwPlySetFloatSpeed at 0x001845F0, size 0xCC, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/mwPlySetFloatSpeed.s */

s32 func_001214F8(f32);                             /* extern */
s32 func_00121930(s32, s64);                        /* extern */
s32 func_00121ED8(s32, s32);                        /* extern */
s32 func_00121F28(s32);                             /* extern */
s32 func_00121FE0(s32);                             /* extern */
s32 func_00183B38();                                /* extern */
s32 func_001870E8(s32 *);                   /* extern */
s32 func_00196558(s32, s32);                    /* extern */
s32 mwPlyGetSfdHn(s32);                             /* extern */
extern s32 D_00466708;

void mwPlySetFloatSpeed(s32 arg0, f32 fparg0) {
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v0_2;

    if (func_00183B38() == 0) {
        func_001870E8(&D_00466708);
        return;
    }
    temp_s2 = mwPlyGetSfdHn(arg0);
    temp_v0 = func_00121930(func_001214F8(fparg0 * 1000.0f), 0xFF80 << 0x2E);
    temp_v0_2 = func_00121FE0(temp_v0);
    func_00196558(temp_s2, (func_00121ED8(func_00121F28(temp_v0_2), temp_v0) <= 0) ? temp_v0_2 : (temp_v0_2 - 1));
}
