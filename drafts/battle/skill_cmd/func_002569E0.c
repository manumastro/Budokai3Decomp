/* Draft (not built): func_002569E0 at 0x002569E0, size 0x208, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 72 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x24C, original 0x208
 * Original: asm/nonmatchings/battle/skill_cmd/func_002569E0.s */

// src/battle/skill_cmd.c func_002569E0 size diff=72/147
extern s32 amGs_SetReg32(s32, s32);
void *func_0021C430(s16);
void func_002569E0(s32 *arg0) {
    f32 temp_f20;
    f32 temp_f20_2;
    f32 var_f20;
    f32 var_f20_2;
    f32 var_f21;
    s32 temp_s3;
    s32 temp_s5;
    s32 var_s2;
    u8 *var_s0;
    u8 *var_s1;

    D_00470238 = 0;
    amModel_SetCurrent(*(s32 *)((u8 *)gBtlSys + 0xE60), 0x04000000);
    var_s2 = 0;
    var_s1 = (unsigned char *)(arg0);
    var_s0 = (unsigned char *)(arg0);
    do {
        temp_s3 = func_0021C360(*(s16 *)((u8 *)var_s1 + 0x34));
        if ((*(s32 *)((u8 *)arg0 + 4) == 1) && (*(s16 *)((u8 *)var_s1 + 0x30) < 3)) {
            var_f20 = *(f32 *)((u8 *)var_s0 + 0x20) / 100.0f;
            if (!(var_f20 <= 1.0f)) {
                var_f20 = 1.0f;
            }
            temp_f20 = var_f20 * 152.0f;
            if (!(temp_f20 <= 0.0f)) {
                func_002560A0(var_s2, temp_s3 & 1, *(s32 *)((u8 *)(func_0021C430(*(s16 *)((u8 *)var_s1 + 0x34))) + 0x18), temp_f20);
            }
        }
        var_f21 = *(f32 *)((u8 *)arg0 + 0xC) / 60.0f;
        if (!(var_f21 <= 1.0f)) {
            do {
                var_f21 -= 1.0f;
            } while (!(var_f21 <= 1.0f));
        }
        temp_f20_2 = *(f32 *)((u8 *)var_s0 + 0x28) / 300.0f;
        var_f20_2 = temp_f20_2 * temp_f20_2;
        if (!(var_f20_2 <= 1.0f)) {
            var_f20_2 = 1.0f;
        }
        if (!(var_f20_2 <= 0.0f)) {
            temp_s5 = amGs_SetReg32(2, 0x37001);
            func_00256360(var_s2, temp_s3 & 1, var_f20_2, var_f21, *(f32 *)((u8 *)var_s0 + 0x18));
            amGs_SetReg32(2, temp_s5);
        }
        var_s2 += 1;
        var_s1 += 2;
        var_s0 += 4;
    } while (var_s2 < 2);
}
