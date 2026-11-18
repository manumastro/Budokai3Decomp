/* Draft (not built): func_0017EEE8 at 0x0017EEE8, size 0xB0, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/mpv/func_0017EEE8.s */

s32 dpmul();
s32 func_0011EA48();
s32 func_00121930();
s32 func_00121C78();
s32 func_00121F28();
s32 func_00121FE0();

s32 func_0017EEE8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_s0_2;

    if (arg2 == 0) {
        return ((arg0 ^ arg1) < 0) ? 0x80000000 : 0x7FFFFFFF;
    }
    temp_s0_2 = func_00121F28();
    temp_s0 = dpmul(temp_s0_2, func_00121F28(arg1));
    return func_00121FE0(func_0011EA48(func_00121930(func_00121C78(temp_s0, func_00121F28(arg2)), 0xFF80 << 0x2E)));
}
