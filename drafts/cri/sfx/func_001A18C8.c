/* Draft (not built): func_001A18C8 at 0x001A18C8, size 0xA4, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfx/func_001A18C8.s */

f32 func_00121010();
extern s64 D_00427320;
extern f32 D_00427328;
extern f32 D_0042732C;
extern f32 D_00427330;

void func_001A18C8(s64 arg0) {
    f32 temp_f0;

    D_00427320 = arg0;
    D_00427328 = 1.0f / func_00121010();
    temp_f0 = func_00121010(arg0);
    D_0042732C = 1000.0f / temp_f0;
    D_00427330 = 1000000.0f / temp_f0;
}
