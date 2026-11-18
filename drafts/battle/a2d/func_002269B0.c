/* Draft (not built): func_002269B0 at 0x002269B0, size 0x660, segment battle/a2d (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); undefined identifier 'saved_reg_s0' mwccps2.exe Compiler: 583: spC4 = sp104; @ 514: var_s0 = saved_reg_s0;
 * Original: asm/nonmatchings/battle/a2d/func_002269B0.s */

// src/battle/a2d.c func_002269B0 cerr diff=-1/0
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
s32 amMath_SinCosI(s64, f32 *, f32 *);
s32 func_00136870(s32, s32, void *, s16);
s32 func_00136E80(s32, void *, s16, s32);
s32 func_00137440(s32, u8);
s32 func_001484A0(s32);
extern s32 D_00470238;
extern s32 D_004703DC;
extern void amDraw_FlushPacket(void);
extern void func_00137560(void *, void *);
extern void amModel_SetCurrent();
void func_002269B0(u8 *arg0) {
    f32 sp80;
    f32 sp84;
    s32 sp88;
    f32 sp90;
    f32 sp94;
    s32 sp98;
    f32 spA0;
    f32 spA4;
    f32 spA8;
    s32 spAC;
    f32 spB0;
    f32 spB4;
    f32 spB8;
    s32 spBC;
    f32 spC0;
    f32 spC4;
    s32 spC8;
    f32 spD0;
    f32 spD4;
    s32 spD8;
    f32 spE0;
    f32 spE4;
    f32 spE8;
    s32 spEC;
    f32 spF0;
    f32 spF4;
    f32 spF8;
    s32 spFC;
    f32 sp100;
    f32 sp118;
    f32 sp11C;
    s32 var_s0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f7;
    f32 temp_f7_2;
    s16 temp_s1;
    s32 temp_a1;
    s32 temp_s5;
    s32 temp_v1;
    s32 var_s2;
    s32 var_s3;
    u8 *temp_a0;

    var_s0 = saved_reg_s0;
    *(f32 *)((u8 *)(&sp100) + 0) = *(f32 *)((u8 *)arg0 + 0x40);
    *(f32 *)((u8 *)(&sp100) + 4) = (f32) *(f32 *)((u8 *)arg0 + 0x44);
    *(f32 *)((u8 *)(&sp100) + 8) = (f32) *(f32 *)((u8 *)arg0 + 0x48);
    *(f32 *)((u8 *)(&sp100) + 0xC) = (f32) *(f32 *)((u8 *)arg0 + 0x4C);
    temp_a0 = *(u8 **)((u8 *)arg0 + 0x10);
    if (temp_a0 != NULL) {
        temp_s1 = *(s16 *)((u8 *)arg0 + 0x1A);
        temp_a1 = *(s32 *)((u8 *)arg0 + 0x14);
        D_00470704 = (s32)(temp_a0);
        D_0047070C = temp_a1;
        D_00470708 = (s32) temp_s1;
        amModel_SetCurrent(temp_a0, temp_a1);
        D_00470238 = (s32) temp_s1;
    } else {
        *(u8 **)((u8 *)arg0 + 0x10) = (u8 *) D_00470704;
        *(s16 *)((u8 *)arg0 + 0x1A) = (s16) D_00470708;
    }
    temp_v1 = *(s32 *)((u8 *)arg0 + 8);
    if (temp_v1 != 0) {
        var_s3 = 0x40000124 | 0x800;
        switch (temp_v1) {                          /* irregular */
        case 1:
            var_s0 = 0x44;
            break;
        case 2:
            var_s0 = 0x48;
            break;
        case 3:
            var_s0 = 0x42;
            break;
        }
    } else {
        var_s3 = 0x40000124 | 0x1000;
        var_s0 = 0;
    }
    var_s2 = 1;
    if ((s32) *(u8 *)((u8 *)arg0 + 0x1F) > 0) {
        var_s3 |= 0x8000;
    } else {
        var_s2 = 0;
    }
    if (*(s32 *)((u8 *)arg0 + 0xC) != 0) {
        if (*(f32 *)((u8 *)arg0 + 0x40) < *(f32 *)((u8 *)arg0 + 0x48)) {

        }
        if (*(f32 *)((u8 *)arg0 + 0x44) < *(f32 *)((u8 *)arg0 + 0x4C)) {

        }
    }
    if (D_00470714 != 0) {
        func_001484A0((*(s32 *)((u8 *)arg0 + 4) & 6) | (D_004703DC & 1));
    }
    temp_s5 = (*(u8 *)((u8 *)arg0 + 0x1E) << 0x10) | (*(u8 *)((u8 *)arg0 + 0x1C) | (*(u8 *)((u8 *)arg0 + 0x1D) << 8));
    if (*(f32 *)((u8 *)arg0 + 0) != 0.0f) {
        func_00136870(1, var_s3, arg0 + 0x50, *(s16 *)((u8 *)arg0 + 0x18));
        if (var_s2 != 0) {
            func_00137440(temp_s5, *(u8 *)((u8 *)arg0 + 0x1F));
        }
        amMath_SinCosI((s64) (M2C_BITWISE(s64, ((32768.0f * *(f32 *)((u8 *)arg0 + 0)) / 180.0f)) << 0x30) >> 0x30, &sp11C, &sp118);
        temp_f0 = *(f32 *)((u8 *)arg0 + 0x34);
        temp_f2 = *(f32 *)((u8 *)arg0 + 0x30);
        temp_f7 = temp_f0 * sp11C;
        temp_f6 = temp_f0 * sp118;
        spE0 = (*(f32 *)((u8 *)arg0 + 0x20) + (temp_f2 * sp118)) - temp_f7;
        spE4 = *(f32 *)((u8 *)arg0 + 0x24) + (temp_f2 * sp11C) + temp_f6;
        spE8 = *(f32 *)((u8 *)arg0 + 0x28);
        spEC = 0x3F800000;
        spC0 = sp100;
        spC4 = sp104;
        spC8 = 0x3F800000;
        temp_f2_2 = *(f32 *)((u8 *)arg0 + 0x38);
        spF0 = (*(f32 *)((u8 *)arg0 + 0x20) + (temp_f2_2 * sp118)) - temp_f7;
        spF4 = *(f32 *)((u8 *)arg0 + 0x24) + (temp_f2_2 * sp11C) + temp_f6;
        spF8 = *(f32 *)((u8 *)arg0 + 0x28);
        spFC = 0x3F800000;
        spD0 = sp108;
        spD4 = sp104;
        spD8 = 0x3F800000;
        if (*(s32 *)((u8 *)arg0 + 4) & 8) {
            spE0 += D_00470718;
            spF0 += D_00470718;
        }
        if (*(s32 *)((u8 *)arg0 + 4) & 0x10) {
            spE4 += D_0047071C;
            spF4 += D_0047071C;
        }
        func_00137560(&spE0, &spC0);
        func_00137560(&spF0, &spD0);
        temp_f0_2 = *(f32 *)((u8 *)arg0 + 0x3C);
        temp_f2_3 = *(f32 *)((u8 *)arg0 + 0x30);
        temp_f7_2 = temp_f0_2 * sp11C;
        temp_f6_2 = temp_f0_2 * sp118;
        spE0 = (*(f32 *)((u8 *)arg0 + 0x20) + (temp_f2_3 * sp118)) - temp_f7_2;
        spE4 = *(f32 *)((u8 *)arg0 + 0x24) + (temp_f2_3 * sp11C) + temp_f6_2;
        spC4 = sp10C;
        temp_f2_4 = *(f32 *)((u8 *)arg0 + 0x38);
        spF0 = (*(f32 *)((u8 *)arg0 + 0x20) + (temp_f2_4 * sp118)) - temp_f7_2;
        spF4 = *(f32 *)((u8 *)arg0 + 0x24) + (temp_f2_4 * sp11C) + temp_f6_2;
        spD4 = sp10C;
        if (*(s32 *)((u8 *)arg0 + 4) & 8) {
            spE0 += D_00470718;
            spF0 += D_00470718;
        }
        if (*(s32 *)((u8 *)arg0 + 4) & 0x10) {
            spE4 += D_0047071C;
            spF4 += D_0047071C;
        }
        func_00137560(&spE0, &spC0);
        func_00137560(&spF0, &spD0);
    } else {
        func_00136E80(var_s3, arg0 + 0x50, *(s16 *)((u8 *)arg0 + 0x18), var_s0);
        if (var_s2 != 0) {
            func_00137440(temp_s5, *(u8 *)((u8 *)arg0 + 0x1F));
        }
        spA0 = *(f32 *)((u8 *)arg0 + 0x20) + *(f32 *)((u8 *)arg0 + 0x30);
        spA4 = *(f32 *)((u8 *)arg0 + 0x24) + *(f32 *)((u8 *)arg0 + 0x34);
        spA8 = *(f32 *)((u8 *)arg0 + 0x28);
        spAC = 0x3F800000;
        sp80 = sp100;
        sp88 = 0x3F800000;
        sp84 = sp104;
        spB0 = *(f32 *)((u8 *)arg0 + 0x20) + *(f32 *)((u8 *)arg0 + 0x38);
        spB4 = *(f32 *)((u8 *)arg0 + 0x24) + *(f32 *)((u8 *)arg0 + 0x3C);
        spB8 = *(f32 *)((u8 *)arg0 + 0x28);
        spBC = 0x3F800000;
        sp90 = sp108;
        sp98 = 0x3F800000;
        sp94 = sp10C;
        if (*(s32 *)((u8 *)arg0 + 4) & 8) {
            spA0 += D_00470718;
            spB0 += D_00470718;
        }
        if (*(s32 *)((u8 *)arg0 + 4) & 0x10) {
            spA4 += D_0047071C;
            spB4 += D_0047071C;
        }
        func_00137560(&spA0, &sp80);
        func_00137560(&spB0, &sp90);
    }
    amDraw_FlushPacket();
}
