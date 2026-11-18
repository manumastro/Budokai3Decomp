/* Draft (not built): func_0010D420 at 0x0010D420, size 0x4C, segment sdk/libkernl/kfiv_sifcmd (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: le error: d_0010D420.c:11: invalid type argument of `unary *'
 * Original: asm/nonmatchings/sdk/libkernl/kfiv_sifcmd/func_0010D420.s */

extern s32 D_004719A4;
extern s32 D_004719AC;

void func_0010D420(s32 arg0) {
    if (arg0 < 0) {
        *(((arg0 & 0x7FFFFFFF) * 0xC) + D_004719A4) = 0;
        return;
    }
    *((arg0 * 0xC) + D_004719AC) = 0;
}
