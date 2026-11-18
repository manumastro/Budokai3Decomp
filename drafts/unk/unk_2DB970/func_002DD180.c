/* Draft (not built): func_002DD180 at 0x002DD180, size 0x130, segment unk/unk_2DB970 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 34 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x11C, original 0x130
 * Original: asm/nonmatchings/unk/unk_2DB970/func_002DD180.s */

// src/unk/unk_2DB970.c func_002DD180 size diff=34/71
s32 func_002D9770(f32 *, f32);
extern void func_002DCC60(void);
void func_002DD180(void) {
    f32 sp20;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 var_f12;
    f32 var_f2;
    u8 *temp_s0;

    temp_s0 = (u8 *)(gOptionWork);
    M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x38C);
    if (!(temp_f1 < 7.0f)) {
        sp20 = (-380.0f * (temp_f1 - 7.0f)) / 23.0f;
    }
    temp_f1_2 = *(f32 *)((u8 *)temp_s0 + 0x38C);
    if (temp_f1_2 < 18.0f) {
        var_f12 = 1.0f - (temp_f1_2 / 18.0f);
    } else {
        var_f12 = 0.0f;
    }
    func_002D9770(&sp20, var_f12);
    if (D_004703F4 != 3) {
        var_f2 = 1.0f;
    } else {
        var_f2 = 1.2f;
    }
    temp_f1_3 = *(f32 *)((u8 *)temp_s0 + 0x38C) + var_f2;
    *(f32 *)((u8 *)temp_s0 + 0x38C) = temp_f1_3;
    if (!(temp_f1_3 < 30.0f)) {
        *(s32 *)((u8 *)temp_s0 + 0x354) = 0;
    }
    if (!(*(f32 *)((u8 *)temp_s0 + 0x388) <= 95.0f)) {
        *(s32 **)((u8 *)temp_s0 + 0x344) = &func_002DCC60;
    }
}
