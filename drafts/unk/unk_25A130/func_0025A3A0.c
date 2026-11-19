/* Draft (not built): func_0025A3A0 at 0x0025A3A0, size 0x1E0, segment unk/unk_25A130 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 66 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1C4, original 0x1E0
 * Original: asm/nonmatchings/unk/unk_25A130/func_0025A3A0.s */

// src/unk/unk_25A130.c func_0025A3A0 size diff=66/113
s32 func_0025A3A0(s32 arg0, f32 fparg0, f32 fparg1) {
    s32 *var_s0;
    s32 temp_a0_2;
    s32 var_a1;
    s32 var_s1;
    s32 var_s2;
    s32 var_s5;
    u8 *temp_a0;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *var_s3;
    u8 *var_s4;

    var_s5 = arg0;
    var_s4 = (unsigned char *)(gBtlSys);
    if (D_0058D4F0 == NULL) {
        return 0;
    }
    var_s3 = (unsigned char *)(D_0058D4F0 + 0x30);
    var_s1 = var_s5 * 2;
    temp_v0 = var_s1 + var_s3;
    var_s0 = (int *)(temp_v0 + 0x30);
    if (*(s16 *)((u8 *)temp_v0 + 0x30) >= 3) {
        return 0;
    }
    if (var_s5 == 0) {
        func_001E9B00(1, 0x2B, 0, 0, 0, 0x3F800000);
    } else {
        func_001E9B00(1, 0x2C, 0, 0, 0, 0x3F800000);
    }
    var_s2 = var_s5 * 4;
    temp_v0_2 = var_s2 + var_s3;
    *(f32 *)((u8 *)temp_v0_2 + 0x20) = fparg0;
    *(f32 *)((u8 *)temp_v0_2 + 0x28) = fparg1;
    *(s16 *)((u8 *)temp_v0 + 0x30) = (s16) (*(s16 *)((u8 *)temp_v0 + 0x30) + 1);
    if (var_s5 == 0) {
        var_a1 = 1;
    } else {
        var_a1 = 2;
    }
    *(s32 *)((u8 *)var_s3 + 8) = (s32) (*(s32 *)((u8 *)var_s3 + 8) | var_a1);
    *(f32 *)((u8 *)(var_s2 + var_s3) + 0x18) = 0.0f;
    if (!(fparg0 < 100.0f)) {
        temp_a0 = *(u8 **)((u8 *)var_s4 + 0xE60);
        var_s0 = (int *)(*(s32 *)((u8 *)D_0058D4F0 + 0x30) + 0x30);
        D_00470704 = temp_a0;
        D_0047070C = 0x04000000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0, 0x04000000);
        temp_v0_3 = (unsigned char *)(var_s2 + var_s0);
        D_00470238 = 0;
        temp_a0_2 = *(s32 *)((u8 *)temp_v0_3 + 0x2C);
        var_s0 = (int *)(temp_v0_3 + 0x2C);
        if (temp_a0_2 == 0) {
            *var_s0 = (int)(func_0022D860((void *)(*(s32 *)((u8 *)((func_0021C360(*(s16 *)((u8 *)(var_s1 + var_s3) + 0x34)) * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s4 + 0xE68)) + 0x14)) + 0x210)), 0.0f));
        } else {
            func_0022C7D0((void *)(temp_a0_2), 1, 0.0f);
        }
    }
    return 1;
}
