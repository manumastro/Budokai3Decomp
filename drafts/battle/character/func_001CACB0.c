/* Draft (not built): func_001CACB0 at 0x001CACB0, size 0x2FC, segment battle/character (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  was declared as: 'void (struct Task *)' now declared as: 'void (unsigned char *)' @ 172: void func_001CACB0(u8 *arg0) {
 * Original: asm/nonmatchings/battle/character/func_001CACB0.s */

// src/battle/character.c func_001CACB0 cerr diff=-1/0
void func_001CACB0(u8 *arg0) {
    u8 sp30;
    u8 sp31;
    s16 sp3C;
    u8 sp3E;
    u8 sp3F;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 var_f0;
    f32 var_f1;
    f32 var_s0;
    s32 temp_v1;
    s32 var_v0;
    u8 temp_a0;
    u8 temp_s0;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v1_2;
    u8 *temp_s1;

    temp_s1 = arg0 + 0x30;
    if ((gBattle == NULL) || (temp_f1 = *(f32 *)((u8 *)temp_s1 + 0x10), temp_f0 = *(f32 *)((u8 *)temp_s1 + 0xC), !(temp_f0 <= temp_f1))) {
        amTask_Kill(arg0);
        return;
    }
    if (gBattle != NULL) {
        var_v0 = *(s32 *)((u8 *)gBattle + 0x88EC);
    } else {
        var_v0 = 0;
    }
    if (var_v0 != 0) {
        func_001A3610(*(s32 *)((u8 *)temp_s1 + 4));
        return;
    }
    temp_v0 = *(u8 *)((u8 *)temp_s1 + 8);
    temp_f2 = temp_f0 / temp_f1;
    if ((s32) temp_v0 >= 0) {
        var_f1 = (f32) temp_v0;
    } else {
        var_f1 = 2.0f * (f32) ((temp_v0 >> 1) | (temp_v0 & 1));
    }
    temp_v0_2 = *(u8 *)((u8 *)temp_s1 + 9);
    if ((s32) temp_v0_2 >= 0) {
        var_f0 = (f32) temp_v0_2;
    } else {
        var_f0 = 2.0f * (f32) ((temp_v0_2 >> 1) | (temp_v0_2 & 1));
    }
    var_s0 = (var_f1 * (1.0f - temp_f2)) + (var_f0 * temp_f2);
    if (*(u8 *)((u8 *)temp_s1 + 0xA) & 4) {
        temp_a0 = *(u8 *)((u8 *)temp_s1 + 0xB);
        temp_v1 = (func_0012EAE0(0x20) % 200U) - 0x64;
        var_s0 = M2C_BITWISE(f32, (M2C_BITWISE(s32, var_s0) + (((temp_a0 * temp_v1) / 100) + ((u32) (temp_a0 * temp_v1) >> 0x1F))));
    }
    if (M2C_BITWISE(s32, var_s0) >= 0x100) {
        var_s0 = 3.57e-43f;
    }
    if (M2C_BITWISE(s32, var_s0) < 0) {
        var_s0 = 0.0f;
    }
    temp_s0 = M2C_BITWISE(s32, var_s0) & 0xFF;
    memset(&sp30, 0, 8);
    temp_v1_2 = *(u8 *)((u8 *)temp_s1 + 0xA);
    if (((temp_v1_2 & 2) || ((temp_s0 & 0xFF) >= 0x80)) && !(temp_v1_2 & 1)) {
        sp31 = ((temp_s0 & 0xFF) - 0x80) | 1;
    }
    sp30 = temp_s0;
    sp3C = 0x1000;
    sp3E = sp30;
    sp3F = sp31;
    func_0021A030(&sp3C, *(s32 *)((u8 *)temp_s1 + 4), 0x20, 0x40000000);
    *(f32 *)((u8 *)temp_s1 + 0xC) = (f32) (*(f32 *)((u8 *)temp_s1 + 0xC) + *(f32 *)((u8 *)gBattle + 0x88F0));
    if ((*(s16 *)((u8 *)gBattle + 0x8944) == 0) && !((*(f32 *)((u8 *)temp_s1 + 0x10) - *(f32 *)((u8 *)temp_s1 + 0xC)) < 100.0f)) {
        *(u8 *)((u8 *)temp_s1 + 8) = temp_s0;
        *(u8 *)((u8 *)temp_s1 + 9) = 0U;
        *(f32 *)((u8 *)temp_s1 + 0x10) = 100.0f;
        *(f32 *)((u8 *)temp_s1 + 0xC) = 0.0f;
        *(u8 *)((u8 *)temp_s1 + 0xA) = (u8) (*(u8 *)((u8 *)temp_s1 + 0xA) & 0xFD);
        *(u8 *)((u8 *)temp_s1 + 0xA) = (u8) (*(u8 *)((u8 *)temp_s1 + 0xA) | 1);
    }
    if (!(*(f32 *)((u8 *)temp_s1 + 0xC) < 500.0f) && !(*(f32 *)((u8 *)temp_s1 + 0x10) < 600.0f)) {
        *(u8 *)((u8 *)temp_s1 + 8) = temp_s0;
        *(u8 *)((u8 *)temp_s1 + 9) = 0U;
        *(f32 *)((u8 *)temp_s1 + 0x10) = 100.0f;
        *(f32 *)((u8 *)temp_s1 + 0xC) = 0.0f;
        *(u8 *)((u8 *)temp_s1 + 0xA) = (u8) (*(u8 *)((u8 *)temp_s1 + 0xA) & 0xFD);
        *(u8 *)((u8 *)temp_s1 + 0xA) = (u8) (*(u8 *)((u8 *)temp_s1 + 0xA) | 1);
    }
}
