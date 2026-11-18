/* Draft (not built): func_002EDC50 at 0x002EDC50, size 0x234, segment menu/mn_ArenaList (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); cit conversion from 'unsigned char *' to 'int' mwccps2.exe Compiler: @ 49: amModel_SetCurrent(temp_a0, 0x4000, temp_a2);
 * Original: asm/nonmatchings/menu/mn_ArenaList/func_002EDC50.s */

// src/menu/mn_ArenaList.c func_002EDC50 cerr diff=-1/0
s32 func_002ECE20(void *, void *, void *);
void func_002EDC50(u8 *arg0) {
    s16 temp_a0_3;
    s16 temp_a2;
    s32 temp_a0_2;
    s32 var_s5;
    s32 var_v1;
    s64 temp_s2;
    s64 temp_s4;
    s8 temp_a2_2;
    u32 temp_a1;
    u8 *temp_a0;
    u8 *temp_s6;
    u8 *var_s0;
    u8 *var_s3;

    temp_a2 = *(s16 *)((u8 *)arg0 + 0x16);
    temp_a0 = *(u8 **)((u8 *)arg0 + 0x240);
    var_s0 = D_004B4B40 + (temp_a2 * 0x28) + 0x2B5D6;
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x4000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x4000, temp_a2);
    D_00470238 = 0;
    var_s5 = 0;
    var_s3 = arg0;
    do {
        temp_s6 = var_s3 + 0x7C;
        if ((*(s16 *)((u8 *)arg0 + 0x16) + var_s5) >= *(s16 *)((u8 *)arg0 + 0xE)) {
            *(s8 *)((u8 *)var_s3 + 0x7C) = -1;
        } else {
            *(s8 *)((u8 *)var_s3 + 0x7C) = 0;
            func_002EE100(temp_s6);
            if (*(s8 *)((u8 *)var_s0 + 0) != 0) {
                temp_a2_2 = *(s8 *)((u8 *)var_s0 + 2);
                temp_a1 = (u32) temp_a2_2 >> 0x1F;
                temp_s2 = (s64) (((*(s8 *)((u8 *)var_s0 + 2) / 10) + temp_a1) << 0x30) >> 0x30;
                temp_s4 = (s64) ((temp_a2_2 - (temp_s2 * 0xA)) << 0x30) >> 0x30;
                *(s32 *)((u8 *)temp_s6 + 4) = func_0022D670(*(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C) + ((*(s8 *)((u8 *)var_s0 + 1) + 0xF) * 4)), temp_a1, temp_a2_2, 0);
                *(s32 *)((u8 *)temp_s6 + 8) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C)) + 0x1CC), 0U);
                if (temp_s2 != 0) {
                    *(s32 *)((u8 *)temp_s6 + 0xC) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C) + (temp_s2 * 4)) + 0x1E8), 0U);
                } else {
                    *(s32 *)((u8 *)temp_s6 + 0xC) = 0;
                }
                *(s32 *)((u8 *)temp_s6 + 0x10) = func_0022D670(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x23C)) + 0x1C) + (((s64) (temp_s4 << 0x30) >> 0x30) * 4)) + 0x1E8), 0U);
                func_002ECE20(arg0, temp_s6, var_s0);
            }
        }
        var_s5 += 1;
        var_s3 += 0x38;
        var_s0 += 0x28;
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
