/* Draft (not built): func_00235D90 at 0x00235D90, size 0x288, segment battle/char_light (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); u32) (func_0012EAE0(0x20, (u32) var_a1, (u8 *) var_a2) / 10) % 100U) < temp_s2_2) { @ 202: temp_f1 = second half of f64;
 * Original: asm/nonmatchings/battle/char_light/func_00235D90.s */

// src/battle/char_light.c func_00235D90 cerr diff=-1/0
s32 func_00235D90(u8 *arg0) {
    s32 sp58;
    s32 second;
    f32 sp50;
    f32 temp_f0;
    s16 temp_a0_2;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_f1;
    s32 temp_s3;
    s32 var_s2;
    s32 var_v1;
    s8 var_a2;
    u16 var_a1;
    u32 temp_s2_2;
    u8 *temp_a0_3;
    u8 *temp_s0;
    u8 *temp_s2;
    u8 *temp_v0;
    u8 *temp_v1;

    temp_a1 = *(s32 *)((u8 *)arg0 + 0x1350);
    temp_s0 = *(u8 **)((u8 *)arg0 + 0x1354);
    temp_v0 = ((u8 *)&D_0058BBB0) + (temp_a1 * 0xC0);
    temp_s3 = *(s32 *)((u8 *)temp_v0 + 8);
    temp_s2 = *(u8 **)((u8 *)temp_v0 + 0xC);
    temp_f0 = func_001E52B0(0, temp_a1);
    temp_f1 = second half of f64;
    var_v1 = 0;
    if (temp_f1 < *(s16 *)((u8 *)temp_s2 + 0)) {

    } else {
        var_v1 = 1;
        if ((f32) temp_f1 < (1.2f * (f32) *(s16 *)((u8 *)temp_s2 + 2))) {

        } else {
            var_v1 = 2;
        }
    }
    var_a2 = *(((u8 *)&D_0044FAB0) + *(s16 *)((u8 *)arg0 + 0xCAC));
    var_a1 = *(u16 *)((u8 *)(temp_s3 + (var_a2 * 0x12)) + 0x2C);
    if (*(s16 *)((u8 *)temp_s0 + 0xCAC) == 0xF) {
        temp_v1 = *(u8 **)((u8 *)temp_s0 + 0x17A0);
        if (temp_v1 != NULL) {
            temp_a0 = *(s32 *)((u8 *)temp_v1 + 0x20);
            var_a2 = (s8) (temp_v1 + 0x20);
            if ((temp_a0 & 0x10) && !(temp_a0 & 4) && (temp_f0 <= (f32) *(s16 *)((u8 *)var_a2 + 0xA))) {
                var_a1 = (u16) (var_a1 >> 2);
            }
        }
    }
    temp_a0_2 = *(s16 *)((u8 *)temp_s0 + 0xCAC);
    if ((temp_a0_2 == 9) || (temp_a0_2 == 5)) {
        var_a1 = (u16) (var_a1 >> 1);
    }
    temp_s2_2 = (u32) (*(u8 *)((u8 *)(temp_s3 + (var_v1 * 9)) + 8) * var_a1) >> 8;
    if ((u32) ((u32) (func_0012EAE0(0x20, (u32) var_a1, (u8 *) var_a2) / 10) % 100U) < temp_s2_2) {
        var_s2 = 0x23;
        if (*(s16 *)((u8 *)gBattle + 0x7E2) != 2) {
            if ((func_0012EAE0(0x20) / 10) & 1) {
                goto block_19;
            }
        } else {
block_19:
            temp_a0_3 = arg0 + 0x650;
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a0) */);
            M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            var_s2 = 0x24;
            if (!(-((sp58 * *(f32 *)((u8 *)temp_a0_3 + 8)) - (sp50 * *(f32 *)((u8 *)temp_a0_3 + 8))) < 0.0f)) {

            } else {
                var_s2 = 0x25;
            }
        }
    } else {
        var_s2 = -2;
    }
    return var_s2;
}
