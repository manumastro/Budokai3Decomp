/* Draft (not built): func_00172968 at 0x00172968, size 0xD8, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: le error: d_00172968.c:36: invalid type argument of `unary *'
 * Original: asm/nonmatchings/cri/mpv/func_00172968.s */

void func_00172968(u8 *arg0, s32 *arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_a3;
    s32 temp_t4;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a1;
    s32 var_t0;
    s32 var_t2;
    u8 *var_a0;
    u8 *var_a2;
    u8 temp_v1_2;

    temp_v1 = *(s32 *)((u8 *)arg0 + 4);
    temp_v0 = *(s32 *)((u8 *)arg0 + 8);
    var_t2 = 0;
    temp_a3 = (s32) ((temp_v0 < 0) int (temp_v0 + 0x1F) : temp_v0) >> 5;
    temp_t4 = (s32) ((temp_v1 < 0) int (temp_v1 + 0xF) : temp_v1) >> 4;
    if (temp_t4 > 0) {
loop_3:
        temp_a0 = temp_a3 * var_t2;
        var_t0 = 0;
        var_a2 = *arg1 + (temp_a0 << 0xA) + 3;
        var_a0 = (temp_a0 * 0x300) + (temp_a3 * 0x180) + *(s32 *)((u8 *)arg0 + 0);
        if (temp_a3 > 0) {
            do {
                var_a1 = 0xFF;
loop_5:
                temp_v1_2 = *var_a0;
                var_a0 += 1;
                var_a1 -= 1;
                *var_a2 = *(arg2 + temp_v1_2);
                var_a2 += 4;
                if (var_a1 >= 0) {
                    goto loop_5;
                }
                var_t0 += 1;
                var_a0 += 0x80;
            } while (var_t0 < temp_a3);
        }
        var_t2 += 1;
        if (var_t2 < temp_t4) {
            goto loop_3;
        }
    }
}
