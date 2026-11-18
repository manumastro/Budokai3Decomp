/* Draft (not built): func_001503A0 at 0x001503A0, size 0x1B4, segment cri/adx_0014EF28 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 48 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/adx_0014EF28/func_001503A0.s */

s32 func_00150360();                            /* extern */
extern s32 D_00401084;
extern s32 D_0045FC50;

s32 func_001503A0(s32 arg0, s32 arg1, s16 *arg2, s16 *arg3) {
    s16 *temp_s4;
    s16 var_a0;
    s16 var_t0;
    s16 var_t2;
    s32 temp_v1_2;
    s32 temp_v1_4;
    s32 temp_v1_6;
    s32 var_a3;
    s32 var_a3_2;
    s8 *temp_v1;
    s8 *temp_v1_3;
    s8 *temp_v1_5;

    temp_s4 = M2C_ERROR(/* Read from unset register $t0 */);
    if (D_00401084 == 0) {
        func_00150360();
    }
    *arg2 = 0;
    *arg3 = 0;
    *temp_s4 = 0;
    if ((arg0 != 0) || (arg1 > 0)) {
        var_a3 = 0;
        var_t2 = *(s16 *)((u8 *)(&D_0045FC50) + 0x200);
        if (arg1 > 0) {
            do {
                temp_v1 = arg0 + var_a3;
                var_a3 += 1;
                temp_v1_2 = var_t2 * *(s16 *)((u8 *)((*temp_v1 * 2) + &D_0045FC50) + 0x100);
                var_t2 = *(((temp_v1_2 - (((s32) ((temp_v1_2 < 0) ? (temp_v1_2 + 0x3FF) : temp_v1_2) >> 0xA) << 0xA)) * 2) + &D_0045FC50);
            } while (var_a3 < arg1);
            var_a3 = 0;
        }
        var_t0 = *(s16 *)((u8 *)(&D_0045FC50) + 0x400);
        if (arg1 > 0) {
            do {
                temp_v1_3 = arg0 + var_a3;
                var_a3 += 1;
                temp_v1_4 = var_t0 * *(s16 *)((u8 *)((*temp_v1_3 * 2) + &D_0045FC50) + 0x100);
                var_t0 = *(((temp_v1_4 - (((s32) ((temp_v1_4 < 0) ? (temp_v1_4 + 0x3FF) : temp_v1_4) >> 0xA) << 0xA)) * 2) + &D_0045FC50);
            } while (var_a3 < arg1);
        }
        var_a3_2 = 0;
        var_a0 = *(s16 *)((u8 *)(&D_0045FC50) + 0x600);
        if (arg1 > 0) {
            do {
                temp_v1_5 = arg0 + var_a3_2;
                var_a3_2 += 1;
                temp_v1_6 = var_a0 * *(s16 *)((u8 *)((*temp_v1_5 * 2) + &D_0045FC50) + 0x100);
                var_a0 = *(((temp_v1_6 - (((s32) ((temp_v1_6 < 0) ? (temp_v1_6 + 0x3FF) : temp_v1_6) >> 0xA) << 0xA)) * 2) + &D_0045FC50);
            } while (var_a3_2 < arg1);
        }
        *arg2 = var_t2;
        *arg3 = var_t0;
        *temp_s4 = var_a0;
    }
    return 0;
}
