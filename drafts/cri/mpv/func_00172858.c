/* Draft (not built): func_00172858 at 0x00172858, size 0x10C, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: le error: d_00172858.c:43: invalid type argument of `unary *'
 * Original: asm/nonmatchings/cri/mpv/func_00172858.s */

void func_00172858(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 temp_t1;
    s32 temp_t4;
    s32 temp_t8;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_a3;
    s32 var_t0;
    s32 var_t2;
    s32 var_t5;
    u8 *var_a0_2;
    u8 *var_a2;
    u8 temp_v1_2;

    var_t5 = 0;
    temp_v1 = *(s32 *)((u8 *)arg0 + 4);
    temp_v0 = *(s32 *)((u8 *)arg0 + 8);
    temp_t8 = (s32) ((temp_v1 < 0) int (temp_v1 + 0xF) : temp_v1) >> 4;
    temp_t1 = (s32) ((temp_v0 < 0) int (temp_v0 + 0x1F) : temp_v0) >> 5;
    temp_t4 = *(s32 *)((u8 *)arg1 + 0xC);
    if (temp_t8 > 0) {
        var_a0 = temp_t1 * 0;
loop_3:
        var_t2 = 0;
        var_a2 = (var_a0 * 0x300) + (temp_t1 * 0x180) + *(s32 *)((u8 *)arg0 + 0);
        if (temp_t1 > 0) {
            var_a3 = var_t5 << 6;
            do {
                var_t0 = 0;
                var_a0_2 = var_a3 + *(s32 *)((u8 *)arg1 + 0) + 3;
loop_6:
                var_a1 = 0xF;
loop_7:
                temp_v1_2 = *var_a2;
                var_a2 += 1;
                var_a1 -= 1;
                *var_a0_2 = *(arg2 + temp_v1_2);
                var_a0_2 += 4;
                if (var_a1 >= 0) {
                    goto loop_7;
                }
                var_t0 += 1;
                var_a0_2 = (var_a0_2 + temp_t4) - 0x40;
                if (var_t0 < 0x10) {
                    goto loop_6;
                }
                var_t2 += 1;
                var_a2 += 0x80;
                var_a3 += temp_t4 * 0x10;
            } while (var_t2 < temp_t1);
        }
        var_t5 += 1;
        if (var_t5 < temp_t8) {
            var_a0 = temp_t1 * var_t5;
            goto loop_3;
        }
    }
}
