/* Draft (not built): func_002AF420 at 0x002AF420, size 0x210, segment unk/unk_2AE760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  int, unsigned char *)' does not match 'A2d_SetMode(int)' @ 492: A2d_SetMode(D_004708FC, &D_005BCD20, temp_a2, temp_a3);
 * Original: asm/nonmatchings/unk/unk_2AE760/func_002AF420.s */

// src/unk/unk_2AE760.c func_002AF420 cerr diff=-1/0
s32 func_002AF420(u8 *arg0, u8 *arg1) {
    s8 sp60;
    f32 sp68;
    f32 temp_f1;
    f32 temp_f20;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    s8 *var_v1;
    u8 *temp_a0;
    u8 *temp_a3;
    u8 *temp_s2;

    temp_a3 = *(u8 **)((u8 *)arg1 + 0x2C);
    temp_a2 = **(s32 **)((u8 *)arg0 + 0);
    temp_f20 = *(f32 *)((u8 *)temp_a3 + 0);
    temp_s0 = *(s32 *)((u8 *)temp_a3 + 8);
    temp_s2 = (*(s32 *)((u8 *)temp_a3 + 0xC) * 0x28) + (&D_005BCD20 + (temp_a2 * 0xA0));
    A2d_SetMode(D_004708FC, &D_005BCD20, temp_a2, temp_a3);
    temp_s1 = *(s32 *)((u8 *)temp_s2 + 0x10);
    temp_a1 = *(s32 *)((u8 *)temp_s2 + 0x14);
    temp_a0 = *(u8 **)((u8 *)temp_s2 + 8);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = temp_a1;
    D_00470708 = temp_s1;
    amModel_SetCurrent(temp_a0, temp_a1);
    D_00470238 = temp_s1;
    func_00228430(0);
    if (temp_s0 == -1) {
        var_s1 = 0;
        if (*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0xC)) + 0x18) > 0) {
            var_s0 = 0;
            do {
                func_00228430(0);
                func_0022C060(*(*(s32 *)((u8 *)temp_s2 + 0x24) + var_s0), 0x3F800000);
                func_00228410();
                func_0022CD00(*(*(s32 *)((u8 *)temp_s2 + 0x24) + var_s0));
                var_s1 += 1;
                var_s0 += 4;
            } while (var_s1 < *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0xC)) + 0x18));
        }
    } else {
        func_00228430(0);
        var_v1 = &sp60;
        var_v0 = 0x10;
        if (var_v1 != NULL) {
            do {
                *var_v1 = 0;
                var_v0 -= 1;
                var_v1 += 1;
            } while (var_v0 != 0);
        }
        sp68 = temp_f20;
        func_00227A30((u8 *)(&sp60));
        temp_s0_2 = temp_s0 * 4;
        func_0022C060(*(*(s32 *)((u8 *)temp_s2 + 0x24) + temp_s0_2), 0x3F800000);
        func_00228410();
        func_0022CD00(*(*(s32 *)((u8 *)temp_s2 + 0x24) + temp_s0_2));
    }
    func_00228410();
    A2d_FlushList();
    temp_f1 = *(f32 *)((u8 *)arg0 + 0x30);
    if (temp_f1 <= -2.0f) {
        return 3;
    }
    if (temp_f1 <= 0.0f) {
        *(s32 *)((u8 *)arg0 + 0x10) = 0;
        return 1;
    }
    *(f32 *)((u8 *)arg0 + 0x30) = (f32) (temp_f1 - 1.0f);
    return 3;
}
