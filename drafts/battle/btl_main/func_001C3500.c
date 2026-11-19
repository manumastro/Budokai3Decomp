/* Draft (not built): func_001C3500 at 0x001C3500, size 0x2E8, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 75 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2E4, original 0x2E8
 * Original: asm/nonmatchings/battle/btl_main/func_001C3500.s */

// src/battle/btl_main.c func_001C3500 size diff=75/185
s32 func_001C3500(void) {
    BattleWork *var_s0;
    BattleWork *var_s4;
    Fighter *temp_a1;
    Fighter *temp_a2;
    Fighter *var_s1;
    f32 temp_f0;
    f32 var_f0;
    s16 temp_a0;
    s16 temp_v0_3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_2;

    var_s4 = gBattle;
    var_s2 = 0;
    if (*(s32 *)((u8 *)var_s4 + 0x88D8) > 0) {
        var_s0 = var_s4;
        do {
            var_s1 = var_s0->fighter[0];
            temp_a0 = var_s1->unk13A4;
            if (temp_a0 >= 0) {
                var_v0 = func_001AA9D0((s32) temp_a0);
            } else {
                var_v0 = func_001E9250(var_s1);
            }
            var_s3 = var_v0;
            *(s16 *)((u8 *)var_s1 + 0x1A36) = (s16) (*(s16 *)((u8 *)var_s1 + 0x1A36) + ((s64) ((s64) var_v0 << 0x30) >> 0x30));
            temp_f0 = func_0025B290(var_s1->unk1350);
            if (var_s3 > 0) {
                var_f0 = temp_f0 + (0.05f * var_s4->unk88F0 * (f32) var_s3);
            } else {
                var_f0 = temp_f0 - (0.01f * var_s4->unk88F0);
            }
            if (!(var_f0 <= 2.0f)) {
                var_f0 = 2.0f;
            } else if (var_f0 < 1.0f) {
                var_f0 = 1.0f;
            }
            func_0025B2E0(var_s1->unk1350, var_f0);
            func_001D9900(var_s1, 0xE, var_s3);
            func_001D98A0(var_s1, 0xF, func_001D99C0(var_s1, 0xE));
            var_s2 += 1;
            var_s0 += 4;
        } while (var_s2 < *(s32 *)((u8 *)var_s4 + 0x88D8));
    }
    temp_a2 = var_s4->fighter[1];
    temp_a1 = var_s4->fighter[0];
    temp_v0 = *(s16 *)((u8 *)temp_a1 + 0x1A38) - *(s16 *)((u8 *)temp_a2 + 0x1A38);
    var_a0 = 1;
    if (temp_v0 >= 0x29) {

    } else {
        var_a0 = -1;
        if (temp_v0 < -0x28) {

        } else {
            var_a0 = 0;
        }
    }
    temp_v0_2 = *(s16 *)((u8 *)temp_a1 + 0x1A36) - *(s16 *)((u8 *)temp_a2 + 0x1A36);
    if (temp_v0_2 >= 9) {
        var_v0_2 = 1;
    } else if (temp_v0_2 < -8) {
        var_v0_2 = -1;
    } else {
        var_v0_2 = 0;
    }
    temp_v0_3 = var_v0_2 + var_a0;
    if (temp_v0_3 > 0) {
        *(s16 *)((u8 *)temp_a1 + 0x1A32) = 0;
        *(s16 *)((u8 *)(var_s4->fighter[1]) + 0x1A32) = (s16) -temp_v0_3;
        return 0;
    }
    if (temp_v0_3 < 0) {
        *(s16 *)((u8 *)temp_a1 + 0x1A32) = temp_v0_3;
        *(s16 *)((u8 *)(var_s4->fighter[1]) + 0x1A32) = 0;
        return 1;
    }
    if (func_0012EAE0(0x20) & 1) {
        *(s16 *)((u8 *)(var_s4->fighter[0]) + 0x1A32) = 0;
        *(s16 *)((u8 *)(var_s4->fighter[1]) + 0x1A32) = -1;
    } else {
        *(s16 *)((u8 *)(var_s4->fighter[0]) + 0x1A32) = -1;
        *(s16 *)((u8 *)(var_s4->fighter[1]) + 0x1A32) = 0;
    }
    return 0;
}
