/* Draft (not built): func_001154C8 at 0x001154C8, size 0x7C, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O1 -G0
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_001154C8.s */

s32 DI();                                           /* extern */
s32 EI(s64 *);                                  /* extern */
extern s64 D_003EDCC8;

s64 func_001154C8(void) {
    s32 temp_t0_2;
    s32 temp_v0;
    s64 temp_t0;
    s64 var_t2;

    temp_v0 = DI();
    temp_t0_2 = *(s32 *)((u8 *)((u8 *)0x10001000) + 0x10);
    var_t2 = D_003EDCC8;
    if (temp_t0_2 & 0x800) {
        var_t2 += 1;
    }
    temp_t0 = temp_t0_2 & 3;
    if (temp_v0 != 0) {
        EI(&D_003EDCC8);
    }
    return (*(u32 *)((u8 *)((u8 *)0x10001000) + 0) | (var_t2 << 0x10)) << (((temp_t0 == 0) ? 0 : 2) << temp_t0);
}
