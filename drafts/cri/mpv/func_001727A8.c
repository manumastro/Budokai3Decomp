/* Draft (not built): func_001727A8 at 0x001727A8, size 0xAC, segment cri/mpv (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mpv/func_001727A8.s */

void func_001727A8(u8 *arg0) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a2;
    s32 var_t1;
    s32 var_t2;
    s32 var_v1;
    s8 *var_t0;
    u8 *var_a3;
    u8 temp_v0;

    temp_v1 = *(s32 *)((u8 *)arg0 + 4);
    temp_a1 = *(s32 *)((u8 *)arg0 + 8);
    var_v1 = (s32) ((temp_v1 < 0) ? (temp_v1 + 0xF) : temp_v1) >> 4;
    var_a0 = *(s32 *)((u8 *)arg0 + 0);
    temp_a1_2 = (s32) ((temp_a1 < 0) ? (temp_a1 + 0x1F) : temp_a1) >> 5;
    if (var_v1 > 0) {
        do {
            var_t0 = var_a0 + 3;
            var_t2 = 0;
            var_a3 = (var_t0 + (temp_a1_2 << 0xA)) - 1;
            if (temp_a1_2 > 0) {
                do {
                    var_t1 = 0;
                    var_a2 = 0xF;
loop_4:
                    temp_v0 = *var_a3;
                    var_a3 += 4;
                    var_a2 -= 1;
                    *var_t0 = (temp_v0 >> 1) + 1;
                    var_t0 += 4;
                    if (var_a2 >= 0) {
                        goto loop_4;
                    }
                    var_t1 += 1;
                    if (var_t1 < 0x10) {
                        var_a2 = 0xF;
                        goto loop_4;
                    }
                    var_t2 += 1;
                } while (var_t2 < temp_a1_2);
            }
            var_v1 -= 1;
            var_a0 += temp_a1_2 << 0xB;
        } while (var_v1 != 0);
    }
}
