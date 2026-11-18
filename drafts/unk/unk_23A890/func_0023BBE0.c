/* Draft (not built): func_0023BBE0 at 0x0023BBE0, size 0xAB0, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 578 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x6A0, original 0xAB0
 * Original: asm/nonmatchings/unk/unk_23A890/func_0023BBE0.s */

// src/unk/unk_23A890.c func_0023BBE0 size diff=578/424
s32 func_00136870(s32, s32, void *, s32);
s32 func_00137440(s32, s32);
s32 func_001484A0(s32);
extern s32 D_00470714;
extern void amDraw_FlushPacket(void);
extern void func_00137560(void *, void *);
void func_0023BBE0(s32 arg0, u8 *arg1, u8 *arg2, f32 fparg0) {
    f32 spB0;
    f32 spB4;
    s32 spB8;
    s32 spBC;
    f32 spC0;
    f32 spC4;
    s32 spC8;
    s32 spCC;
    f32 spD0;
    f32 spD4;
    s32 spD8;
    s32 spDC;
    f32 spE0;
    f32 spE4;
    s32 spE8;
    s32 spEC;
    f32 spF0;
    f32 spF4;
    s32 spF8;
    s32 spFC;
    f32 sp100;
    f32 sp104;
    s32 sp108;
    s32 sp10C;
    f32 sp110;
    f32 sp114;
    s32 sp118;
    s32 sp11C;
    f32 sp120;
    f32 sp124;
    s32 sp128;
    s32 sp12C;
    f32 sp138;
    f32 sp13C;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f10;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f7;
    f32 temp_f7_2;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f8_3;
    f32 temp_f9;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f21;
    f32 var_f5;
    f32 var_s1;
    f32 var_v0;

    var_f21 = *(f32 *)((u8 *)arg1 + 8) / 1000.0f;
    if (var_f21 <= 0.0f) {
        goto block_41;
    }
    if (var_f21 <= 1.0f) {
        goto block_3;
    }
    var_f21 = 1.0f;
block_3:
    sp13C = D_00470690;
    sp138 = D_00470694;
    if (D_00470714 != 1) {
        goto block_5;
    }
    func_001484A0(3);
block_5:
    if (arg0 == 4) {
        goto block_30;
    }
    if (arg0 == 3) {
        goto block_25;
    }
    if (arg0 == 2) {
        goto block_21;
    }
    if (arg0 == 1) {
        goto block_16;
    }
    if (arg0 == 0) {
        goto block_11;
    }
    return;
block_11:
    if (*(s32 *)((u8 *)arg1 + 0x10) == 0) {
        goto block_13;
    }
    var_f5 = 14.0f;
    goto block_14;
block_13:
    var_f5 = 21.0f;
block_14:
    sp108 = 0;
    sp10C = 0x3F800000;
    sp100 = *(f32 *)((u8 *)arg1 + 0) + sp13C;
    temp_f1 = 76.0f + sp138;
    temp_f2 = (76.0f - var_f5) + sp138;
    sp104 = temp_f1;
    spF8 = 0;
    spFC = 0x3F800000;
    spF4 = temp_f1;
    spF0 = *(f32 *)((u8 *)arg1 + 4) + sp13C;
    sp128 = 0;
    sp12C = 0x3F800000;
    sp124 = temp_f2;
    sp120 = sp13C + (*(f32 *)((u8 *)arg1 + 0) + *(f32 *)((u8 *)arg1 + 0xC));
    sp11C = 0x3F800000;
    spE8 = 0x3F800000;
    spEC = 0x3F800000;
    spC0 = 9.0f;
    spB0 = 9.0f;
    spC8 = 0x3F800000;
    spCC = 0x3F800000;
    spD8 = 0x3F800000;
    sp114 = temp_f2;
    spDC = 0x3F800000;
    sp110 = sp13C + (*(f32 *)((u8 *)arg1 + 4) + *(f32 *)((u8 *)arg1 + 0xC));
    spB8 = 0x3F800000;
    spD4 = var_f5;
    spBC = 0x3F800000;
    spB4 = var_f5;
    sp118 = 0;
    spE0 = 0.0f;
    spE4 = 0.0f;
    spC4 = 0.0f;
    spD0 = 0.0f;
    func_00136870(2, 0x60000934, arg2, 6);
    func_00137560(&sp100, &spD0);
    func_00137560(&spF0, &spB0);
    func_00137560(&sp110, &spC0);
    func_00137560(&sp120, &spE0);
    amDraw_FlushPacket();
    return;
block_16:
    if (*(s32 *)((u8 *)arg1 + 0x10) == 0) {
        goto block_18;
    }
    var_f0 = 13.0f;
    goto block_19;
block_18:
    var_f0 = 20.0f;
block_19:
    temp_f8 = var_f0 * var_f21;
    sp108 = 0;
    sp10C = 0x3F800000;
    temp_f4 = 75.5f + sp138;
    sp100 = *(f32 *)((u8 *)arg1 + 0) + sp13C;
    sp104 = temp_f4;
    temp_f7 = sp138 + (75.5f - temp_f8);
    spF8 = 0;
    spF4 = temp_f4;
    spFC = 0x3F800000;
    temp_f0 = *(f32 *)((u8 *)arg1 + 4) + sp13C;
    spF0 = temp_f0;
    sp128 = 0;
    sp12C = 0x3F800000;
    temp_f2_2 = sp13C + (*(f32 *)((u8 *)arg1 + 0) + (*(f32 *)((u8 *)arg1 + 0xC) * var_f21));
    sp120 = temp_f2_2;
    sp124 = temp_f7;
    sp11C = 0x3F800000;
    spE8 = 0x3F800000;
    spEC = 0x3F800000;
    spC0 = 9.0f;
    spF0 = temp_f0 - 1.0f;
    spB0 = 9.0f;
    spC8 = 0x3F800000;
    spCC = 0x3F800000;
    spD8 = 0x3F800000;
    spDC = 0x3F800000;
    temp_f0_2 = sp13C + (*(f32 *)((u8 *)arg1 + 4) + (*(f32 *)((u8 *)arg1 + 0xC) * var_f21));
    spB8 = 0x3F800000;
    spBC = 0x3F800000;
    sp118 = 0;
    spE0 = 0.0f;
    spE4 = 0.0f;
    sp110 = temp_f0_2;
    spC4 = 0.0f;
    sp114 = temp_f7;
    spD0 = 0.0f;
    sp100 += 1.0f;
    spD4 = temp_f8;
    spB4 = temp_f8;
    sp120 = temp_f2_2 + 1.0f;
    sp110 = temp_f0_2 - 1.0f;
    func_00136870(2, 0x60000934, arg2, 8);
    func_00137560(&sp100, &spD0);
    func_00137560(&spF0, &spB0);
    func_00137560(&sp110, &spC0);
    func_00137560(&sp120, &spE0);
    amDraw_FlushPacket();
    return;
block_21:
    if (*(s32 *)((u8 *)arg1 + 0x10) == 0) {
        goto block_23;
    }
    var_f0_2 = 13.0f;
    goto block_24;
block_23:
    var_f0_2 = 20.0f;
block_24:
    temp_f8_2 = var_f0_2 * var_f21;
    sp108 = 0;
    sp10C = 0x3F800000;
    temp_f4_2 = 75.5f + sp138;
    sp100 = *(f32 *)((u8 *)arg1 + 0) + sp13C;
    sp104 = temp_f4_2;
    temp_f7_2 = sp138 + (75.5f - temp_f8_2);
    spF8 = 0;
    spF4 = temp_f4_2;
    spFC = 0x3F800000;
    temp_f0_3 = *(f32 *)((u8 *)arg1 + 4) + sp13C;
    spF0 = temp_f0_3;
    sp128 = 0;
    sp12C = 0x3F800000;
    temp_f2_3 = sp13C + (*(f32 *)((u8 *)arg1 + 0) + (*(f32 *)((u8 *)arg1 + 0xC) * var_f21));
    sp120 = temp_f2_3;
    sp124 = temp_f7_2;
    sp11C = 0x3F800000;
    spE8 = 0x3F800000;
    spEC = 0x3F800000;
    spC0 = 9.0f;
    spF0 = temp_f0_3 - 1.0f;
    spB0 = 9.0f;
    spC8 = 0x3F800000;
    spCC = 0x3F800000;
    spD8 = 0x3F800000;
    spDC = 0x3F800000;
    temp_f0_4 = sp13C + (*(f32 *)((u8 *)arg1 + 4) + (*(f32 *)((u8 *)arg1 + 0xC) * var_f21));
    spB8 = 0x3F800000;
    spBC = 0x3F800000;
    sp118 = 0;
    spE0 = 0.0f;
    spE4 = 0.0f;
    sp110 = temp_f0_4;
    spC4 = 0.0f;
    sp114 = temp_f7_2;
    spD0 = 0.0f;
    sp100 += 1.0f;
    spD4 = temp_f8_2;
    spB4 = temp_f8_2;
    sp120 = temp_f2_3 + 1.0f;
    sp110 = temp_f0_4 - 1.0f;
    func_00136870(2, 0x60008934, arg2, 6);
    func_00137440(0xFF, 0xFF);
    func_00137560(&sp100, &spD0);
    func_00137560(&spF0, &spB0);
    func_00137560(&sp110, &spC0);
    func_00137560(&sp120, &spE0);
    amDraw_FlushPacket();
    return;
block_25:
    if (*(s32 *)((u8 *)arg1 + 0x10) == 0) {
        goto block_27;
    }
    var_f0_3 = 13.0f;
    goto block_28;
block_27:
    var_f0_3 = 20.0f;
block_28:
    sp108 = 0;
    sp10C = 0x3F800000;
    sp100 = *(f32 *)((u8 *)arg1 + 0) + sp13C;
    temp_f3 = 75.5f + sp138;
    temp_f10 = sp138 + (75.5f - (var_f0_3 * var_f21));
    sp104 = temp_f3;
    spF8 = 0;
    spFC = 0x3F800000;
    spF0 = *(f32 *)((u8 *)arg1 + 4) + sp13C;
    spF4 = temp_f3;
    sp128 = 0;
    sp12C = 0x3F800000;
    temp_f5 = sp13C + (*(f32 *)((u8 *)arg1 + 0) + (*(f32 *)((u8 *)arg1 + 0xC) * var_f21));
    sp120 = temp_f5;
    sp124 = temp_f10;
    sp118 = 0;
    sp11C = 0x3F800000;
    spF0 -= 1.0f;
    sp110 = sp13C + (*(f32 *)((u8 *)arg1 + 4) + (*(f32 *)((u8 *)arg1 + 0xC) * var_f21));
    sp100 += 1.0f;
    temp_f20 = 64.0f * var_f21;
    sp120 = temp_f5 + 1.0f;
    temp_f2_4 = 64.0f * ((f32) (M2C_BITWISE(s32, var_f0_3) % 120) / 120.0f);
    temp_f21 = 64.0f - temp_f2_4;
    sp114 = temp_f10;
    temp_f1_2 = 8.0f + temp_f21;
    sp110 -= 1.0f;
    spE0 = temp_f1_2;
    spE4 = temp_f2_4;
    spE8 = 0x3F800000;
    temp_f0_5 = temp_f20 + temp_f2_4;
    spEC = 0x3F800000;
    spC0 = temp_f21;
    spC4 = temp_f2_4;
    spC8 = 0x3F800000;
    spCC = 0x3F800000;
    spD0 = temp_f1_2;
    spD4 = temp_f0_5;
    spD8 = 0x3F800000;
    spDC = 0x3F800000;
    spB0 = temp_f21;
    spB4 = temp_f0_5;
    spB8 = 0x3F800000;
    spBC = 0x3F800000;
    *(s32 *)((u8 *)arg2 + 0) = 0x3F800000;
    *(s32 *)((u8 *)arg2 + 4) = 0x3F4CCCCD;
    *(f32 *)((u8 *)arg2 + 8) = 0.0f;
    *(s32 *)((u8 *)arg2 + 0xC) = 0x3F800000;
    func_00136870(2, 0x60000934, arg2, 0x21);
    func_00137560(&sp100, &spD0);
    func_00137560(&spF0, &spB0);
    func_00137560(&sp110, &spC0);
    func_00137560(&sp120, &spE0);
    amDraw_FlushPacket();
    spE0 = temp_f21;
    spE4 = 0.0f;
    spE8 = 0x3F800000;
    spEC = 0x3F800000;
    spC0 = 8.0f + spE0;
    spC4 = 0.0f;
    spC8 = 0x3F800000;
    spCC = 0x3F800000;
    spD0 = temp_f21;
    spD4 = temp_f20;
    spD8 = 0x3F800000;
    spDC = 0x3F800000;
    spB0 = 8.0f + spD0;
    spB4 = temp_f20;
    spB8 = 0x3F800000;
    spBC = 0x3F800000;
    *(s32 *)((u8 *)arg2 + 0) = 0x3F800000;
    *(s32 *)((u8 *)arg2 + 4) = 0x3F800000;
    *(f32 *)((u8 *)arg2 + 8) = 1.0f;
    *(s32 *)((u8 *)arg2 + 0xC) = 0x3EC7AE14;
    func_00136870(2, 0x60000934, arg2, 0x21);
    func_00137560(&sp100, &spD0);
    func_00137560(&spF0, &spB0);
    func_00137560(&sp110, &spC0);
    func_00137560(&sp120, &spE0);
    amDraw_FlushPacket();
    return;
block_30:
    if (*(s32 *)((u8 *)arg1 + 0x10) == 0) {
        goto block_32;
    }
    var_f0_4 = 13.0f;
    goto block_33;
block_32:
    var_f0_4 = 20.0f;
block_33:
    temp_f9 = var_f0_4 * var_f21;
    sp108 = 0;
    temp_f0_6 = *(f32 *)((u8 *)arg1 + 0) + sp13C;
    sp10C = 0x3F800000;
    temp_f5_2 = 75.5f + sp138;
    sp100 = temp_f0_6;
    sp104 = temp_f5_2;
    temp_f8_3 = sp138 + (75.5f - temp_f9);
    spF8 = 0;
    spFC = 0x3F800000;
    spF0 = *(f32 *)((u8 *)arg1 + 4) + sp13C;
    spF4 = temp_f5_2;
    sp128 = 0;
    sp12C = 0x3F800000;
    temp_f3_2 = sp13C + (*(f32 *)((u8 *)arg1 + 0) + (*(f32 *)((u8 *)arg1 + 0xC) * var_f21));
    sp120 = temp_f3_2;
    sp124 = temp_f8_3;
    sp118 = 0;
    sp11C = 0x3F800000;
    spE0 = 0.0f;
    spE4 = 0.0f;
    spE8 = 0x3F800000;
    spEC = 0x3F800000;
    spC0 = 9.0f;
    spF0 -= 1.0f;
    spB0 = 9.0f;
    spC4 = 0.0f;
    spC8 = 0x3F800000;
    spCC = 0x3F800000;
    spD0 = 0.0f;
    temp_f0_7 = sp13C + (*(f32 *)((u8 *)arg1 + 4) + (*(f32 *)((u8 *)arg1 + 0xC) * var_f21));
    spD8 = 0x3F800000;
    spDC = 0x3F800000;
    spB8 = 0x3F800000;
    spBC = 0x3F800000;
    sp110 = temp_f0_7;
    sp120 = temp_f3_2 + 1.0f;
    sp114 = temp_f8_3;
    sp100 = temp_f0_6 + 1.0f;
    spD4 = temp_f9;
    spB4 = temp_f9;
    sp110 = temp_f0_7 - 1.0f;
    var_s1 = 255.0f * *(f32 *)((u8 *)arg2 + 8);
    var_v0 = 3.57e-43f;
    if (M2C_BITWISE(s32, var_s1) >= 0xFF) {
        goto block_35;
    }
    var_v0 = var_s1;
block_35:
    if (M2C_BITWISE(s32, var_v0) >= 0) {
        goto block_37;
    }
    var_s1 = 0.0f;
    goto block_40;
block_37:
    if (M2C_BITWISE(s32, var_s1) >= 0xFF) {
        goto block_39;
    }
    goto block_40;
block_39:
    var_s1 = 3.57e-43f;
block_40:
    func_00136870(2, 0x60008934, arg2, 8);
    func_00137440(0xFFFFFF, (0xFF - M2C_BITWISE(s32, var_s1)) & 0xFF);
    func_00137560(&sp100, &spD0);
    func_00137560(&spF0, &spB0);
    func_00137560(&sp110, &spC0);
    func_00137560(&sp120, &spE0);
    amDraw_FlushPacket();
block_41:
    return;
}
