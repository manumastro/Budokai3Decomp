/* Draft (not built): func_001CACB0 at 0x001CACB0, size 0x2FC, segment battle/character (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 114 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x38C, original 0x2FC
 * Original: asm/nonmatchings/battle/character/func_001CACB0.s */

// src/battle/character.c func_001CACB0 size diff=114/227
void func_001CACB0(Task *arg0) {
    s8 sp30;
    u8 sp31;
    s16 sp3C;
    u8 sp3E;
    u8 sp3F;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 var_f0;
    f32 var_f1;
    s32 temp_v1;
    s32 var_v0;
    s8 var_s0;
    u8 temp_a0;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v1_2;
    u8 *var_s1;

    var_s1 = (unsigned char *)(arg0 + 0x30);
    if (gBattle != NULL) {
        temp_f1 = *(f32 *)((u8 *)var_s1 + 0x10);
        temp_f0 = *(f32 *)((u8 *)var_s1 + 0xC);
        if (!(temp_f0 <= temp_f1)) {
            goto block_2;
        }
        if (gBattle != NULL) {
            var_v0 = *(s32 *)((u8 *)gBattle + 0x88EC);
        } else {
            var_v0 = 0;
        }
        if (var_v0 != 0) {
            func_001A3610(*(s32 *)((u8 *)var_s1 + 4));
            return;
        }
        temp_v0 = *(u8 *)((u8 *)var_s1 + 8);
        temp_f2 = temp_f0 / temp_f1;
        if ((s32) temp_v0 >= 0) {
            var_f1 = (f32) temp_v0;
        } else {
            var_f1 = 2.0f * (f32) ((temp_v0 >> 1) | (temp_v0 & 1));
        }
        temp_v0_2 = *(u8 *)((u8 *)var_s1 + 9);
        if ((s32) temp_v0_2 >= 0) {
            var_f0 = (f32) temp_v0_2;
        } else {
            var_f0 = 2.0f * (f32) ((temp_v0_2 >> 1) | (temp_v0_2 & 1));
        }
        var_s0 = M2C_BITWISE(s8, ((var_f1 * (1.0f - temp_f2)) + (var_f0 * temp_f2)));
        if (*(u8 *)((u8 *)var_s1 + 0xA) & 4) {
            temp_a0 = *(u8 *)((u8 *)var_s1 + 0xB);
            temp_v1 = (func_0012EAE0(0x20) % 200U) - 0x64;
            var_s0 += ((temp_a0 * temp_v1) / 100) + ((u32) (temp_a0 * temp_v1) >> 0x1F);
        }
        if (var_s0 >= 0x100) {
            var_s0 = -1;
        }
        if (var_s0 < 0) {
            var_s0 = 0;
        }
        var_s0 &= 0xFF;
        memset(&sp30, 0, 8);
        temp_v1_2 = *(u8 *)((u8 *)var_s1 + 0xA);
        if (!(temp_v1_2 & 2)) {
            if ((var_s0 & 0xFF) >= 0x80) {
                goto block_22;
            }
        } else {
block_22:
            if (!(temp_v1_2 & 1)) {
                sp31 = ((var_s0 & 0xFF) - 0x80) | 1;
            }
        }
        sp30 = var_s0;
        sp3C = 0x1000;
        sp3E = (u8) sp30;
        sp3F = sp31;
        func_0021A030(&sp3C, *(s32 *)((u8 *)var_s1 + 4), 0x20, 0x40000000);
        *(f32 *)((u8 *)var_s1 + 0xC) = (f32) (*(f32 *)((u8 *)var_s1 + 0xC) + *(f32 *)((u8 *)gBattle + 0x88F0));
        if (*(s16 *)((u8 *)gBattle + 0x8944) == 0) {
            if (!((*(f32 *)((u8 *)var_s1 + 0x10) - *(f32 *)((u8 *)var_s1 + 0xC)) < 100.0f)) {
                *(u8 *)((u8 *)var_s1 + 8) = (u8) var_s0;
                *(u8 *)((u8 *)var_s1 + 9) = 0U;
                *(f32 *)((u8 *)var_s1 + 0x10) = 100.0f;
                *(f32 *)((u8 *)var_s1 + 0xC) = 0.0f;
                *(u8 *)((u8 *)var_s1 + 0xA) = (u8) (*(u8 *)((u8 *)var_s1 + 0xA) & 0xFD);
                *(u8 *)((u8 *)var_s1 + 0xA) = (u8) (*(u8 *)((u8 *)var_s1 + 0xA) | 1);
            }
        }
        if (!(*(f32 *)((u8 *)var_s1 + 0xC) < 500.0f)) {
            if (!(*(f32 *)((u8 *)var_s1 + 0x10) < 600.0f)) {
                *(u8 *)((u8 *)var_s1 + 8) = (u8) var_s0;
                *(u8 *)((u8 *)var_s1 + 9) = 0U;
                *(f32 *)((u8 *)var_s1 + 0x10) = 100.0f;
                *(f32 *)((u8 *)var_s1 + 0xC) = 0.0f;
                *(u8 *)((u8 *)var_s1 + 0xA) = (u8) (*(u8 *)((u8 *)var_s1 + 0xA) & 0xFD);
                *(u8 *)((u8 *)var_s1 + 0xA) = (u8) (*(u8 *)((u8 *)var_s1 + 0xA) | 1);
            }
        }
        return;
    }
block_2:
    amTask_Kill(arg0);
}
