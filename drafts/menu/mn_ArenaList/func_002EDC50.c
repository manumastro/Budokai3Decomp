/* Draft (not built): func_002EDC50 at 0x002EDC50, size 0x234, segment menu/mn_ArenaList (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 96 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1B8, original 0x234
 * Original: asm/nonmatchings/menu/mn_ArenaList/func_002EDC50.s */

// src/menu/mn_ArenaList.c func_002EDC50 size diff=96/110
void func_002EE100(u8 *s2);
s32 func_002ECE20(void *, void *, void *);
void func_002EDC50(u8 *arg0) {
    s16 temp_a0_3;
    s32 temp_a0;
    s32 var_s5;
    s64 var_s2;
    s64 var_s4;
    s8 temp_a2;
    u8 *temp_a0_2;
    u8 *var_s0;
    u8 *var_s1;
    u8 *var_s3;
    u8 *var_s6;
    u8 *var_v1;

    var_s1 = arg0;
    temp_a0 = *(s32 *)((u8 *)arg0 + 0x240);
    var_s0 = D_004B4B40 + (*(s16 *)((u8 *)arg0 + 0x16) * 0x28) + 0x2B5D6;
    D_00470704 = temp_a0;
    D_0047070C = 0x4000;
    D_00470708 = 0;
    amModel_SetCurrent(temp_a0, 0x4000);
    D_00470238 = 0;
    var_s5 = 0;
    var_s3 = var_s1;
    do {
        var_s6 = var_s3 + 0x7C;
        if ((*(s16 *)((u8 *)var_s1 + 0x16) + var_s5) >= *(s16 *)((u8 *)var_s1 + 0xE)) {
            *(s8 *)((u8 *)var_s3 + 0x7C) = -1;
        } else {
            *(s8 *)((u8 *)var_s3 + 0x7C) = 0;
            func_002EE100(var_s6);
            if (*(s8 *)((u8 *)var_s0 + 0) != 0) {
                temp_a2 = *(s8 *)((u8 *)var_s0 + 2);
                var_s2 = ((*(s8 *)((u8 *)var_s0 + 2) / 10) + ((u32) temp_a2 >> 0x1F)) << 0x30;
                var_s2 = var_s2 >> 0x30;
                var_s4 = (temp_a2 - (var_s2 * 0xA)) << 0x30;
                var_s4 = var_s4 >> 0x30;
                *(u8 **)((u8 *)var_s6 + 4) = func_0022D670((void *)(*(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s1 + 0x23C)) + 0x1C) + ((*(s8 *)((u8 *)var_s0 + 1) + 0xF) * 4))), 0.0f);
                *(u8 **)((u8 *)var_s6 + 8) = func_0022D670(*(u8 **)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s1 + 0x23C)) + 0x1C)) + 0x1CC), 0.0f);
                if (var_s2 != 0) {
                    *(u8 **)((u8 *)var_s6 + 0xC) = func_0022D670(*(u8 **)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s1 + 0x23C)) + 0x1C) + (var_s2 * 4)) + 0x1E8), 0.0f);
                } else {
                    *(u8 **)((u8 *)var_s6 + 0xC) = NULL;
                }
                *(u8 **)((u8 *)var_s6 + 0x10) = func_0022D670(*(u8 **)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s1 + 0x23C)) + 0x1C) + (((s64) (var_s4 << 0x30) >> 0x30) * 4)) + 0x1E8), 0.0f);
                func_002ECE20(var_s1, var_s6, var_s0);
            }
        }
        var_s5 += 1;
        var_s3 += 0x38;
        var_s0 += 0x28;
    } while (var_s5 < 8);
    temp_a0_2 = *(u8 **)((u8 *)var_s1 + 0x78);
    if (temp_a0_2 != NULL) {
        func_0022D0E0(temp_a0_2, 1);
    }
    temp_a0_3 = *(s16 *)((u8 *)var_s1 + 0x2C);
    var_v1 = NULL;
    if (temp_a0_3 == -1) {

    } else {
        var_v1 = func_0022D670((void *)(*(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s1 + 0x23C)) + 0x1C) + ((temp_a0_3 + 0x4B) * 4))), 0.0f);
    }
    *(u8 **)((u8 *)var_s1 + 0x78) = var_v1;
}
