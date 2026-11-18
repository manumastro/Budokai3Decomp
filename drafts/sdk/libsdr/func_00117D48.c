/* Draft (not built): func_00117D48 at 0x00117D48, size 0x1C, segment sdk/libsdr (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: ile error: d_00117D48.c:11: for each function it appears in.)
 * Original: asm/nonmatchings/sdk/libsdr/func_00117D48.s */

extern s32 D_003EDD40;
extern s32 D_003EDD44;

s32 func_00117D48(s32 arg0) {
    s32 temp_v0;

    temp_v0 = D_003EDD40;
    D_003EDD40 = arg0;
    D_003EDD44 = saved_reg_gp;
    return temp_v0;
}
