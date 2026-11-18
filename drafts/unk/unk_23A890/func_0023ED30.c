/* Draft (not built): func_0023ED30 at 0x0023ED30, size 0x63C, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 2 *)((u8 *)temp_ @ 470: D860(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE68)) + 0x14) + (var_s7 * 4)), (f32) temp_s6);
 * Original: asm/nonmatchings/unk/unk_23A890/func_0023ED30.s */

// src/unk/unk_23A890.c func_0023ED30 cerr diff=-1/0
void *BtlSys_GetSlot(s32);
s32 func_0021BEA0(s32, s32);
s16 *func_0021C610();
s32 func_00228430(s32);
s32 func_00228AC0(s32, f32 *, s32, f32);
s32 func_00229800(s32, f32 *, s32, f32);
s32 func_0022B900(s32, s32, f32);
s32 func_0022D0E0(s32, s32);
s32 func_0022D860(s32, f32);
extern f32 D_00470710;
extern s32 D_0058C180;
extern s32 D_0058C184;
extern s32 D_0058C188;
extern s32 D_0058C1D0;
extern void func_00228410(void);
void func_0023ED30(s32 arg0) {
    f32 sp90;
    f32 spB0;
    f32 spD0;
    f32 temp_f1;
    f32 temp_f1_2;
    s16 temp_a0;
    s16 temp_a1;
    s32 *temp_s5;
    s32 *temp_s5_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_s0;
    s32 temp_s2_2;
    s32 temp_s6;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;
    s32 var_s4;
    s32 var_s5;
    s32 var_s6;
    s32 var_s7;
    s32 var_v1;
    u8 **temp_a1_2;
    u8 **temp_a2;
    u8 *temp_a0_10;
    u8 *temp_a0_11;
    u8 *temp_a0_12;
    u8 *temp_a0_2;
    u8 *temp_a0_5;
    u8 *temp_a0_6;
    u8 *temp_a0_7;
    u8 *temp_a0_8;
    u8 *temp_a0_9;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_v1_3;
    u8 *temp_v1_4;
    u8 *temp_v1_5;

    temp_s3 = gBtlSys;
    var_s4 = arg0;
    temp_v0 = func_0021C3D0(0);
    temp_s2 = func_0021C660(temp_v0);
    temp_s1 = BtlSys_GetSlot(temp_v0);
    func_0021C400(temp_v0);
    temp_a0 = *(s16 *)((u8 *)(func_0021C3E0(temp_v0)) + 0x1E);
    if ((temp_a0 >= 2) && ((temp_a1 = *(s16 *)((u8 *)temp_s2 + 0), (temp_a1 == 0x2A)) || (temp_a1 == 0x2B)) && !(*(s32 *)((u8 *)temp_s1 + 0) & 0x10000)) {
        if (temp_a1 == 0x2A) {
            var_s7 = (var_s4 & 1) + 0x41;
        } else {
            var_s7 = (var_s4 & 1) + 0x43;
        }
        temp_a0_2 = *(u8 **)((u8 *)temp_s3 + 0xE60);
        temp_s6 = *(s16 *)((u8 *)temp_s2 + 0x40) + (temp_a0 * 0xA);
        D_00470704 = (s32)(temp_a0_2);
        D_0047070C = 0x04000000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0_2), 0x04000000);
        D_00470238 = 0;
        var_s0 = var_s4 * 0x64;
        temp_s5 = &D_0058C1D0 + var_s0;
        temp_a0_3 = *temp_s5;
        if (temp_a0_3 == 0) {
            *temp_s5 = func_0022D860(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE68)) + 0x14) + (var_s7 * 4)), (f32) temp_s6);
        } else {
            func_0022C7D0(temp_a0_3, 1, (f32) temp_s6);
            func_0022ACF0(*(&D_0058C1D0 + var_s0));
        }
        func_0021BEA0(*temp_s5, 0x18);
    } else {
        var_s0 = var_s4 * 0x64;
        temp_s5_2 = &D_0058C1D0 + var_s0;
        temp_a0_4 = *temp_s5_2;
        if (temp_a0_4 != 0) {
            func_0022D0E0(temp_a0_4, 1);
        }
        *temp_s5_2 = 0;
    }
    temp_a0_5 = *(u8 **)((u8 *)temp_s3 + 0xE84);
    D_00470704 = (s32)(temp_a0_5);
    D_0047070C = 0x04010000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0_5), 0x04010000);
    D_00470238 = 0;
    temp_v1 = *(s32 *)((u8 *)temp_s1 + 0);
    if (temp_v1 & 0x1C000) {
        func_0023D970(var_s4);
        temp_a0_6 = (u8 *)(*(&D_0058C180 + var_s0));
        if (temp_a0_6 != NULL) {
            *(s32 *)((u8 *)temp_a0_6 + 4) = (s32) (*(s32 *)((u8 *)temp_a0_6 + 4) | 0x18);
        }
        temp_a0_7 = (u8 *)(*(&D_0058C188 + var_s0));
        if (temp_a0_7 != NULL) {
            *(s32 *)((u8 *)temp_a0_7 + 4) = (s32) (*(s32 *)((u8 *)temp_a0_7 + 4) | 0x18);
        }
        temp_a0_8 = (u8 *)(*(&D_0058C184 + var_s0));
        if (temp_a0_8 != NULL) {
            *(s32 *)((u8 *)temp_a0_8 + 4) = (s32) (*(s32 *)((u8 *)temp_a0_8 + 4) | 0x18);
        }
        return;
    }
    if (temp_v1 & 0x80) {
        temp_f1 = *(f32 *)((u8 *)temp_s1 + 0x30) + D_00470710;
        *(f32 *)((u8 *)temp_s1 + 0x30) = temp_f1;
        if (!(temp_f1 <= 60.0f)) {
            *(s32 *)((u8 *)temp_s1 + 0) = (s32) (*(s32 *)((u8 *)temp_s1 + 0) ^ 0x80);
            *(f32 *)((u8 *)temp_s1 + 0x30) = 0.0f;
            goto block_32;
        }
        func_00228430(0);
        temp_s2_2 = var_s4 * 4;
        func_0022B900(*(s32 *)((u8 *)(temp_s2_2 + *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE88)) + 0x1C)) + 0x150), *(&D_0058C184 + var_s0), *(f32 *)((u8 *)temp_s1 + 0x30));
        func_0022B900(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE88)) + 0x1C) + temp_s2_2), *(&D_0058C180 + var_s0), *(f32 *)((u8 *)temp_s1 + 0x30));
        temp_s0 = *(&D_0058C188 + var_s0);
        var_v1 = var_s4 + 0x9E;
        if (*func_0021C610() == 2) {
            var_v1 = var_s4 + 0xA2;
        }
        func_0022B900(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE88)) + 0x1C) + (var_v1 * 4)), temp_s0, 0.0f);
        func_00228410();
        return;
    }
block_32:
    if (*(s32 *)((u8 *)temp_s1 + 0) & 0x800) {
        *(f32 *)((u8 *)temp_s1 + 0x3C) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x3C) + D_00470710);
        func_00228430(0);
        func_0022B900(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE88)) + 0x1C) + ((var_s4 + 0x58) * 4)), *(&D_0058C184 + var_s0), *(f32 *)((u8 *)temp_s1 + 0x3C));
        func_00228410();
    }
    if (*(s32 *)((u8 *)temp_s1 + 0) & 0x1000) {
        temp_f1_2 = *(f32 *)((u8 *)temp_s1 + 0x24) + D_00470710;
        *(f32 *)((u8 *)temp_s1 + 0x24) = temp_f1_2;
        if (!(temp_f1_2 <= 10.0f)) {
            *(f32 *)((u8 *)temp_s1 + 0x24) = 0.0f;
            *(s32 *)((u8 *)temp_s1 + 0) = (s32) (*(s32 *)((u8 *)temp_s1 + 0) ^ 0x1000);
        }
        temp_v0_2 = var_s4 & 1;
        var_s6 = temp_v0_2 + 0x56;
        var_s5 = temp_v0_2 + 0xA0;
    } else {
        var_s6 = var_s4;
        var_s5 = var_s4 + 0x9E;
        if (*func_0021C610() == 2) {
            var_s5 = var_s4 + 0xA2;
        }
    }
    func_00229800(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE88)) + 0x1C) + (var_s6 * 4)), &spD0, -1, *(f32 *)((u8 *)temp_s1 + 0x24));
    func_00229800(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE88)) + 0x1C) + (var_s5 * 4)), &spB0, -1, *(f32 *)((u8 *)temp_s1 + 0x24));
    if (*(s32 *)((u8 *)temp_s2 + 8) < 0x2BC) {
        temp_v1_2 = *(s32 *)((u8 *)temp_s1 + 0);
        if (temp_v1_2 & 0x100) {
            *(f32 *)((u8 *)temp_s1 + 0x28) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x28) + D_00470710);
        } else {
            *(s32 *)((u8 *)temp_s1 + 0) = (s32) (temp_v1_2 | 0x100);
            *(f32 *)((u8 *)temp_s1 + 0x28) = 0.0f;
        }
        var_s4 += 0x52;
    }
    func_00228AC0(*(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0xE88)) + 0x1C) + (var_s4 * 4)), &sp90, -1, *(f32 *)((u8 *)temp_s1 + 0x28));
    temp_a2 = (u8 **)(&D_0058C180 + var_s0);
    temp_a1_2 = (u8 **)(&D_0058C188 + var_s0);
    temp_v1_3 = *temp_a2;
    *(f32 *)((u8 *)temp_v1_3 + 0x20) = spD0;
    *(f32 *)((u8 *)temp_v1_3 + 0x24) = spD4;
    *(f32 *)((u8 *)temp_v1_3 + 0x28) = spD8;
    *(f32 *)((u8 *)temp_v1_3 + 0x2C) = spDC;
    temp_a0_9 = *temp_a2;
    *(u8 *)((u8 *)temp_a0_9 + 0x1C) = spA0;
    *(u8 *)((u8 *)temp_a0_9 + 0x1D) = spA1;
    *(u8 *)((u8 *)temp_a0_9 + 0x1E) = spA2;
    *(u8 *)((u8 *)temp_a0_9 + 0x1F) = spA3;
    temp_v1_4 = *temp_a2;
    *(f32 *)((u8 *)temp_v1_4 + 0x50) = sp90;
    *(f32 *)((u8 *)temp_v1_4 + 0x54) = sp94;
    *(f32 *)((u8 *)temp_v1_4 + 0x58) = sp98;
    *(f32 *)((u8 *)temp_v1_4 + 0x5C) = sp9C;
    temp_v1_5 = *temp_a1_2;
    *(f32 *)((u8 *)temp_v1_5 + 0x20) = spB0;
    *(f32 *)((u8 *)temp_v1_5 + 0x24) = spB4;
    *(f32 *)((u8 *)temp_v1_5 + 0x28) = spB8;
    *(f32 *)((u8 *)temp_v1_5 + 0x2C) = spBC;
    temp_a0_10 = *temp_a2;
    if (temp_a0_10 != NULL) {
        *(s32 *)((u8 *)temp_a0_10 + 4) = (s32) (*(s32 *)((u8 *)temp_a0_10 + 4) | 0x18);
    }
    temp_a0_11 = *temp_a1_2;
    if (temp_a0_11 != NULL) {
        *(s32 *)((u8 *)temp_a0_11 + 4) = (s32) (*(s32 *)((u8 *)temp_a0_11 + 4) | 0x18);
    }
    temp_a0_12 = (u8 *)(*(&D_0058C184 + var_s0));
    if (temp_a0_12 != NULL) {
        *(s32 *)((u8 *)temp_a0_12 + 4) = (s32) (*(s32 *)((u8 *)temp_a0_12 + 4) | 0x18);
    }
}
