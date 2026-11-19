/* Draft (not built): func_002FCAF0 at 0x002FCAF0, size 0x464, segment unk/unk_2FAFF0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 256 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x508, original 0x464
 * Original: asm/nonmatchings/unk/unk_2FAFF0/func_002FCAF0.s */

// src/unk/unk_2FAFF0.c func_002FCAF0 size diff=256/322
extern s8 D_005D0080;
extern s8 D_005D0081;
extern s8 D_005D0082;
void func_002FCAF0(void) {
    f32 temp_f5;
    f32 var_f5;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_t0;
    s32 temp_t8;
    s32 temp_t9;
    s32 var_t3;
    s32 var_t6;
    s64 temp_t2;
    s8 temp_t4;
    u8 *temp_a1;
    u8 *temp_t5;

    var_t6 = 0;
    goto loop_24;
block_1:
    if (var_t6 == D_005D0080) {
        goto block_23;
    }
    if (var_t6 == D_005D0081) {
        goto block_23;
    }
    temp_a1 = (unsigned char *)(gTourMap + (var_t6 * 0x14));
    temp_t5 = temp_a1 + 0x2EC;
    if (*(s8 *)((u8 *)temp_a1 + 0x2F0) != 1) {
        goto block_16;
    }
    temp_t4 = *(s8 *)((u8 *)temp_t5 + 7);
    temp_t2 = (s64) ((s64) D_005D0082 << 0x38) >> 0x38;
    var_f5 = (f32) ((((1 << temp_t2) - 1) * 0x64) + 0x190 + (temp_t2 * 5)) / -2.0f;
    if ((temp_t5 + 0x10) == NULL) {
        goto block_6;
    }
    *(f32 *)((u8 *)temp_t5 + 0x10) = (f32) (((((50.0f + (f32) (((temp_t2 + 1) * 0x64) + 0x88)) / 2.0f) - 64.0f) - 50.0f) - (f32) (temp_t4 * 0x64));
block_6:
    var_t3 = 1;
    if (temp_t4 <= 0) {
        goto block_14;
    }
    if (temp_t4 < 9) {
        goto block_10;
    }
loop_9:
    temp_t0 = (1 << (var_t3 + 1)) * 0x64;
    temp_a3 = (1 << (var_t3 + 2)) * 0x64;
    temp_a2 = (1 << (var_t3 + 3)) * 0x64;
    temp_a1_2 = (1 << (var_t3 + 4)) * 0x64;
    temp_f5 = var_f5 + (0.5f * (f32) ((1 << (var_t3 - 1)) * 0x64)) + (0.5f * (f32) ((1 << var_t3) * 0x64));
    temp_t9 = (1 << (var_t3 + 5)) * 0x19;
    temp_t8 = (1 << (var_t3 + 6)) * 5;
    var_t3 += 8;
    var_f5 = temp_f5 + (0.5f * (f32) temp_t0) + (0.5f * (f32) temp_a3) + (0.5f * (f32) temp_a2) + (0.5f * (f32) temp_a1_2) + (0.5f * (f32) (temp_t9 * 4)) + (0.5f * (f32) (temp_t8 * 0x14));
    if ((temp_t4 - 8) >= var_t3) {
        goto loop_9;
    }
block_10:
    if (temp_t4 < var_t3) {
        goto block_14;
    }
loop_12:
    temp_a2_2 = 1 << (var_t3 - 1);
    var_t3 += 1;
    var_f5 += 0.5f * (f32) (temp_a2_2 * 0x64);
    if (temp_t4 >= var_t3) {
        goto loop_12;
    }
block_14:
    if ((temp_t5 + 0xC) == NULL) {
        goto block_16;
    }
    *(f32 *)((u8 *)temp_t5 + 0xC) = (f32) (200.0f + var_f5 + (f32) ((1 << temp_t4) * 0x64 * (var_t6 >> temp_t4)));
block_16:
    if (*(s8 *)((u8 *)temp_t5 + 4) != 4) {
        goto block_18;
    }
    *(s8 *)((u8 *)temp_t5 + 4) = 5;
block_18:
    if (*(s8 *)((u8 *)temp_t5 + 4) != 5) {
        goto block_23;
    }
    if ((temp_t5 + 0x10) == NULL) {
        goto block_21;
    }
    *(f32 *)((u8 *)temp_t5 + 0x10) = (f32) (((((50.0f + (f32) (((D_005D0082 + 1) * 0x64) + 0x88)) / 2.0f) - 64.0f) - 50.0f) - 0.0f);
block_21:
    if ((temp_t5 + 0xC) == NULL) {
        goto block_23;
    }
    *(f32 *)((u8 *)temp_t5 + 0xC) = (f32) (200.0f + ((f32) ((((1 << D_005D0082) - 1) * 0x64) + 0x190 + (D_005D0082 * 5)) / -2.0f) + (f32) (var_t6 * 0x64));
block_23:
    var_t6 += 1;
loop_24:
    if (var_t6 < (1 << D_005D0082)) {
        goto block_1;
    }
    return;
}
