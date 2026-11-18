/* Draft (not built): func_001A03B8 at 0x001A03B8, size 0x1D0, segment cri/sfx (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfx/func_001A03B8.s */

s64 dpmul(s64, s64);                                /* extern */
s64 func_001214F8(f32);                             /* extern */
s64 func_00121930(s64, s64);                        /* extern */
s64 func_00121988(s64, s64);                        /* extern */
s64 func_00121C78(s64, s64);                        /* extern */
s64 func_00121F28(s32);                             /* extern */
s16 func_00122108(s64);                             /* extern */
s32 func_001A0898();                                /* extern */
extern s64 D_00467DE0;
extern s64 D_00467DE8;

void func_001A03B8(u8 *arg0, u32 *arg1, s16 *arg2) {
    f32 temp_f20;
    f32 temp_f21;
    s16 *var_a2;
    s16 *var_s5;
    s32 var_s0;
    s32 var_s4;
    s32 var_s4_2;
    s64 temp_fp;
    s64 temp_s0;
    s64 temp_s1;
    s64 temp_s1_2;
    s64 temp_s2;
    s64 temp_v0_2;
    s64 var_v0;
    u32 *var_a1;
    u32 *var_s3;
    u32 temp_v0;

    var_s3 = arg1;
    temp_f21 = *(f32 *)((u8 *)arg0 + 0x40);
    temp_f20 = *(f32 *)((u8 *)arg0 + 0x3C);
    var_a2 = arg2;
    if (func_001A0898() == 1) {
        var_a1 = var_s3;
        var_s4 = 0;
        do {
            temp_v0 = *var_a1;
            var_a1 += 4;
            var_s4 += 1;
            *var_a2 = (s16) (temp_v0 >> 0xF);
            var_a2 += 2;
        } while (var_s4 < 0x100);
        return;
    }
    temp_s0 = D_00467DE0;
    temp_s2 = func_001214F8(temp_f20);
    temp_v0_2 = func_001214F8(temp_f21);
    var_s5 = arg2;
    temp_s1 = func_00121C78(0xFFC0 << 0x2E, func_00121988(temp_v0_2, temp_s2));
    var_s4_2 = 0xFF;
    temp_fp = dpmul(dpmul(temp_v0_2, temp_s0), temp_s1);
    temp_s1_2 = dpmul(dpmul(dpmul(temp_s1, temp_s0), temp_s2), temp_v0_2);
    do {
        var_s0 = *var_s3;
        if (var_s0 == 0) {
            *var_s3 = 1;
            var_s0 = 1;
        }
        var_v0 = func_00121F28(var_s0);
        if (var_s0 < 0) {
            var_v0 = func_00121930(var_v0, 0x83E0 << 0x2F);
        }
        var_s4_2 -= 1;
        var_s3 += 4;
        *var_s5 = func_00122108(func_00121988(temp_fp, func_00121C78(temp_s1_2, func_00121C78(dpmul(temp_v0_2, var_v0), D_00467DE8))));
        var_s5 += 2;
    } while (var_s4_2 >= 0);
}
