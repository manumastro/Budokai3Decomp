/* Draft (not built): func_00115478 at 0x00115478, size 0x4C, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_00115478.s */

extern s64 D_003EDCC8;

s64 func_00115478(void) {
    s32 temp_t0_2;
    s64 temp_t0;
    s64 var_t2;

    temp_t0_2 = *(s32 *)((u8 *)((u8 *)0x10001000) + 0x10);
    var_t2 = D_003EDCC8;
    if (temp_t0_2 & 0x800) {
        var_t2 += 1;
    }
    temp_t0 = temp_t0_2 & 3;
    return (*(u32 *)((u8 *)((u8 *)0x10001000) + 0) | (var_t2 << 0x10)) << (((temp_t0 == 0) ? 0 : 2) << temp_t0);
}
