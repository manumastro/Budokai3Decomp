/* Draft (not built): func_0025A3A0 at 0x0025A3A0, size 0x1E0, segment unk/unk_25A130 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  'void *' mwccps2.exe Compiler: @ 342: * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0xE68)) + 0x14)) + 0x210), 0.0f);
 * Original: asm/nonmatchings/unk/unk_25A130/func_0025A3A0.s */

// src/unk/unk_25A130.c func_0025A3A0 cerr diff=-1/0
s32 func_0025A3A0(s32 arg0, f32 fparg0, f32 fparg1) {
    s32 temp_a0_2;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 var_a1;
    u8 *temp_a0;
    u8 *temp_s3;
    u8 *temp_s4;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;

    temp_s4 = (u8 *)(gBtlSys);
    if (D_0058D4F0 == NULL) {
        return 0;
    }
    temp_s3 = (u8 *)(D_0058D4F0 + 0x30);
    temp_s1 = arg0 * 2;
    temp_v0 = temp_s1 + temp_s3;
    if (*(s16 *)((u8 *)temp_v0 + 0x30) >= 3) {
        return 0;
    }
    if (arg0 == 0) {
        func_001E9B00(1, 0x2B, 0, 0, 0, 0x3F800000);
    } else {
        func_001E9B00(1, 0x2C, 0, 0, 0, 0x3F800000);
    }
    temp_s2 = arg0 * 4;
    temp_v0_2 = temp_s2 + temp_s3;
    *(f32 *)((u8 *)temp_v0_2 + 0x20) = fparg0;
    *(f32 *)((u8 *)temp_v0_2 + 0x28) = fparg1;
    *(s16 *)((u8 *)temp_v0 + 0x30) = (s16) (*(s16 *)((u8 *)temp_v0 + 0x30) + 1);
    if (arg0 == 0) {
        var_a1 = 1;
    } else {
        var_a1 = 2;
    }
    *(s32 *)((u8 *)temp_s3 + 8) = (s32) (*(s32 *)((u8 *)temp_s3 + 8) | var_a1);
    *(f32 *)((u8 *)(temp_s2 + temp_s3) + 0x18) = 0.0f;
    if (!(fparg0 < 100.0f)) {
        temp_a0 = *(u8 **)((u8 *)temp_s4 + 0xE60);
        temp_s0 = *(s32 *)((u8 *)D_0058D4F0 + 0x30) + 0x30;
        D_00470704 = temp_a0;
        D_0047070C = 0x04000000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0, 0x04000000);
        temp_v0_3 = (u8 *)(temp_s2 + temp_s0);
        D_00470238 = 0;
        temp_a0_2 = *(s32 *)((u8 *)temp_v0_3 + 0x2C);
        if (temp_a0_2 == 0) {
            *(s32 *)((u8 *)temp_v0_3 + 0x2C) = func_0022D860(*(s32 *)((u8 *)((func_0021C360(*(s16 *)((u8 *)(temp_s1 + temp_s3) + 0x34)) * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0xE68)) + 0x14)) + 0x210), 0.0f);
        } else {
            func_0022C7D0(temp_a0_2, 1, 0.0f);
        }
    }
    return 1;
}
