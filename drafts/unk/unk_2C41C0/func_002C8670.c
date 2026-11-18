/* Draft (not built): func_002C8670 at 0x002C8670, size 0x228, segment unk/unk_2C41C0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 65 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x23C, original 0x228
 * Original: asm/nonmatchings/unk/unk_2C41C0/func_002C8670.s */

// src/unk/unk_2C41C0.c func_002C8670 size diff=65/143
s32 func_002C8670(u8 *arg0) {
    f32 temp_f1;
    f32 var_f1;
    f32 var_f2;
    s32 temp_a0;
    s32 temp_v1;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_v0;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0);
    temp_a0 = (s32)(gEffWork + (*(s16 *)((u8 *)arg0 + 0x3E) * 0xF80));
    temp_s3 = (u8 *)(temp_a0 + (*(s16 *)((u8 *)arg0 + 0x5C) << 6));
    temp_s2 = (u8 *)(temp_a0 + 0xF40);
    temp_s1 = (u8 *)(temp_a0 + 0xF00);
    if (*(s16 *)((u8 *)arg0 + 0x38) & 0x8000) {
        return 1;
    }
    if (*(u8 **)((u8 *)temp_s3 + 0x34) != NULL) {
        temp_v0 = *(u8 **)((u8 *)temp_s1 + 0x34);
        if (temp_s3 == temp_v0) {
            *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_v0 + 0x34)) + 0x38) = temp_s1;
            *(u8 **)((u8 *)temp_s1 + 0x34) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x34)) + 0x34);
        }
    }
    memset(temp_s3, 0, 0x40);
    *(u8 **)((u8 *)temp_s3 + 0x34) = temp_s2;
    *(u8 **)((u8 *)temp_s3 + 0x38) = (u8 *) *(u8 **)((u8 *)temp_s2 + 0x38);
    *(u8 **)((u8 *)temp_s2 + 0x38) = temp_s3;
    *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0x38)) + 0x34) = temp_s3;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s3) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s3) */);
    M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v1) */);
    M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf1, $vf2 */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    if (gBattle != NULL) {
        var_f1 = *(f32 *)((u8 *)gBattle + 0x88F0);
    } else if (D_004703F4 != 3) {
        var_f1 = 1.0f;
    } else {
        var_f1 = 1.2f;
    }
    *(f32 *)((u8 *)temp_s3 + 0x30) = (f32) ((f32) *(s32 *)((u8 *)temp_s0 + 0x5C) * var_f1);
    *(s32 *)((u8 *)temp_s3 + 0x3C) = (s32) *(s16 *)((u8 *)arg0 + 0x5C);
    *(s16 *)((u8 *)arg0 + 0x5C) = (s16) (*(s16 *)((u8 *)arg0 + 0x5C) + 1);
    *(s32 *)((u8 *)arg0 + 0x40) = (s32) (*(s32 *)((u8 *)arg0 + 0x40) + 1);
    temp_v1 = *(s32 *)((u8 *)temp_s0 + 0x5C);
    if (*(s32 *)((u8 *)arg0 + 0x40) >= temp_v1) {
        *(s32 *)((u8 *)arg0 + 0x40) = temp_v1;
        *(s16 *)((u8 *)arg0 + 0x5C) = (s16) *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x34)) + 0x3C);
    }
    if (gBattle != NULL) {
        var_f2 = *(f32 *)((u8 *)gBattle + 0x88F0);
    } else if (D_004703F4 != 3) {
        var_f2 = 1.0f;
    } else {
        var_f2 = 1.2f;
    }
    temp_f1 = *(f32 *)((u8 *)arg0 + 0x20) - var_f2;
    *(f32 *)((u8 *)arg0 + 0x20) = temp_f1;
    if (temp_f1 < 0.0f) {
        *(f32 *)((u8 *)arg0 + 0x20) = 0.0f;
        *(s16 *)((u8 *)arg0 + 0x38) = (s16) (*(s16 *)((u8 *)arg0 + 0x38) | ~0x7FFF);
    }
    return 0;
}
