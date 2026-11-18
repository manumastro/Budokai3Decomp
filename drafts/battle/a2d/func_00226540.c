/* Draft (not built): func_00226540 at 0x00226540, size 0x468, segment battle/a2d (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); undefined identifier 'saved_reg_s1' @ 492: var_s1 = saved_reg_s1;
 * Original: asm/nonmatchings/battle/a2d/func_00226540.s */

// src/battle/a2d.c func_00226540 cerr diff=-1/0
s32 amMath_SinCosI(s64, f32 *, f32 *);
s32 func_00136870(s32, s32, void *, s32);
s32 func_00136E80(s32, void *, s32, s32);
s32 func_00137440(s32, u8);
s32 func_001484A0(s32);
extern s32 D_004703DC;
extern void amDraw_FlushPacket(void);
extern void func_00137C10(void *, void *);
void func_00226540(u8 *arg0) {
    f32 sp60;
    f32 sp64;
    f32 sp68;
    s32 sp6C;
    f32 sp70;
    f32 sp74;
    f32 sp78;
    s32 sp7C;
    f32 sp80;
    f32 sp84;
    f32 sp88;
    s32 sp8C;
    f32 sp90;
    f32 sp94;
    f32 sp98;
    s32 sp9C;
    f32 spA8;
    f32 spAC;
    s32 var_s1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f6;
    f32 temp_f6_2;
    s32 temp_s4;
    s32 temp_v1;
    s32 var_s2;
    s32 var_s3;

    var_s1 = saved_reg_s1;
    temp_v1 = *(s32 *)((u8 *)arg0 + 8);
    if (temp_v1 != 0) {
        var_s3 = 0x100 | 0x800;
        switch (temp_v1) {                          /* irregular */
        case 1:
            var_s1 = 0x44;
            break;
        case 2:
            var_s1 = 0x48;
            break;
        case 3:
            var_s1 = 0x42;
            break;
        }
    } else {
        var_s3 = 0x100 | 0x1000;
        var_s1 = 0;
    }
    var_s2 = 1;
    if ((s32) *(u8 *)((u8 *)arg0 + 0x1F) > 0) {
        var_s3 |= 0x8000;
    } else {
        var_s2 = 0;
    }
    if (D_00470714 != 0) {
        func_001484A0((*(s32 *)((u8 *)arg0 + 4) & 6) | (D_004703DC & 1));
    }
    temp_s4 = (*(u8 *)((u8 *)arg0 + 0x1E) << 0x10) | (*(u8 *)((u8 *)arg0 + 0x1C) | (*(u8 *)((u8 *)arg0 + 0x1D) << 8));
    if (*(f32 *)((u8 *)arg0 + 0) != 0.0f) {
        func_00136870(1, var_s3, arg0 + 0x50, -1);
        if (var_s2 != 0) {
            func_00137440(temp_s4, *(u8 *)((u8 *)arg0 + 0x1F));
        }
        amMath_SinCosI((s64) (M2C_BITWISE(s64, ((32768.0f * *(f32 *)((u8 *)arg0 + 0)) / 180.0f)) << 0x30) >> 0x30, &spAC, &spA8);
        temp_f0 = *(f32 *)((u8 *)arg0 + 0x34);
        temp_f2 = *(f32 *)((u8 *)arg0 + 0x30);
        temp_f6 = temp_f0 * spAC;
        temp_f5 = temp_f0 * spA8;
        sp80 = (*(f32 *)((u8 *)arg0 + 0x20) + (temp_f2 * spA8)) - temp_f6;
        sp84 = *(f32 *)((u8 *)arg0 + 0x24) + (temp_f2 * spAC) + temp_f5;
        sp88 = *(f32 *)((u8 *)arg0 + 0x28);
        sp8C = 0x3F800000;
        temp_f2_2 = *(f32 *)((u8 *)arg0 + 0x38);
        sp90 = (*(f32 *)((u8 *)arg0 + 0x20) + (temp_f2_2 * spA8)) - temp_f6;
        sp94 = *(f32 *)((u8 *)arg0 + 0x24) + (temp_f2_2 * spAC) + temp_f5;
        sp98 = *(f32 *)((u8 *)arg0 + 0x28);
        sp9C = 0x3F800000;
        if (*(s32 *)((u8 *)arg0 + 4) & 8) {
            sp80 += D_00470718;
            sp90 += D_00470718;
        }
        if (*(s32 *)((u8 *)arg0 + 4) & 0x10) {
            sp84 += D_0047071C;
            sp94 += D_0047071C;
        }
        func_00137C10(&sp80, &sp90);
        temp_f0_2 = *(f32 *)((u8 *)arg0 + 0x3C);
        temp_f2_3 = *(f32 *)((u8 *)arg0 + 0x30);
        temp_f6_2 = temp_f0_2 * spAC;
        temp_f5_2 = temp_f0_2 * spA8;
        sp80 = (*(f32 *)((u8 *)arg0 + 0x20) + (temp_f2_3 * spA8)) - temp_f6_2;
        sp84 = *(f32 *)((u8 *)arg0 + 0x24) + (temp_f2_3 * spAC) + temp_f5_2;
        temp_f2_4 = *(f32 *)((u8 *)arg0 + 0x38);
        sp90 = (*(f32 *)((u8 *)arg0 + 0x20) + (temp_f2_4 * spA8)) - temp_f6_2;
        sp94 = *(f32 *)((u8 *)arg0 + 0x24) + (temp_f2_4 * spAC) + temp_f5_2;
        if (*(s32 *)((u8 *)arg0 + 4) & 8) {
            sp80 += D_00470718;
            sp90 += D_00470718;
        }
        if (*(s32 *)((u8 *)arg0 + 4) & 0x10) {
            sp84 += D_0047071C;
            sp94 += D_0047071C;
        }
        func_00137C10(&sp80, &sp90);
    } else {
        func_00136E80(var_s3, arg0 + 0x50, -1, var_s1);
        if (var_s2 != 0) {
            func_00137440(temp_s4, *(u8 *)((u8 *)arg0 + 0x1F));
        }
        sp60 = *(f32 *)((u8 *)arg0 + 0x20) + *(f32 *)((u8 *)arg0 + 0x30);
        sp64 = *(f32 *)((u8 *)arg0 + 0x24) + *(f32 *)((u8 *)arg0 + 0x34);
        sp68 = *(f32 *)((u8 *)arg0 + 0x28);
        sp6C = 0x3F800000;
        sp70 = *(f32 *)((u8 *)arg0 + 0x20) + *(f32 *)((u8 *)arg0 + 0x38);
        sp74 = *(f32 *)((u8 *)arg0 + 0x24) + *(f32 *)((u8 *)arg0 + 0x3C);
        sp78 = *(f32 *)((u8 *)arg0 + 0x28);
        sp7C = 0x3F800000;
        if (*(s32 *)((u8 *)arg0 + 4) & 8) {
            sp60 += D_00470718;
            sp70 += D_00470718;
        }
        if (*(s32 *)((u8 *)arg0 + 4) & 0x10) {
            sp64 += D_0047071C;
            sp74 += D_0047071C;
        }
        func_00137C10(&sp60, &sp70);
    }
    amDraw_FlushPacket();
}
