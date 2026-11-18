/* Draft (not built): func_001DF1F0 at 0x001DF1F0, size 0x228, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 84 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x274, original 0x228
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001DF1F0.s */

// src/unk/unk_1D5B30.c func_001DF1F0 size diff=84/157
void func_001DF1F0(u8 *arg0) {
    s16 temp_a1_3;
    s16 temp_t3;
    s32 var_a0;
    s32 var_a3;
    s32 var_t0;
    s32 var_t1;
    s32 var_t3;
    s32 var_v1;
    s8 var_a1;
    u8 temp_a1;
    u8 temp_a1_2;
    u8 *temp_t3_2;
    u8 *temp_t5;

    memset(arg0 + 0x1FDC, 0, 8);
    memset(arg0 + 0x1FBD, 0, 0x1F);
    *(s16 *)((u8 *)arg0 + 0x1FEC) = 0;
    *(s32 *)((u8 *)arg0 + 0x1FB4) = 0x3F800000;
    *(f32 *)((u8 *)arg0 + 0x1FB8) = (f32) *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1CF4)) + 0x4C);
    *(s8 *)((u8 *)arg0 + 0x1FBC) = 0;
    var_a0 = 0;
    if (*(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1CF4)) + 0x34) > 0) {
        var_v1 = 0;
        do {
            temp_t3 = *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1CF4) + var_v1) + 0x36);
            if (temp_t3 > 0) {
                temp_t5 = &D_004E0660 + (temp_t3 * 0x28);
                temp_a1 = *(u8 *)((u8 *)temp_t5 + 0x15);
                if ((s32) temp_a1 < 0x64) {
                    temp_t3_2 = arg0 + temp_a1;
                    *(s8 *)((u8 *)temp_t3_2 + 0x1FBD) = (s8) (*(s8 *)((u8 *)temp_t3_2 + 0x1FBD) + 1);
                    temp_a1_2 = *(u8 *)((u8 *)temp_t5 + 0x15);
                    if (temp_a1_2 != 0x1E) {
                        if ((temp_a1_2 != 7) && (temp_a1_2 != 0xB) && (temp_a1_2 != 6)) {
                            if (temp_a1_2 != 0) {
                                var_a1 = *(s8 *)((u8 *)arg0 + 0x1FBC) + 1;
                                goto block_15;
                            }
                        } else {
                            *(s8 *)((u8 *)(arg0 + (temp_a1_2 & 0xFF)) + 0x1FBD) = 1;
                        }
                    } else {
                        *(s8 *)((u8 *)arg0 + 0x1FDB) = 1;
                        *(s8 *)((u8 *)arg0 + 0x1FC3) = 1;
                        *(s8 *)((u8 *)arg0 + 0x1FC8) = 1;
                        *(s8 *)((u8 *)arg0 + 0x1FC4) = 1;
                    }
                } else {
                    *(s16 *)((u8 *)arg0 + 0x1FEC) = temp_t3;
                    var_a1 = *(s8 *)((u8 *)arg0 + 0x1FBC) + 1;
block_15:
                    *(s8 *)((u8 *)arg0 + 0x1FBC) = var_a1;
                }
            }
            var_a0 += 1;
            var_v1 += 2;
        } while (var_a0 < *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1CF4)) + 0x34));
    }
    if (*(s8 *)((u8 *)arg0 + 0x1FDB) > 0) {
        *(s8 *)((u8 *)arg0 + 0x1FDC) = 1;
        *(s8 *)((u8 *)arg0 + 0x1FDD) = 1;
        *(s8 *)((u8 *)arg0 + 0x1FDE) = 1;
        *(s8 *)((u8 *)arg0 + 0x1FDF) = 1;
        *(s8 *)((u8 *)arg0 + 0x1FE0) = 1;
        *(s8 *)((u8 *)arg0 + 0x1FE1) = 1;
        *(s8 *)((u8 *)arg0 + 0x1FE2) = 1;
        *(s8 *)((u8 *)arg0 + 0x1FE3) = 1;
        return;
    }
    var_t3 = 1;
    *(s8 *)((u8 *)arg0 + 0x1FDC) = 1;
    var_t0 = 0x14;
    do {
        var_t1 = 0;
        if (*(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1CF4)) + 0x34) > 0) {
            var_a3 = 0;
            do {
                temp_a1_3 = *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1CF4) + var_a3) + 0x36);
                if ((temp_a1_3 > 0) && (temp_a1_3 == *(s16 *)((u8 *)(*(s32 *)((u8 *)arg0 + 0x1CF8) + var_t0) + 0xD4))) {
                    *(s8 *)((u8 *)(arg0 + var_t3) + 0x1FDC) = 1;
                }
                var_t1 += 1;
                var_a3 += 2;
            } while (var_t1 < *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1CF4)) + 0x34));
        }
        var_t3 += 1;
        var_t0 += 0x14;
    } while (var_t3 < 8);
}
