/* Draft (not built): func_001EA480 at 0x001EA480, size 0x2B8, segment unk/unk_1EA380 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 100 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2A0, original 0x2B8
 * Original: asm/nonmatchings/unk/unk_1EA380/func_001EA480.s */

// src/unk/unk_1EA380.c func_001EA480 size diff=100/168
void func_001EA480(void) {
    u8 sp[0x400];
    s32 sp50;
    s16 *var_a2;
    s32 *var_a1;
    s32 *var_s1;
    s32 var_a0_2;
    s32 var_a1_2;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_s0_2;
    s32 var_s2;
    s32 var_s3;
    s32 var_t0;
    s32 var_v0;
    s32 var_v1;
    s8 **var_a2_2;
    s8 *temp_t1;
    s8 *var_s0;
    s8 temp_a1;
    s8 temp_v1;
    u32 var_a0;
    u32 var_a0_3;

    memset(&sp50, 0, 0x98);
    var_s1 = &sp50;
    var_s3 = 0;
    var_a3 = 0;
    var_a2 = D_0046B560;
    var_a1 = var_s1;
    do {
        if (*D_004B4B48 & (1 << (s64) *var_a2)) {
            *var_a1 = 1;
            var_s3 += 1;
        }
        var_a3 += 1;
        var_a2 += 2;
        var_a1 += 4;
    } while (var_a3 < 0x26);
    var_s2 = 0;
    var_s0 = D_004B4B40;
    do {
        if (var_s3 <= 0) {
            *(s8 *)((u8 *)var_s0 + 0x1C) = 0;
        } else {
            var_a0 = func_0012EAE0(0x20) % (u32) var_s3;
            var_v0 = -1;
            do {
                var_v0 += 1;
                if (*(s32 *)((u8 *)((var_v0 * 4) + sp) + 0x50) != 0) {
                    var_a0 -= 1;
                }
            } while ((s32) var_a0 >= 0);
            *(s8 *)((u8 *)var_s0 + 0x1C) = (s8) D_0046B560[var_v0];
            *(s32 *)((u8 *)((var_v0 * 4) + sp) + 0x50) = 0;
            var_s3 -= 1;
            if (*D_0044A220 != NULL) {
                var_a2_2 = D_0044A220;
loop_13:
                temp_t1 = *var_a2_2;
                var_t0 = 0;
                temp_a1 = *temp_t1;
                var_a3_2 = 0;
                if (temp_a1 >= 0) {
loop_15:
                    if (var_v0 == temp_t1[var_a3_2]) {
                        var_t0 = 1;
                    } else {
                        var_a3_2 += 1;
                        if (temp_t1[var_a3_2] < 0) {

                        } else {
                            goto loop_15;
                        }
                    }
                }
                if (var_t0 != 0) {
                    var_a0_2 = 0;
                    if (temp_a1 >= 0) {
                        do {
                            temp_v1 = temp_t1[var_a0_2];
                            var_a0_2 += 1;
                            *(s32 *)((u8 *)((temp_v1 * 4) + sp) + 0x50) = 0;
                            var_s3 -= 1;
                        } while (temp_t1[var_a0_2] >= 0);
                    }
                } else {
                    var_a2_2 += 4;
                    if (*var_a2_2 != NULL) {
                        goto loop_13;
                    }
                }
            }
        }
        var_s2 += 1;
        var_s0 += 1;
    } while (var_s2 < 2);
    memset(&sp50, 0, 0x98);
    var_s0_2 = 0;
    var_a1_2 = 0;
    do {
        if (*D_004B4B50 & (1 << var_a1_2)) {
            *var_s1 = 1;
            var_s0_2 += 1;
        }
        var_a1_2 += 1;
        var_s1 += 4;
    } while (var_a1_2 < 0xC);
    var_v1 = 0;
    if (var_s0_2 <= 0) {

    } else {
        var_v1 = -1;
        var_a0_3 = func_0012EAE0(0x20) % (u32) var_s0_2;
        do {
            var_v1 += 1;
            if (*(s32 *)((u8 *)((var_v1 * 4) + sp) + 0x50) != 0) {
                var_a0_3 -= 1;
            }
        } while ((s32) var_a0_3 >= 0);
    }
    *D_004B4B5B = (s8) *(D_00453490 + (var_v1 * 4));
    *D_004B4B41 = 0;
    func_001B13F0(0);
}
