/* Draft (not built): func_002186D0 at 0x002186D0, size 0x1B0, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 54 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x194, original 0x1B0
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_002186D0.s */

// src/unk/unk_20A4D0.c func_002186D0 size diff=54/101
void func_002186D0(u8 *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 var_f1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_v1_2;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_s1;
    u8 *temp_v1;

    temp_v1 = *(u8 **)((u8 *)arg0 + 0x30);
    M2C_ERROR(/* unknown instruction: mula.s $f1, $f2 */);
    *(f32 *)((u8 *)temp_v1 + 0) = (f32) M2C_ERROR(/* unknown instruction: madd.s $f0, $f0, $f3 */);
    temp_a0 = *(s32 *)((u8 *)temp_v1 + 8);
    temp_s1 = arg0 + 0x30;
    if ((temp_a0 >= 0) && (temp_a0 < 5)) {
        amAdx_SetVolume(temp_a0, *(f32 *)((u8 *)temp_v1 + 0) * *(f32 *)((u8 *)temp_v1 + 4));
    }
    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_a0_2 = *(s32 *)((u8 *)temp_s0 + 0xC);
    if ((temp_a0_2 == 2) && ((temp_a0_2 == 2) || (temp_a0_2 == 1))) {
        amAdx_Pause(*(s32 *)((u8 *)temp_s0 + 8), 0);
        *(s32 *)((u8 *)temp_s0 + 0xC) = 3;
    }
    temp_f1 = *(f32 *)((u8 *)temp_s1 + 0xC);
    if (!(temp_f1 < *(f32 *)((u8 *)temp_s1 + 0x10))) {
        if (*(f32 *)((u8 *)temp_s1 + 8) <= 0.0f) {
            temp_s0_2 = *(u8 **)((u8 *)arg0 + 0x30);
            temp_a0_3 = *(s32 *)((u8 *)temp_s0_2 + 8);
            if ((temp_a0_3 >= 0) && (temp_a0_3 < 5)) {
                amAdx_Stop(temp_a0_3);
            }
            temp_v1_2 = *(s32 *)((u8 *)temp_s0_2 + 8);
            if ((temp_v1_2 != 0) && (temp_v1_2 != 1)) {
                *(s32 *)((u8 *)temp_s0_2 + 8) = -1;
            }
            *(s32 *)((u8 *)temp_s0_2 + 0xC) = 0;
            *(s32 *)((u8 *)temp_s0_2 + 0x10) = 0;
            *(s16 *)((u8 *)temp_s0_2 + 0x14) = -1;
            *(s16 *)((u8 *)temp_s0_2 + 0x16) = -1;
            *(s32 *)((u8 *)temp_s0_2 + 0x18) = 0xBF800000;
        }
        *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0x1C) = 0;
        amTask_Kill((s32)(arg0));
        return;
    }
    *(f32 *)((u8 *)temp_s1 + 0xC) = (f32) (temp_f1 + *(f32 *)((u8 *)gBattle + 0x88F0));
    temp_f0 = *(f32 *)((u8 *)temp_s1 + 0x10);
    var_f1 = *(f32 *)((u8 *)temp_s1 + 0xC);
    if (var_f1 < temp_f0) {

    } else {
        var_f1 = temp_f0;
    }
    *(f32 *)((u8 *)temp_s1 + 0xC) = var_f1;
}
