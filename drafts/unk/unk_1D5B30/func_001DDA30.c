/* Draft (not built): func_001DDA30 at 0x001DDA30, size 0x2FC, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); s not match 'func_001DFE60(struct Fighter *, int, float)' @ 2014: func_001DFE60(temp_s0, 0, temp_a2_3, var_a3, -var_f3);
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001DDA30.s */

// src/unk/unk_1D5B30.c func_001DDA30 cerr diff=-1/0
void func_001DDA30(u8 *arg0) {
    s32 sp30;
    s32 sp34;
    f32 temp_f2;
    f32 var_f3;
    s16 temp_a2_2;
    s32 temp_a2_3;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a3;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s8 temp_a0;
    s8 temp_a2;
    u8 *temp_s0;
    u8 *temp_v1;
    u8 *temp_v1_2;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x1354);
    *(s32 *)((u8 *)arg0 + 0x1A24) = (s32) (*(s32 *)((u8 *)arg0 + 0x1A24) + 1);
    if (*(s8 *)((u8 *)arg0 + 0x2015) != 0) {
        var_v1 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1358)) + 0x1350);
    } else {
        var_v1 = *(s32 *)((u8 *)arg0 + 0x1350);
    }
    temp_v1 = (u8 *)(gBattle + (var_v1 * 0x48));
    *(s16 *)((u8 *)temp_v1 + 0x8980) = (s16) (*(s16 *)((u8 *)temp_v1 + 0x8980) + 1);
    temp_a2 = *(s8 *)((u8 *)arg0 + 0x2015);
    if (temp_a2 != 0) {
        var_a0 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1358)) + 0x1350);
    } else {
        var_a0 = *(s32 *)((u8 *)arg0 + 0x1350);
    }
    if (temp_a2 != 0) {
        var_a0_2 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1358)) + 0x1350);
    } else {
        var_a0_2 = *(s32 *)((u8 *)arg0 + 0x1350);
    }
    if (temp_a2 != 0) {
        var_a0_3 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1358)) + 0x1350);
    } else {
        var_a0_3 = *(s32 *)((u8 *)arg0 + 0x1350);
    }
    *(s16 *)((u8 *)(gBattle + (var_a0_3 * 0x48)) + 0x8982) = (s16) ((s64) ((*(s16 *)((u8 *)(gBattle + (var_a0_2 * 0x48)) + 0x897E) + *(s16 *)((u8 *)(gBattle + (var_a0 * 0x48)) + 0x8980)) << 0x30) >> 0x30);
    temp_a0 = *(s8 *)((u8 *)arg0 + 0x2015);
    if (temp_a0 != 0) {
        var_v1_2 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1358)) + 0x1350);
    } else {
        var_v1_2 = *(s32 *)((u8 *)arg0 + 0x1350);
    }
    temp_a2_2 = *(s16 *)((u8 *)(gBattle + (var_v1_2 * 0x48)) + 0x8982);
    if (temp_a0 != 0) {
        var_v1_3 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1358)) + 0x1350);
    } else {
        var_v1_3 = *(s32 *)((u8 *)arg0 + 0x1350);
    }
    temp_v1_2 = (u8 *)(gBattle + (var_v1_3 * 0x48) + 0x897E);
    if (*(s16 *)((u8 *)temp_v1_2 + 6) < temp_a2_2) {
        *(s16 *)((u8 *)temp_v1_2 + 6) = temp_a2_2;
    }
    sp30 = *(s32 *)((u8 *)temp_s0 + 0x1350);
    sp34 = *(s32 *)((u8 *)arg0 + 0x1A24) + *(s32 *)((u8 *)arg0 + 0x1A28);
    A2d_CallHandler(6, &sp30);
    if (*(s16 *)((u8 *)gBattle + 0x8944) == 0) {
        var_a3 = *(s32 *)((u8 *)arg0 + 0x1A24);
        if (var_a3 < 5) {

        } else {
            var_a3 = 5;
        }
        if (*(s8 *)((u8 *)temp_s0 + 0x2019) != 0) {
            *(s8 *)((u8 *)temp_s0 + 0x2019) = 0;
            func_001DFE60((struct Fighter *)(arg0), 4, 0xC3FA0000);
            return;
        }
        if (*(s8 *)((u8 *)temp_s0 + 0x2010) == 0) {
            temp_a2_3 = *(s32 *)((u8 *)temp_s0 + 0x1CF8);
            temp_f2 = 360.0f * ((f32) *(s32 *)((u8 *)arg0 + 0x17AC) / 65536.0f);
            var_f3 = 200.0f + (f32) (var_a3 * (0x2D - (*(s8 *)((u8 *)((*(s32 *)((u8 *)temp_s0 + 0xBA4) * 0x14) + temp_a2_3) + 0xDD) * 5)));
            if (!(temp_f2 <= 90.0f) && (var_v0 = 1, (temp_f2 < 270.0f))) {

            } else {
                var_v0 = 0;
            }
            if (var_v0 != 0) {
                var_f3 *= 0.5f;
            }
            func_001DFE60(temp_s0, 0, temp_a2_3, var_a3, -var_f3);
        }
    }
}
