/* Draft (not built): func_00248910 at 0x00248910, size 0x344, segment unk/unk_248550 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ';' expected mwccps2.exe Compiler: 50: temp_s2 = *(temp_s7 + temp_v1_2) + var_s5; @ 6: extern PackRefs *D_0046FE50;
 * Original: asm/nonmatchings/unk/unk_248550/func_00248910.s */

// src/unk/unk_248550.c func_00248910 cerr diff=-1/0
extern PackRefs *D_0046FE50;
extern void memset(void *, s32, s32);
s32 func_001D9C40(void *, s32, s32);
s32 func_00212690(s32 *);
s32 func_00215040(s64, s32, s64);
s32 func_00215120(s64, s32, s64);
extern s32 D_0046FE4C;
s32 func_00248910(s64 arg0, u8 *arg1) {
    s32 spA0;
    s16 spF0;
    s16 spFA;
    s16 spFC;
    s32 sp108;
    u8 *sp10C;
    s32 sp110;
    f32 sp124;
    s32 var_a1;
    s32 var_a1_2;
    f32 temp_f1;
    s16 temp_v0;
    s16 var_v1;
    s32 temp_s6;
    s32 temp_s7;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_s1;
    s32 var_s5;
    u8 *temp_fp;
    u8 *temp_s0;
    u8 *temp_s2;
    u8 *temp_v1;

    temp_s6 = *(s32 *)((u8 *)arg1 + 0x1350);
    temp_v1 = (u8 *)(D_0046FE4C + (temp_s6 * 0x480));
    temp_fp = temp_v1 + 0x10;
    if (*(s32 *)((u8 *)temp_v1 + 0x24) == -1) {
        *(s32 *)((u8 *)temp_fp + 0x14) = (s32) *(s32 *)((u8 *)arg1 + 0xB70);
    }
    temp_v1_2 = D_0046FE50;
    temp_s7 = temp_s6 * 4;
    var_s1 = 0;
    if (*(s32 *)((u8 *)(temp_s7 + temp_v1_2) + 8) > 0) {
        var_s5 = 0;
        do {
            temp_s2 = *(temp_s7 + temp_v1_2) + var_s5;
            temp_v0 = *(s16 *)((u8 *)temp_s2 + 0xA2);
            if (temp_v0 != 0) {
                if (((s64) ((s64) temp_v0 << 0x30) >> 0x30) != *(s32 *)((u8 *)arg1 + 0xBA4)) {

                } else {
                    goto block_11;
                }
            } else {
                temp_v1_3 = *(s32 *)((u8 *)arg1 + 0xBA4);
                if ((temp_v1_3 >= *(s16 *)((u8 *)temp_s2 + 0xA8)) && (*(s16 *)((u8 *)temp_s2 + 0xAA) >= temp_v1_3)) {
block_11:
                    if (arg0 == *(s16 *)((u8 *)temp_s2 + 0x6A)) {
                        if ((arg0 == 0x10) || (arg0 == 0x30)) {
                            if (*(s16 *)((u8 *)temp_fp + 0x2A) > 0) {
                                func_001D9C40(arg1, 1, 0x38);
                                goto block_16;
                            }
                        } else {
block_16:
                            func_00248640(var_s1, arg1, arg0);
                            if (*(s32 *)((u8 *)temp_s2 + 0x7C) > 0) {
                                temp_s0 = *(D_0046FE50 + (*(s32 *)((u8 *)arg1 + 0x1350) * 4)) + var_s5;
                                memset(&spA0, 0, 0xB0);
                                if ((arg0 >= 0) && (var_v1 = 2, ((arg0 < 0x64) != 0))) {

                                } else if ((arg0 >= 0x64) && (var_v1 = 0x400, ((arg0 < 0xC8) != 0))) {

                                } else {
                                    var_v1 = 0x10;
                                }
                                spF0 = var_v1;
                                temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x84);
                                if (temp_f1 != 0.0f) {
                                    sp124 = temp_f1;
                                } else {
                                    sp124 = 100.0f;
                                }
                                sp10C = arg1;
                                spFA = *(s16 *)((u8 *)temp_s0 + 0x6C);
                                spFC = *(s16 *)((u8 *)temp_s0 + 0x6E);
                                sp110 = *(s32 *)((u8 *)temp_s0 + 0x7C);
                                sp108 = var_s1;
                                func_00212690(&spA0);
                            }
                            goto block_31;
                        }
                    } else {
block_31:
                        if (arg0 == *(s16 *)((u8 *)temp_s2 + 0x6C)) {
                            if ((arg0 >= 0) && (var_a1 = 2, ((arg0 < 0x64) != 0))) {

                            } else if ((arg0 >= 0x64) && (var_a1 = 0x400, ((arg0 < 0xC8) != 0))) {

                            } else {
                                var_a1 = 0x10;
                            }
                            func_00215120((s64) ((s64) temp_s6 << 0x30) >> 0x30, var_a1, (s64) (arg0 << 0x30) >> 0x30);
                        }
                        if (arg0 == *(s16 *)((u8 *)temp_s2 + 0x6E)) {
                            if ((arg0 >= 0) && (var_a1_2 = 2, ((arg0 < 0x64) != 0))) {

                            } else if ((arg0 >= 0x64) && (var_a1_2 = 0x400, ((arg0 < 0xC8) != 0))) {

                            } else {
                                var_a1_2 = 0x10;
                            }
                            func_00215040((s64) ((s64) temp_s6 << 0x30) >> 0x30, var_a1_2, (s64) (arg0 << 0x30) >> 0x30);
                        }
                    }
                }
            }
            var_s1 += 1;
            var_s5 += 0xD0;
        } while (var_s1 < *(s32 *)((u8 *)(temp_s7 + D_0046FE50) + 8));
    }
    return 0;
}
