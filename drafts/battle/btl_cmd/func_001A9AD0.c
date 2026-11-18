/* Draft (not built): func_001A9AD0 at 0x001A9AD0, size 0x980, segment battle/btl_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); (temp_s7 + (*(s32 *)((u8 *)arg0 + 0x60) * 4)) = var_s2; @ 1497: *(temp_s6 + (*(s32 *)((u8 *)arg0 + 0x5C) * 4)) = var_s3;
 * Original: asm/nonmatchings/battle/btl_cmd/func_001A9AD0.s */

// src/battle/btl_cmd.c func_001A9AD0 cerr diff=-1/0
f32 func_00146F90(f32 *, void *);
extern s32 D_00492FCC;
extern s32 D_00492FDA;
extern s32 D_00492FDB;
extern s32 D_0049302A;
extern s32 D_0049302B;
extern s32 D_0049302C;
extern s32 D_0049302E;
extern void func_00146F30(void *);
extern char D_00492FCE[];
void func_001A9AD0(u8 *arg0) {
    f32 spA0;
    f32 spA4;
    s32 spA8;
    s32 spAC;
    s32 spB0;
    f32 spB4;
    s32 spB8;
    s32 spBC;
    s32 spC0;
    f32 spC4;
    s32 spC8;
    s32 spCC;
    f32 spD0;
    s32 spD4;
    s32 spD8;
    s32 spDC;
    f32 temp_f0;
    f32 temp_f0_10;
    f32 temp_f0_11;
    f32 temp_f0_12;
    f32 temp_f0_13;
    f32 temp_f0_14;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f0_9;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 var_a0;
    s16 var_a0_2;
    s16 var_a0_3;
    s16 var_s2;
    s16 var_s3;
    s16 var_s4;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_fp;
    s32 temp_s1;
    s32 temp_s6;
    s32 temp_s7;
    s32 temp_t0;
    u8 *temp_a0_4;
    u8 *temp_a0_5;
    u8 *temp_a0_6;
    u8 *temp_s0;

    temp_s6 = (s32)(arg0 + 0xE4);
    temp_s7 = (s32)(arg0 + 0x164);
    temp_s0 = arg0 + 0x64;
    var_s4 = 0;
    var_s3 = 0;
    var_s2 = 0;
    temp_t0 = *(s16 *)((u8 *)arg0 + 0x44) * 0xB8;
    temp_f0 = *(f32 *)((u8 *)arg0 + 0x30) - *(f32 *)((u8 *)arg0 + 0x38);
    temp_s1 = (*(&D_00492FCC + temp_t0) | *(&D_0049302C + temp_t0)) & 0xFFFF;
    spD0 = temp_f0;
    spD4 = 0;
    spC4 = temp_f0;
    spD8 = 0;
    spDC = 0x3F800000;
    spC0 = 0;
    temp_fp = (*(D_00492FCE + temp_t0) | *(&D_0049302E + temp_t0)) & 0xFFFF;
    spC8 = 0;
    spCC = 0x3F800000;
    spB0 = 0;
    spB4 = *(f32 *)((u8 *)arg0 + 0x40);
    spBC = 0x3F800000;
    spB8 = 0;
    func_00146F30(&spD0);
    func_00146F30(&spC0);
    func_00146F30(&spB0);
    if ((temp_fp & 0xFFFF & 0xF0) == (temp_s1 & 0xFFFF & 0xF0)) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s5) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    } else if (func_00146F90(&spD0, arg0) <= 0.3f) {
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s5) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a0) */);
    }
    temp_a0 = *(s16 *)((u8 *)arg0 + 0x44) * 0xB8;
    if ((*(&D_00492FDA + temp_a0) != 0) || (*(&D_00492FDB + temp_a0) != 0)) {
        spA0 = (f32) *(&D_0049302A + (*(s16 *)((u8 *)arg0 + 0x44) * 0xB8));
        spAC = 0x3F800000;
        spA8 = 0;
        spA4 = (f32) -*(&D_0049302B + (*(s16 *)((u8 *)arg0 + 0x44) * 0xB8));
        func_00146F30(&spA0);
        temp_f0_2 = func_00146F90(&spA0, arg0);
        if (temp_f0_2 < -0.28f) {
            var_s4 = 1;
        } else if (!(temp_f0_2 < 0.28f)) {
            var_s4 = -1;
        }
        temp_f0_3 = func_00146F90(&spA0, arg0 + 0x10);
        if (temp_f0_3 < -0.35f) {
            var_s3 = -1;
        } else if (!(temp_f0_3 < 0.35f)) {
            var_s3 = 1;
        }
        temp_f0_4 = func_00146F90(&spA0, arg0 + 0x20);
        if (temp_f0_4 < -0.35f) {
            var_s2 = -1;
        } else if (!(temp_f0_4 < 0.35f)) {
            var_s2 = 1;
        }
    }
    temp_a0_2 = temp_s1 & 0xFFFF;
    if (temp_a0_2 & 0x10) {
        spA4 = -1.0f;
        spA0 = 0.0f;
        spAC = 0x3F800000;
        spA8 = 0;
        temp_f0_5 = func_00146F90(&spA0, arg0);
        if (temp_f0_5 < -0.28f) {
            var_s4 = 1;
        } else if (!(temp_f0_5 < 0.28f)) {
            var_s4 = -1;
        }
        temp_f0_6 = func_00146F90(&spA0, arg0 + 0x10);
        if (temp_f0_6 < -0.35f) {
            var_s3 = 1;
        } else if (!(temp_f0_6 < 0.35f)) {
            var_s3 = -1;
        }
        temp_f0_7 = func_00146F90(&spA0, arg0 + 0x20);
        if (temp_f0_7 < -0.35f) {
            var_s2 = 1;
        } else if (!(temp_f0_7 < 0.35f)) {
            goto block_45;
        }
    } else if (temp_a0_2 & 0x40) {
        spA4 = 1.0f;
        spAC = 0x3F800000;
        spA0 = 0.0f;
        spA8 = 0;
        temp_f0_8 = func_00146F90(&spA0, arg0);
        if (temp_f0_8 < -0.28f) {
            var_s4 = 1;
        } else if (!(temp_f0_8 < 0.28f)) {
            var_s4 = -1;
        }
        temp_f0_9 = func_00146F90(&spA0, arg0 + 0x10);
        if (temp_f0_9 < -0.35f) {
            var_s3 = 1;
        } else if (!(temp_f0_9 < 0.35f)) {
            var_s3 = -1;
        }
        temp_f0_10 = func_00146F90(&spA0, arg0 + 0x20);
        if (temp_f0_10 < -0.35f) {
            var_s2 = 1;
        } else if (!(temp_f0_10 < 0.35f)) {
block_45:
            var_s2 = -1;
        }
    }
    temp_a0_3 = temp_s1 & 0xFFFF;
    if (temp_a0_3 & 0x80) {
        spA0 = -1.0f;
        spA4 = 0.0f;
        spAC = 0x3F800000;
        spA8 = 0;
        temp_f0_11 = func_00146F90(&spA0, arg0);
        if (temp_f0_11 < -0.28f) {
            var_s4 = 1;
        } else if (!(temp_f0_11 < 0.28f)) {
            var_s4 = -1;
        }
        temp_f0_12 = func_00146F90(&spA0, arg0 + 0x10);
        if (temp_f0_12 < -0.35f) {
            var_s3 = -1;
        } else if (!(temp_f0_12 < 0.35f)) {
            goto block_64;
        }
    } else if (temp_a0_3 & 0x20) {
        spA0 = 1.0f;
        spAC = 0x3F800000;
        spA4 = 0.0f;
        spA8 = 0;
        temp_f0_13 = func_00146F90(&spA0, arg0);
        if (temp_f0_13 < -0.28f) {
            var_s4 = 1;
        } else if (!(temp_f0_13 < 0.28f)) {
            var_s4 = -1;
        }
        temp_f0_14 = func_00146F90(&spA0, arg0 + 0x10);
        if (temp_f0_14 < -0.35f) {
            var_s3 = -1;
        } else if (!(temp_f0_14 < 0.35f)) {
block_64:
            var_s3 = 1;
        }
    }
    if (*(s32 *)((u8 *)arg0 + 0x410) == 0) {
        *(s32 *)((u8 *)arg0 + 0x41C) = 0;
    }
    *(s32 *)((u8 *)arg0 + 0x410) = (s32) (*(s32 *)((u8 *)arg0 + 0x410) + 1);
    *(s32 *)((u8 *)arg0 + 0x414) = (s32) (*(s32 *)((u8 *)arg0 + 0x414) + 1);
    temp_a1 = *(s32 *)((u8 *)arg0 + 0x58);
    temp_a0_4 = temp_s0 + (temp_a1 * 4);
    if (var_s4 != *(s16 *)((u8 *)temp_a0_4 + 0)) {
        *(s32 *)((u8 *)arg0 + 0x58) = (s32) ((temp_a1 + 1) & 0x1F);
        *(temp_s0 + (*(s32 *)((u8 *)arg0 + 0x58) * 4)) = var_s4;
        if (*(s32 *)((u8 *)arg0 + 0x50) > 0) {
            var_a0 = -1;
        } else {
            var_a0 = 1;
        }
        *(s16 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x58) * 4) + temp_s0) + 2) = var_a0;
    } else {
        temp_v1 = *(s16 *)((u8 *)temp_a0_4 + 2);
        if (temp_v1 < 0) {
            if (temp_v1 >= -0x7FFE) {
                *(s16 *)((u8 *)temp_a0_4 + 2) = (s16) (temp_v1 - 1);
            }
        } else if (temp_v1 < 0x7FFF) {
            *(s16 *)((u8 *)temp_a0_4 + 2) = (s16) (temp_v1 + 1);
        }
    }
    temp_a1_2 = *(s32 *)((u8 *)arg0 + 0x5C);
    temp_a0_5 = (u8 *)(temp_s6 + (temp_a1_2 * 4));
    if (var_s3 != *(s16 *)((u8 *)temp_a0_5 + 0)) {
        *(s32 *)((u8 *)arg0 + 0x5C) = (s32) ((temp_a1_2 + 1) & 0x1F);
        *(temp_s6 + (*(s32 *)((u8 *)arg0 + 0x5C) * 4)) = var_s3;
        if (*(s32 *)((u8 *)arg0 + 0x50) > 0) {
            var_a0_2 = -1;
        } else {
            var_a0_2 = 1;
        }
        *(s16 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x5C) * 4) + temp_s6) + 2) = var_a0_2;
    } else {
        temp_v1_2 = *(s16 *)((u8 *)temp_a0_5 + 2);
        if (temp_v1_2 < 0) {
            if (temp_v1_2 >= -0x7FFE) {
                *(s16 *)((u8 *)temp_a0_5 + 2) = (s16) (temp_v1_2 - 1);
            }
        } else if (temp_v1_2 < 0x7FFF) {
            *(s16 *)((u8 *)temp_a0_5 + 2) = (s16) (temp_v1_2 + 1);
        }
    }
    temp_a1_3 = *(s32 *)((u8 *)arg0 + 0x60);
    temp_a0_6 = (u8 *)(temp_s7 + (temp_a1_3 * 4));
    if (var_s2 != *(s16 *)((u8 *)temp_a0_6 + 0)) {
        *(s32 *)((u8 *)arg0 + 0x60) = (s32) ((temp_a1_3 + 1) & 0x1F);
        *(temp_s7 + (*(s32 *)((u8 *)arg0 + 0x60) * 4)) = var_s2;
        if (*(s32 *)((u8 *)arg0 + 0x50) > 0) {
            var_a0_3 = -1;
        } else {
            var_a0_3 = 1;
        }
        *(s16 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x60) * 4) + temp_s7) + 2) = var_a0_3;
        return;
    }
    temp_v1_3 = *(s16 *)((u8 *)temp_a0_6 + 2);
    if (temp_v1_3 < 0) {
        if (temp_v1_3 >= -0x7FFE) {
            *(s16 *)((u8 *)temp_a0_6 + 2) = (s16) (temp_v1_3 - 1);
        }
    } else if (temp_v1_3 < 0x7FFF) {
        *(s16 *)((u8 *)temp_a0_6 + 2) = (s16) (temp_v1_3 + 1);
    }
}
