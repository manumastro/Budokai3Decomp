/* Draft (not built): func_002EDE90 at 0x002EDE90, size 0x264, segment menu/mn_ArenaList (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); o 'void *' mwccps2.exe Compiler: @ 68: 3C)) + 0x1C) + ((*(u16 *)((u8 *)var_s0 + 0) + 0xF) * 4)), temp_a1_3, temp_a2, 0);
 * Original: asm/nonmatchings/menu/mn_ArenaList/func_002EDE90.s */

// src/menu/mn_ArenaList.c func_002EDE90 cerr diff=-1/0
void func_002EDE90(u8 *arg0) {
    s16 temp_a0_3;
    s16 temp_a1;
    s32 temp_a0_2;
    s32 var_s5;
    s32 var_v1;
    s64 temp_a2;
    s64 temp_s2;
    u32 temp_a1_3;
    u8 temp_a1_2;
    u8 *temp_a0;
    u8 *temp_s6;
    u8 *var_s0;
    u8 *var_s3;

    temp_a0 = *(u8 **)((u8 *)arg0 + 0x240);
    var_s0 = (u8 *)(*(s32 *)((u8 *)arg0 + 0x244) + (*(s16 *)((u8 *)arg0 + 0x12) << 5) + 0xC8);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x4000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x4000);
    D_00470238 = 0;
    var_s5 = 0;
    var_s3 = arg0;
    do {
        temp_a1 = *(s16 *)((u8 *)arg0 + 0x12);
        temp_s6 = var_s3 + 0x7C;
        if ((temp_a1 + var_s5) >= *(s16 *)((u8 *)arg0 + 0xC)) {
            *(s8 *)((u8 *)var_s3 + 0x7C) = -1;
        } else {
            if (*(u8 *)((u8 *)(&(&D_004B4B40[temp_a1])[var_s5]) + 0x2B456) != 0) {
                *(s8 *)((u8 *)var_s3 + 0x7C) = 1;
            } else {
                *(s8 *)((u8 *)var_s3 + 0x7C) = 0;
            }
            func_002EE100(temp_s6, temp_a1);
            temp_a1_2 = *(u8 *)((u8 *)var_s0 + 2);
            temp_a2 = (s64) ((s64) temp_a1_2 << 0x30) >> 0x30;
            temp_a1_3 = (u32) temp_a2 >> 0x1F;
            temp_s2 = (s64) ((((s32) (((s64) temp_a1_2 << 0x30) / 703687441530880) >> 2) + temp_a1_3) << 0x30) >> 0x30;
            *(s32 *)((u8 *)temp_s6 + 4) = func_0022D670(*(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C) + ((*(u16 *)((u8 *)var_s0 + 0) + 0xF) * 4)), temp_a1_3, temp_a2, 0);
            *(s32 *)((u8 *)temp_s6 + 8) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C)) + 0x1CC), 0U);
            if (temp_s2 != 0) {
                *(s32 *)((u8 *)temp_s6 + 0xC) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C) + (temp_s2 * 4)) + 0x1E8), 0U);
            } else {
                *(s32 *)((u8 *)temp_s6 + 0xC) = 0;
            }
            *(s32 *)((u8 *)temp_s6 + 0x10) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C) + (((s64) (((s64) ((temp_a2 - (temp_s2 * 0xA)) << 0x30) >> 0x30) << 0x30) >> 0x30) * 4)) + 0x1E8), 0U);
            *(s32 *)((u8 *)temp_s6 + 0x14) = func_0022D670(*(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C) + ((*(u16 *)((u8 *)var_s0 + 0) + 0x4B) * 4)), 0U);
        }
        var_s5 += 1;
        var_s3 += 0x38;
        var_s0 += 0x20;
    } while (var_s5 < 8);
    temp_a0_2 = *(s32 *)((u8 *)arg0 + 0x78);
    if (temp_a0_2 != 0) {
        func_0022D0E0(temp_a0_2, 1);
    }
    temp_a0_3 = *(s16 *)((u8 *)arg0 + 0x2C);
    var_v1 = 0;
    if (temp_a0_3 == -1) {

    } else {
        var_v1 = (void *)(func_0022D670(*(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C) + ((temp_a0_3 + 0x4B) * 4)), 0U));
    }
    *(s32 *)((u8 *)arg0 + 0x78) = var_v1;
}
