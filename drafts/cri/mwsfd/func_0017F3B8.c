/* Draft (not built): func_0017F3B8 at 0x0017F3B8, size 0x50, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: le error: d_0017F3B8.c:18: invalid type argument of `unary *'
 * Original: asm/nonmatchings/cri/mwsfd/func_0017F3B8.s */

extern s32 D_00425218;
extern s32 D_0042521C;
extern s32 D_00425220;

void func_0017F3B8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_a3;

    D_00425218 = arg0;
    D_0042521C = arg1;
    var_a3 = 0;
    if (arg0 > 0) {
        do {
            temp_v0 = var_a3 * 4;
            var_a3 += 1;
            *(temp_v0 + &D_00425220) = *(temp_v0 + arg2);
        } while (var_a3 < arg0);
    }
}
