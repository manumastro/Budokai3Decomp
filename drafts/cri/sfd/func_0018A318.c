/* Draft (not built): func_0018A318 at 0x0018A318, size 0x3C, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: le error: d_0018A318.c:16: invalid type argument of `unary *'
 * Original: asm/nonmatchings/cri/sfd/func_0018A318.s */

void func_0018A318(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_a2;
    s32 var_a3;

    var_a2 = arg2;
    var_a3 = 0;
    do {
        temp_v0 = var_a3 * 4;
        var_a3 += 1;
        *(temp_v0 + arg0) = var_a2;
        var_a2 += *(temp_v0 + arg1);
    } while (var_a3 < 8);
}
