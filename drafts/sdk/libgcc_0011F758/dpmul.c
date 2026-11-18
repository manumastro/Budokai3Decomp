/* Draft (not built): dpmul at 0x001219F0, size 0x284, segment sdk/libgcc_0011F758 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_001219F0.c:93: parse error before "int"
 * Original: asm/nonmatchings/sdk/libgcc_0011F758/dpmul.s */

u32 __muldi3(u64, u64);                             /* extern */
s32 func_00121538(u32 *);                       /* extern */
s32 func_00121610(s64 *, u32 *);                /* extern */
extern u32 D_0045EA90;

void dpmul(s64 arg0, s64 arg1) {
    s32 sp4;
    u32 sp20;
    s32 sp24;
    u32 sp40;
    s32 sp44;
    s32 sp48;
    u64 sp50;
    s64 sp60;
    s64 sp68;
    s32 temp_v0;
    s32 var_a0_2;
    s32 var_a0_3;
    s64 var_v0;
    u32 *var_a0;
    u32 temp_s1;
    u32 temp_s4;
    u64 temp_s0;
    u64 temp_s0_2;
    u64 temp_s1_2;
    u64 temp_s2;
    u64 temp_s3;
    u64 temp_s5;
    u64 temp_s6;
    u64 var_a2;
    u64 var_s1;

    sp60 = arg0;
    sp68 = arg1;
    func_00121610(&sp60, sp);
    func_00121610(&sp68, &sp20);
    if (sp0 >= 2U) {
        if (sp20 >= 2U) {
            if ((sp0 ^ 4) == 0) {
                if ((sp20 ^ 2) == 0) {
                    goto block_7;
                }
                goto block_10;
            }
            temp_v0 = sp0 ^ 2;
            if ((sp20 ^ 4) == 0) {
                if (temp_v0 == 0) {
block_7:
                    var_a0 = &D_0045EA90;
                } else {
                    goto block_14;
                }
            } else {
                if (temp_v0 == 0) {
block_10:
                    goto block_11;
                }
                if ((sp20 ^ 2) == 0) {
                    goto block_14;
                }
                temp_s5 = 0xFFFF0000U >> 0x20;
                temp_s0 = sp10 & temp_s5;
                temp_s3 = sp10 >> 0x20;
                temp_s6 = sp30 & temp_s5;
                temp_s2 = sp30 >> 0x20;
                temp_s4 = __muldi3(temp_s6, temp_s0);
                temp_s1 = __muldi3(temp_s2, temp_s0);
                temp_s0_2 = temp_s1 + __muldi3(temp_s6, temp_s3);
                var_a2 = temp_s4 + (temp_s0_2 << 0x20);
                var_s1 = ((temp_s0_2 < temp_s1) << 0x20) + (var_a2 < temp_s4) + (((temp_s0_2 >> 0x20) & temp_s5) + __muldi3(temp_s2, temp_s3));
                var_a0_2 = sp8 + sp28 + 4;
                sp44 = sp4 != sp24;
                sp48 = var_a0_2;
                if ((u64) (-1U >> 3) < var_s1) {
                    var_v0 = var_s1 & 1;
                    do {
                        var_s1 = var_s1 >> 1;
                        var_a0_2 += 1;
                        if (((s64) (var_v0 << 0x20) >> 0x20) != 0) {
                            var_a2 = (var_a2 >> 1) | (0x8000 << 0x30);
                        }
                        var_v0 = var_s1 & 1;
                    } while ((u64) (-1U >> 3) < var_s1);
                    sp48 = var_a0_2;
                }
                if ((u64) (-1U >> 4) >= var_s1) {
                    var_a0_3 = sp48;
                    do {
                        temp_s1_2 = var_s1 * 2;
                        var_a0_3 -= 1;
                        var_s1 = (var_a2 & (0x8000 << 0x30)) int (temp_s1_2 | 1) : temp_s1_2;
                        var_a2 *= 2;
                    } while ((u64) (-1U >> 4) >= var_s1);
                    sp48 = var_a0_3;
                }
                sp50 = var_s1;
                sp40 = 3;
                var_a0 = &sp40;
            }
        } else {
block_14:
            var_a0 = &sp20;
            sp24 = sp4 != sp24;
        }
    } else {
block_11:
        var_a0 = sp;
        sp4 = sp4 != sp24;
    }
    func_00121538(var_a0);
}
