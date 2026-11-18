/* Draft (not built): func_0016B310 at 0x0016B310, size 0x40, segment cri/mfci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: le error: d_0016B310.c:14: invalid type argument of `unary *'
 * Original: asm/nonmatchings/cri/mfci/func_0016B310.s */

void func_0016B310(u8 *arg0) {
    s32 temp_v0;
    s32 var_a1;

    var_a1 = 0;
    do {
        temp_v0 = var_a1 * 4;
        var_a1 += 1;
        *(temp_v0 + *(s32 *)((u8 *)arg0 + 8)) = 0;
        *(temp_v0 + *(s32 *)((u8 *)arg0 + 0xC)) = 0;
    } while (var_a1 < 0x60);
    *(s32 *)((u8 *)arg0 + 0x14) = 0;
    *(s32 *)((u8 *)arg0 + 0x18) = 0x40;
}
