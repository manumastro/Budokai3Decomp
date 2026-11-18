/* Draft (not built): func_00151840 at 0x00151840, size 0x60, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 1 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_00151840.s */

s32 func_00151790(s16 *);                       /* extern */
extern s16 D_004010A8;

void func_00151840(void) {
    s16 *var_s0;
    s32 var_s1;

    var_s0 = &D_004010A8;
    var_s1 = 0xF;
    do {
        if (*var_s0 == 1) {
            func_00151790(var_s0);
        }
        var_s1 -= 1;
        var_s0 += 0xF4;
    } while (var_s1 >= 0);
}
