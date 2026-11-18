/* Draft (not built): func_00120F68 at 0x00120F68, size 0xA8, segment sdk/libgcc_0011F758 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 40 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/sdk/libgcc_0011F758/func_00120F68.s */

s64 dpmul(s64, s64);                                /* extern */
s64 func_00121930(s64, s64);                        /* extern */
s64 func_00121F28(s64);                             /* extern */

void func_00120F68(s64 arg0) {
    s64 temp_s0;
    s64 temp_s1;
    s64 temp_s1_2;
    s64 var_v0;

    temp_s1 = 0x81E0 << 0x2F;
    temp_s1_2 = dpmul(dpmul(func_00121F28(arg0 >> 0x20), temp_s1), temp_s1);
    temp_s0 = (s64) ((arg0 & (0xFFFF0000U >> 0x20)) << 0x20) >> 0x20;
    var_v0 = func_00121F28(temp_s0);
    if (temp_s0 < 0) {
        var_v0 = func_00121930(var_v0, 0x83E0 << 0x2F);
    }
    func_00121930(temp_s1_2, var_v0);
}
