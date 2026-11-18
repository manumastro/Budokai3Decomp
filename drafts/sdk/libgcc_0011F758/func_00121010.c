/* Draft (not built): func_00121010 at 0x00121010, size 0xE8, segment sdk/libgcc_0011F758 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 100 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/sdk/libgcc_0011F758/func_00121010.s */

s64 dpmul(s64, s64);                                /* extern */
s64 func_00121930(s64, s64);                        /* extern */
s64 func_00121F28(s64);                             /* extern */
s32 func_001220B0(s64);                         /* extern */

void func_00121010(s64 arg0) {
    s64 temp_s0;
    s64 temp_s0_2;
    s64 temp_s2;
    s64 var_s1;
    s64 var_v0;

    var_s1 = arg0;
    if (((u64) ((u64) (-1 << 0xB) >> 0xA) < (u32) (var_s1 + (-1U >> 0xB))) && (var_s1 & 0x7FF)) {
        var_s1 |= 0x800;
    }
    temp_s0 = 0x81E0 << 0x2F;
    temp_s0_2 = (s64) ((var_s1 & (0xFFFF0000U >> 0x20)) << 0x20) >> 0x20;
    temp_s2 = dpmul(dpmul(func_00121F28(var_s1 >> 0x20), temp_s0), temp_s0);
    var_v0 = func_00121F28(temp_s0_2);
    if (temp_s0_2 < 0) {
        var_v0 = func_00121930(var_v0, 0x83E0 << 0x2F);
    }
    func_001220B0(func_00121930(temp_s2, var_v0));
}
