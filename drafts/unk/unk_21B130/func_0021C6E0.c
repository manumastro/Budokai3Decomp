/* Draft (not built): func_0021C6E0 at 0x0021C6E0, size 0x33C, segment unk/unk_21B130 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 112 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x340, original 0x33C
 * Original: asm/nonmatchings/unk/unk_21B130/func_0021C6E0.s */

// src/unk/unk_21B130.c func_0021C6E0 size diff=112/208
void func_0021CAD0(void);
s32 memcpy(u8 *, u8 *, s32, u8 *);
void func_0021C6E0(void) {
    u8 sp70;
    u8 sp90;
    s32 var_a0;
    s32 var_a2;
    s32 var_a3;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s2_2;
    s32 var_s3;
    s32 var_s4;
    s8 temp_a0_2;
    s8 temp_s3;
    u8 *temp_a0;
    u8 *temp_a1;
    u8 *temp_s1;
    u8 *temp_s1_2;
    u8 *var_s1;
    u8 *var_s2_3;
    u8 *var_v0;
    u8 *var_v0_2;
    u8 *temp_s2;
    u8 *temp_s5;
    u8 *var_s2;
    u8 *var_s5;

    func_0021CA20();
    temp_a1 = gBattle;
    var_a0 = *(s32 *)((u8 *)temp_a1 + 0x88D8);
    var_s4 = 0;
    if (var_a0 > 0) {
        do {
            var_a3 = 0;
            if (var_a0 > 0) {
loop_3:
                if (*(s8 *)((u8 *)(&gBtlSys[var_a3]) + 0xCA0) == var_s4) {

                } else {
                    var_a3 += 1;
                    if (var_a3 >= *(s32 *)((u8 *)temp_a1 + 0x88D8)) {
                        goto block_7;
                    }
                    goto loop_3;
                }
            } else {
block_7:
                var_a3 = -1;
            }
            if (var_s4 != var_a3) {
                var_a2 = 0;
                if (var_a0 > 0) {
loop_11:
                    if (*(s8 *)((u8 *)(&gBtlSys[var_a2]) + 0xCA0) == var_s4) {

                    } else {
                        var_a2 += 1;
                        if (var_a2 >= *(s32 *)((u8 *)temp_a1 + 0x88D8)) {
                            goto block_15;
                        }
                        goto loop_11;
                    }
                } else {
block_15:
                    var_a2 = -1;
                }
                temp_s1 = gBtlSys;
                temp_s3 = *(s8 *)((u8 *)(&temp_s1[var_s4]) + 0xCA0);
                if (temp_s3 == -1) {
                    var_s2 = NULL;
                } else {
                    var_s2 = temp_s1 + (temp_s3 * 0x190) + 0x110;
                }
                temp_a0 = &temp_s1[var_a2];
                temp_a0_2 = *(s8 *)((u8 *)temp_a0 + 0xCA0);
                if (temp_a0_2 == -1) {
                    var_s5 = NULL;
                } else {
                    var_s5 = gBtlSys + (temp_a0_2 * 0x190) + 0x110;
                }
                memcpy(&sp70, var_s2 + 0x4C, 0x14, (u8 *) var_a3);
                memcpy(var_s2 + 0x4C, var_s5 + 0x4C, 0x14, 0);
                memcpy(var_s5 + 0x4C, &sp70, 0x14, 0);
                temp_s2 = gBtlSys + (temp_s3 * 0x190) + 0x760;
                temp_s5 = gBtlSys + (*(s8 *)((u8 *)temp_a0 + 0xCA0) * 0x190) + 0x760;
                memcpy(&sp70, temp_s2 + 0x4C, 0x14, gBtlSys);
                memcpy(temp_s2 + 0x4C, temp_s5 + 0x4C, 0x14, 0);
                memcpy(temp_s5 + 0x4C, &sp70, 0x14, 0);
                *(s8 *)((u8 *)(&temp_s1[var_s4]) + 0xCA0) = (s8) *(s8 *)((u8 *)temp_a0 + 0xCA0);
                *(s8 *)((u8 *)temp_a0 + 0xCA0) = temp_s3;
            }
            var_s4 += 1;
            var_a0 = *(s32 *)((u8 *)gBattle + 0x88D8);
        } while (var_s4 < var_a0);
    }
    var_s0 = 0;
    if (var_a0 > 0) {
        var_s2_2 = 0;
        var_s1 = &sp90;
        do {
            if (var_s0 == -1) {
                var_v0 = NULL;
            } else {
                var_v0 = &gBtlSys[var_s2_2] + 0x110;
            }
            memcpy(var_s1, var_v0 + 0x4C, 0x14, 0);
            var_s0 += 1;
            var_s2_2 += 0x190;
            var_s1 += 0x14;
        } while (var_s0 < *(s32 *)((u8 *)gBattle + 0x88D8));
    }
    func_0021CD80();
    var_s0_2 = 0;
    var_s3 = 0;
    var_s2_3 = &sp90;
    do {
        temp_s1_2 = gBtlSys;
        if (var_s0_2 == -1) {
            var_v0_2 = NULL;
        } else {
            var_v0_2 = &temp_s1_2[var_s3] + 0x110;
        }
        *(s16 *)((u8 *)var_s2_3 + 0) = 0;
        *(s16 *)((u8 *)var_s2_3 + 6) = 0;
        *(s16 *)((u8 *)var_s2_3 + 8) = 0;
        *(s16 *)((u8 *)var_s2_3 + 0xC) = 0x64;
        *(s16 *)((u8 *)var_s2_3 + 0xE) = 0x64;
        *(s16 *)((u8 *)var_s2_3 + 0x10) = 0;
        memcpy(var_v0_2 + 0x4C, var_s2_3, 0x14, 0);
        memcpy(&temp_s1_2[var_s3] + 0x7AC, var_s2_3, 0x14, 0);
        var_s0_2 += 1;
        var_s3 += 0x190;
        var_s2_3 += 0x14;
    } while (var_s0_2 < 4);
    func_0021CAD0();
}
