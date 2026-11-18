/* Draft (not built): func_001681F0 at 0x001681F0, size 0x88, segment cri/htci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/htci/func_001681F0.s */

s32 func_00164D38(s32);                     /* extern */
s32 func_00164F18(s32, s32, s32);           /* extern */

s32 func_001681F0(s32 arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 var_v0;

    func_00164D38(0x4700);
    temp_s0 = func_00164F18(arg0, 0, 0);
    func_00164D38(0x4701);
    var_v0 = 0;
    if (temp_s0 >= 0) {
        func_00164D38(0x4800);
        temp_s0_2 = func_00164F18(arg0, 0, 2);
        func_00164D38(0x4801);
        var_v0 = (temp_s0_2 >= 0) ? temp_s0_2 : 0;
    }
    return var_v0;
}
