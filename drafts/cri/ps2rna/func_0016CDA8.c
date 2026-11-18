/* Draft (not built): func_0016CDA8 at 0x0016CDA8, size 0xE8, segment cri/ps2rna (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_0016CDA8.c:36: warning: assignment from incompatible pointer type
 * Original: asm/nonmatchings/cri/ps2rna/func_0016CDA8.s */

s32 func_00165728(s32);                         /* extern */
s32 func_00165FB8(s32, void *, s32, s32, s32); /* extern */
s32 func_0016C0F0(s32);                         /* extern */
extern s32 D_0041A0D0;
extern s32 D_0041A0D8;

void func_0016CDA8(u8 *arg0) {
    s32 *var_s0;
    s32 *var_s0_2;
    s32 temp_a0;
    s32 var_a0;
    s32 var_s2;
    s32 var_s2_2;

    if ((D_0041A0D8 != 1) || (D_0041A0D0 > 0)) {
        var_s2 = 0;
        if (*(s32 *)((u8 *)arg0 + 4) > 0) {
            var_s0 = arg0 + 0x10;
            var_a0 = *(s32 *)((u8 *)arg0 + 0x10);
loop_4:
            var_s0 += 4;
            if (var_a0 != 0) {
                func_00165728(var_a0);
            }
            var_s2 += 1;
            if (var_s2 < *(s32 *)((u8 *)arg0 + 4)) {
                var_a0 = *var_s0;
                goto loop_4;
            }
        }
        func_00165FB8(9, sp, 1, 0, *(s32 *)((u8 *)arg0 + 0x20));
        var_s2_2 = 0;
        if (*(s32 *)((u8 *)arg0 + 4) > 0) {
            var_s0_2 = arg0 + 8;
            do {
                temp_a0 = *var_s0_2;
                var_s0_2 += 4;
                if (temp_a0 != 0) {
                    func_0016C0F0(temp_a0);
                }
                var_s2_2 += 1;
            } while (var_s2_2 < *(s32 *)((u8 *)arg0 + 4));
        }
    }
    *(s8 *)((u8 *)arg0 + 0) = 0;
}
