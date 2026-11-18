/* Draft (not built): func_00256360 at 0x00256360, size 0x678, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); entifier 'sp' mwccps2.exe Compiler: 2661: var_a2 = (var_s2 * 0x10) + sp; @ 2660: var_a3 = (s128) ((var_s2 * 0x10) + sp);
 * Original: asm/nonmatchings/battle/skill_cmd/func_00256360.s */

// src/battle/skill_cmd.c func_00256360 cerr diff=-1/0
s32 func_00136870(s32, s32, void *, s32);
s32 func_00137440(s32, s32);
extern s32 D_004529D0;
extern s32 D_004529F0;
extern s32 D_00452A50;
extern s32 D_00452A68;
extern void amDraw_FlushPacket(void);
extern void func_00137560(void *, void *);
void func_00256360(s32 arg1, f32 fparg0, f32 fparg1, f32 fparg2) {
    f32 sp60;
    f32 sp64;
    f32 sp70;
    f32 sp74;
    f32 sp80;
    f32 sp84;
    f32 sp90;
    f32 sp94;
    f32 spA0;
    f32 spA4;
    f32 spB0;
    f32 spC0;
    f32 spD0;
    f32 spD4;
    s32 spE0;
    s32 sp100;
    s32 sp160;
    s32 sp180;
    s32 *var_a2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f22;
    f32 var_a0;
    f32 var_a0_2;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    f32 var_f0_4;
    f32 var_f0_5;
    f32 var_f0_6;
    f32 var_f0_7;
    f32 var_f0_8;
    s128 var_a3;
    s32 temp_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;
    s32 var_v1;
    u8 *temp_a0;
    u8 *temp_a1;

    var_s3 = 0x40000934;
    temp_s0 = arg1 & 1;
    var_a2 = &D_00452A68;
    var_s1 = 0;
    var_s2 = 0;
    *(s128 *)((u8 *)(&sp160) + 0) = (s128) *(s128 *)((u8 *)(&D_004529D0) + 0);
    *(s128 *)((u8 *)(&sp160) + 0x10) = (s128) *(s128 *)((u8 *)(&D_004529D0) + 0x10);
    *(s128 *)((u8 *)(&sp100) + 0) = (s128) *(s128 *)((u8 *)(&D_004529F0) + 0);
    *(s128 *)((u8 *)(&sp100) + 0x10) = (s128) *(s128 *)((u8 *)(&D_004529F0) + 0x10);
    *(s128 *)((u8 *)(&sp100) + 0x20) = (s128) *(s128 *)((u8 *)(&D_004529F0) + 0x20);
    *(s128 *)((u8 *)(&sp100) + 0x30) = (s128) *(s128 *)((u8 *)(&D_004529F0) + 0x30);
    *(s128 *)((u8 *)(&sp100) + 0x40) = (s128) *(s128 *)((u8 *)(&D_004529F0) + 0x40);
    *(s128 *)((u8 *)(&sp100) + 0x50) = (s128) *(s128 *)((u8 *)(&D_004529F0) + 0x50);
    var_a3 = *(s128 *)((u8 *)(&D_00452A50) + 0);
    *(s128 *)((u8 *)(&spE0) + 0) = var_a3;
    *(s64 *)((u8 *)(&spE0) + 0x10) = (s64) *(s64 *)((u8 *)(&D_00452A50) + 0x10);
    *(s64 *)((u8 *)(&sp180) + 0) = (s64) *(s64 *)((u8 *)(&D_00452A68) + 0);
    *(f32 *)((u8 *)(&sp180) + 8) = (f32) *(f32 *)((u8 *)(&D_00452A68) + 8);
loop_3:
    if (var_s2 < 4) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        var_a3 = (s128) ((var_s2 * 0x10) + sp);
        var_a2 = (var_s2 * 0x10) + sp;
        temp_a1 = (var_s2 * 0x10) + sp;
        *(f32 *)((u8 *)var_a3 + 0x60) = 1.0f;
        temp_a0 = (var_s2 * 0x10) + sp;
        *(f32 *)((u8 *)var_a2 + 0x64) = 1.0f;
        var_s2 += 1;
        *(f32 *)((u8 *)temp_a1 + 0x68) = 1.0f;
        *(f32 *)((u8 *)temp_a0 + 0x6C) = 1.0f;
        goto loop_3;
    }
    D_00470238 = 0;
    amModel_SetCurrent(*(s32 *)((u8 *)gBtlSys + 0xE60), 0x04000000, var_a2, (u8 *) var_a3);
    temp_f21 = 184.0f * fparg1;
    temp_f20 = 24.0f * fparg1;
    if (!(fparg2 <= 0.0f)) {
        var_s3 = 0x40000934 | 0x8000;
        temp_f1 = (255.0f * fparg2) / 10.0f;
        if (!(temp_f1 >= 2.1474836e9f)) {
            var_a0 = temp_f1;
        } else {
            var_a0 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f1 - 2.1474836e9f)) | 0x80000000));
        }
        var_v1 = 0;
        if ((M2C_BITWISE(s32, var_a0) & 0xFF) < 0) {

        } else {
            temp_f1_2 = (255.0f * fparg2) / 10.0f;
            if (!(temp_f1_2 >= 2.1474836e9f)) {
                var_a0_2 = temp_f1_2;
            } else {
                var_a0_2 = M2C_BITWISE(f32, (M2C_BITWISE(s32, (temp_f1_2 - 2.1474836e9f)) | 0x80000000));
            }
            var_v1 = M2C_BITWISE(s32, var_a0_2) & 0xFF;
        }
        var_s1 = var_v1 & 0xFF;
    }
    temp_f22 = 165.0f * fparg0;
    if (temp_s0 & 1) {
        var_f0 = (spA0 - temp_f22) - 21.0f;
    } else {
        var_f0 = 21.0f + spA0;
    }
    spA0 = var_f0;
    spA4 = *(f32 *)((u8 *)((temp_s0 * 0x10) + sp) + 0x164) - 22.0f;
    if (temp_s0 & 1) {
        var_f0_2 = 184.0f - temp_f22;
    } else {
        var_f0_2 = 1.0f;
    }
    sp64 = 23.0f;
    sp60 = var_f0_2;
    if (temp_s0 & 1) {
        var_f0_3 = spB0 - temp_f22;
    } else {
        var_f0_3 = spB0;
    }
    spB0 = var_f0_3;
    if (temp_s0 & 1) {
        var_f0_4 = 184.0f - temp_f22;
    } else {
        var_f0_4 = 1.0f;
    }
    sp74 = 1.0f;
    sp70 = var_f0_4;
    if (temp_s0 & 1) {
        var_f0_5 = spC0;
    } else {
        var_f0_5 = spC0 + temp_f22;
    }
    spC0 = var_f0_5;
    if (temp_s0 & 1) {
        var_f0_6 = 184.0f;
    } else {
        var_f0_6 = 1.0f + temp_f22;
    }
    sp84 = 1.0f;
    sp80 = var_f0_6;
    if (temp_s0 & 1) {
        var_f0_7 = spD0 - 21.0f;
    } else {
        var_f0_7 = 21.0f + (spD0 + temp_f22);
    }
    spD0 = var_f0_7;
    spD4 = *(f32 *)((u8 *)((temp_s0 * 0x10) + sp) + 0x164) - 22.0f;
    if (temp_s0 & 1) {
        var_f0_8 = 184.0f;
    } else {
        var_f0_8 = 1.0f + temp_f22;
    }
    sp90 = var_f0_8;
    var_s2_2 = 0;
    sp94 = 23.0f;
loop_59:
    if (var_s2_2 < 3) {
        func_00136870(2, var_s3, (var_s2_2 * 0x10) + ((temp_s0 * 0x30) + sp) + 0x100, *(s32 *)((u8 *)((var_s2_2 * 4) + ((temp_s0 * 0xC) + sp)) + 0xE0));
        if (var_s1 != 0) {
            func_00137440(0xFFFFFF, var_s1 & 0xFF);
        }
        if (var_s2_2 == 1) {
            temp_f0 = temp_f22 + temp_f21;
            if (temp_s0 & 1) {
                sp80 = temp_f21;
                sp90 = temp_f21;
                sp60 = temp_f0;
                sp70 = temp_f0;
            } else {
                temp_f0_2 = temp_f22 + temp_f21;
                sp60 = temp_f21;
                sp70 = temp_f21;
                sp80 = temp_f0_2;
                sp90 = temp_f0_2;
            }
            sp60 /= 2.0f;
            sp70 /= 2.0f;
            sp80 /= 2.0f;
            sp90 /= 2.0f;
        } else if (var_s2_2 == 2) {
            temp_f0_3 = temp_f22 + temp_f21;
            if (temp_s0 & 1) {
                sp60 = temp_f21;
                sp70 = temp_f21;
                sp80 = temp_f0_3;
                sp90 = temp_f0_3;
            } else {
                temp_f0_4 = temp_f22 + temp_f21;
                sp80 = temp_f21;
                sp90 = temp_f21;
                sp60 = temp_f0_4;
                sp70 = temp_f0_4;
            }
            sp64 = temp_f20;
            temp_f1_3 = 24.0f + temp_f20;
            sp94 = temp_f20;
            sp74 = temp_f1_3;
            sp84 = temp_f1_3;
            sp60 /= 2.0f;
            sp70 /= 2.0f;
            sp80 /= 2.0f;
            sp90 /= 2.0f;
            sp64 /= 2.0f;
            sp74 /= 2.0f;
            sp84 = temp_f1_3 / 2.0f;
            sp94 /= 2.0f;
        }
        func_00137560(&spA0, &sp60);
        func_00137560(&spB0, &sp70);
        func_00137560(&spC0, &sp80);
        func_00137560(&spD0, &sp90);
        amDraw_FlushPacket();
        var_s2_2 += 1;
        goto loop_59;
    }
}
