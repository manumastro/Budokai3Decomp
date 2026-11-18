/* Draft (not built): func_001DD680 at 0x001DD680, size 0x1F8, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); (int, void *, unsigned char *)' does not match 'A2d_CallHandler(int, void *)' @ 1950: A2d_CallHandler(7, &sp20, var_a2);
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001DD680.s */

// src/unk/unk_1D5B30.c func_001DD680 cerr diff=-1/0
void func_001DD680(u8 *arg0, u8 *arg2) {
    s32 sp20;
    s32 sp24;
    s32 sp28;
    f32 temp_f1;
    s32 temp_a2;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a1;
    s32 var_v1;
    u8 *temp_a0;
    u8 *var_a2;

    var_a2 = arg2;
    temp_v0 = *(s32 *)((u8 *)arg0 + 0x1A28) + *(s32 *)((u8 *)arg0 + 0x1A24);
    if (temp_v0 > 0) {
        temp_a2 = *(s32 *)((u8 *)arg0 + 0x1A2C);
        if (*(s8 *)((u8 *)arg0 + 0x2015) != 0) {
            var_a0 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1358)) + 0x1350);
        } else {
            var_a0 = *(s32 *)((u8 *)arg0 + 0x1350);
        }
        temp_a0 = (u8 *)(gBattle + (var_a0 * 0x48) + 0x897E);
        if (*(s16 *)((u8 *)temp_a0 + 0xA) < temp_a2) {
            *(s16 *)((u8 *)temp_a0 + 0xA) = (s16) temp_a2;
        }
        if (*(s8 *)((u8 *)arg0 + 0x2015) != 0) {
            var_a0_2 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1358)) + 0x1350);
        } else {
            var_a0_2 = *(s32 *)((u8 *)arg0 + 0x1350);
        }
        *(s16 *)((u8 *)(gBattle + (var_a0_2 * 0x48)) + 0x8980) = 0;
        if (*(s8 *)((u8 *)arg0 + 0x2015) != 0) {
            var_a0_3 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1358)) + 0x1350);
        } else {
            var_a0_3 = *(s32 *)((u8 *)arg0 + 0x1350);
        }
        *(s16 *)((u8 *)(gBattle + (var_a0_3 * 0x48)) + 0x897E) = 0;
        var_a2 = (u8 *)(gBattle);
        if (*(s8 *)((u8 *)arg0 + 0x2015) != 0) {
            var_a1 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1358)) + 0x1350);
        } else {
            var_a1 = *(s32 *)((u8 *)arg0 + 0x1350);
        }
        *(s16 *)((u8 *)(var_a2 + (var_a1 * 0x48)) + 0x8982) = 0;
        *(s32 *)((u8 *)arg0 + 0x1A28) = 0;
        *(s32 *)((u8 *)arg0 + 0x1A24) = 0;
        *(s32 *)((u8 *)arg0 + 0x1A2C) = 0;
        *(s32 *)((u8 *)arg0 + 0x1808) = 0x42700000;
    }
    sp20 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x1350);
    sp24 = *(s32 *)((u8 *)arg0 + 0x1350);
    sp28 = temp_v0;
    A2d_CallHandler(7, &sp20, var_a2);
    temp_f1 = 360.0f * ((f32) *(s32 *)((u8 *)arg0 + 0x17AC) / 65536.0f);
    if (!(temp_f1 <= 90.0f) && (temp_f1 < 270.0f)) {
        var_v1 = 1;
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        *(s8 *)((u8 *)arg0 + 0x1964) = 0;
        *(s8 *)((u8 *)arg0 + 0x1965) = 0;
    }
    if ((*(s8 *)((u8 *)arg0 + 0x1FF8) != -1) && (*(s8 *)((u8 *)arg0 + 0x2009) != 0)) {
        *(f32 *)((u8 *)arg0 + 0x17C0) = (f32) *(f32 *)((u8 *)arg0 + 0x17C4);
    }
}
