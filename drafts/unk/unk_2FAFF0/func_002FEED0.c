/* Draft (not built): func_002FEED0 at 0x002FEED0, size 0x738, segment unk/unk_2FAFF0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 407 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x7A8, original 0x738
 * Original: asm/nonmatchings/unk/unk_2FAFF0/func_002FEED0.s */

// src/unk/unk_2FAFF0.c func_002FEED0 size diff=407/490
extern f32 D_00458A90;
extern f32 D_00458A94;
void func_002FEED0(s32 arg0) {
    f32 spB8;
    f32 spBC;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f3;
    f32 var_a1;
    f32 var_f0;
    f32 var_f0_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s6;
    s32 temp_s7;
    s32 temp_t1;
    s32 temp_t2;
    s32 temp_t2_2;
    s32 temp_t3;
    s32 temp_t4;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_a0;
    s32 var_a2;
    s32 var_a3;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s5;
    s32 var_t0;
    u8 *temp_v0_2;
    u8 *temp_v1_5;

    var_s3 = 0;
    if (arg0 <= 0) {
        goto block_16;
    }
    var_s5 = 0;
loop_2:
    temp_s7 = 1 << (arg0 - var_s3);
    var_s2 = 0;
    if (temp_s7 <= 0) {
        goto block_15;
    }
    temp_s6 = 1 << var_s3;
    var_s1 = 0;
    temp_s0 = temp_s6 * 0x64;
loop_4:
    var_t0 = 1;
    var_f0 = (f32) ((((1 << arg0) - 1) * 0x64) + 0x190 + (arg0 * 5)) / -2.0f;
    spB8 = ((((50.0f + (f32) (((arg0 + 1) * 0x64) + 0x88)) / 2.0f) - 64.0f) - 50.0f) - (f32) var_s5;
    if (var_s3 <= 0) {
        goto block_12;
    }
    if (var_s3 < 9) {
        goto block_8;
    }
loop_7:
    temp_a1 = (1 << (var_t0 + 1)) * 0x64;
    temp_a0 = (1 << (var_t0 + 2)) * 0x64;
    temp_v1 = (1 << (var_t0 + 3)) * 0x64;
    temp_v0 = (1 << (var_t0 + 4)) * 0x64;
    temp_f0 = var_f0 + (0.5f * (f32) ((1 << (var_t0 - 1)) * 0x64)) + (0.5f * (f32) ((1 << var_t0) * 0x64));
    temp_t3 = (1 << (var_t0 + 5)) * 0x19;
    temp_t2 = (1 << (var_t0 + 6)) * 5;
    var_t0 += 8;
    var_f0 = temp_f0 + (0.5f * (f32) temp_a1) + (0.5f * (f32) temp_a0) + (0.5f * (f32) temp_v1) + (0.5f * (f32) temp_v0) + (0.5f * (f32) (temp_t3 * 4)) + (0.5f * (f32) (temp_t2 * 0x14));
    if ((var_s3 - 8) >= var_t0) {
        goto loop_7;
    }
block_8:
    if (var_s3 < var_t0) {
        goto block_12;
    }
loop_10:
    temp_v1_2 = 1 << (var_t0 - 1);
    var_t0 += 1;
    var_f0 += 0.5f * (f32) (temp_v1_2 * 0x64);
    if (var_s3 >= var_t0) {
        goto loop_10;
    }
block_12:
    temp_a0_2 = temp_s0 * (var_s1 >> var_s3);
    spBC = 200.0f + var_f0 + (f32) temp_a0_2;
    temp_f1 = spB8 + D_00458A94;
    temp_v0_2 = *(u8 **)((u8 *)gTourMap + 0x44);
    temp_f2 = spBC + D_00458A90;
    spB8 = temp_f1;
    spBC = temp_f2;
    spBC = temp_f2 - *(f32 *)((u8 *)temp_v0_2 + 0x30);
    temp_f14 = temp_f1 - *(f32 *)((u8 *)temp_v0_2 + 0x34);
    spB8 = temp_f14;
    func_002FED60(temp_a0_2, spBC, temp_f14 - 100.0f, temp_f14);
    if (!(var_s2 & 1)) {
        goto block_14;
    }
    func_002FEBD0(spBC - (f32) temp_s0, spBC, spB8 - 100.0f);
block_14:
    var_s2 += 1;
    var_s1 += temp_s6;
    if (var_s2 < temp_s7) {
        goto loop_4;
    }
block_15:
    var_s3 += 1;
    var_s5 += 0x64;
    if (var_s3 < arg0) {
        goto loop_2;
    }
block_16:
    var_a3 = 1;
    var_a2 = 0x42480000;
    var_a1 = -2.0f;
    spB8 = 0.0f;
    spBC = 0.0f;
    var_a0 = 0x40000000;
    var_f0_2 = (f32) ((((1 << arg0) - 1) * 0x64) + 0x190 + (arg0 * 5)) / -2.0f;
    spB8 = ((((50.0f + (f32) (((arg0 + 1) * 0x64) + 0x88)) / 2.0f) - 64.0f) - 50.0f) - (f32) (arg0 * 0x64);
    if (arg0 <= 0) {
        goto block_24;
    }
    var_a2 = arg0 - 8;
    if (arg0 < 9) {
        goto block_20;
    }
    var_a1 = 1e-45f;
loop_19:
    var_a0 = (1 << (var_a3 + 1)) * 0x64;
    temp_v1_3 = (1 << (var_a3 + 2)) * 0x64;
    temp_v0_3 = (1 << (var_a3 + 3)) * 0x64;
    temp_t4 = (1 << (var_a3 + 4)) * 0x64;
    temp_t2_2 = (1 << (var_a3 + 5)) * 0x19;
    temp_f0_2 = var_f0_2 + (0.5f * (f32) ((1 << (var_a3 - 1)) * 0x64)) + (0.5f * (f32) ((1 << var_a3) * 0x64));
    temp_t1 = (1 << (var_a3 + 6)) * 5;
    var_a3 += 8;
    var_f0_2 = temp_f0_2 + (0.5f * (f32) var_a0) + (0.5f * (f32) temp_v1_3) + (0.5f * (f32) temp_v0_3) + (0.5f * (f32) temp_t4) + (0.5f * (f32) (temp_t2_2 * 4)) + (0.5f * (f32) (temp_t1 * 0x14));
    if (var_a2 >= var_a3) {
        goto loop_19;
    }
block_20:
    if (arg0 < var_a3) {
        goto block_24;
    }
    var_a0 = 1;
loop_22:
    temp_v1_4 = 1 << (var_a3 - 1);
    var_a3 += 1;
    var_f0_2 += 0.5f * (f32) (temp_v1_4 * 0x64);
    if (arg0 >= var_a3) {
        goto loop_22;
    }
block_24:
    temp_f3 = 200.0f + var_f0_2 + 0.0f;
    spBC = temp_f3;
    temp_v1_5 = *(u8 **)((u8 *)gTourMap + 0x44);
    temp_f2_2 = temp_f3 + D_00458A90;
    temp_f1_2 = spB8 + D_00458A94;
    spB8 = temp_f1_2;
    spBC = temp_f2_2;
    spBC = temp_f2_2 - *(f32 *)((u8 *)temp_v1_5 + 0x30);
    temp_f14_2 = temp_f1_2 - *(f32 *)((u8 *)temp_v1_5 + 0x34);
    spB8 = temp_f14_2;
    func_002FED60(var_a0, var_a1, M2C_BITWISE(f32, var_a2), M2C_BITWISE(f32, var_a3), spBC, temp_f14_2 - 100.0f, temp_f14_2);
    return;
}
