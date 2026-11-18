/* Draft (not built): func_002FFD20 at 0x002FFD20, size 0x608, segment unk/unk_2FAFF0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 321 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x480, original 0x608
 * Original: asm/nonmatchings/unk/unk_2FAFF0/func_002FFD20.s */

// src/unk/unk_2FAFF0.c func_002FFD20 size diff=321/288
extern s8 D_005D0082;
s32 func_002FFD20(s32 arg0) {
    f32 sp8;
    f32 spC;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2;
    f32 var_f0;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_t0;
    s32 temp_t3;
    s32 temp_t4;
    s32 temp_t6;
    s32 temp_v1_2;
    s32 var_v0;
    u8 *temp_t1;
    u8 *temp_v1;

    temp_v1 = *(u8 **)((u8 *)gTourMap + 0x44);
    temp_t1 = temp_v1 + 0x30;
    if (arg0 != 3) {
        var_v0 = 1;
        switch (arg0) {                             /* irregular */
        case 0:
            temp_f1 = 200.0f + ((f32) ((((1 << D_005D0082) - 1) * 0x64) + 0x190 + (D_005D0082 * 5)) / -2.0f) + 0.0f;
            sp8 = ((((50.0f + (f32) (((D_005D0082 + 1) * 0x64) + 0x88)) / 2.0f) - 64.0f) - 50.0f) - 0.0f;
            spC = temp_f1;
            if (!(*(f32 *)((u8 *)temp_v1 + 0x30) <= temp_f1)) {
                return 1;
            }
            *(f32 *)((u8 *)temp_v1 + 0x30) = temp_f1;
            return 0;
        case 1:
            var_f0 = (f32) ((((1 << D_005D0082) - 1) * 0x64) + 0x190 + (D_005D0082 * 5)) / -2.0f;
            sp8 = ((((50.0f + (f32) (((D_005D0082 + 1) * 0x64) + 0x88)) / 2.0f) - 64.0f) - 50.0f) - (f32) (D_005D0082 * 0x64);
            if (D_005D0082 > 0) {
                if (D_005D0082 >= 9) {
                    do {
                        temp_a1 = (1 << (var_v0 + 1)) * 0x64;
                        temp_a0 = (1 << (var_v0 + 2)) * 0x64;
                        temp_v1_2 = (1 << (var_v0 + 3)) * 0x64;
                        temp_t6 = (1 << (var_v0 + 4)) * 0x64;
                        temp_t4 = (1 << (var_v0 + 5)) * 0x19;
                        temp_f0 = var_f0 + (0.5f * (f32) ((1 << (var_v0 - 1)) * 0x64)) + (0.5f * (f32) ((1 << var_v0) * 0x64));
                        temp_t3 = (1 << (var_v0 + 6)) * 5;
                        var_v0 += 8;
                        var_f0 = temp_f0 + (0.5f * (f32) temp_a1) + (0.5f * (f32) temp_a0) + (0.5f * (f32) temp_v1_2) + (0.5f * (f32) temp_t6) + (0.5f * (f32) (temp_t4 * 4)) + (0.5f * (f32) (temp_t3 * 0x14));
                    } while ((D_005D0082 - 8) >= var_v0);
                }
                if (D_005D0082 >= var_v0) {
                    do {
                        temp_a0_2 = 1 << (var_v0 - 1);
                        var_v0 += 1;
                        var_f0 += 0.5f * (f32) (temp_a0_2 * 0x64);
                    } while (D_005D0082 >= var_v0);
                }
            }
            spC = 200.0f + var_f0 + 0.0f;
            if (!(*(f32 *)((u8 *)temp_t1 + 4) <= sp8)) {
                return 1;
            }
            *(f32 *)((u8 *)temp_t1 + 4) = sp8;
            return 0;
        case 2:
            temp_t0 = ((1 << D_005D0082) - 1) * 0x64;
            temp_f1_2 = 200.0f + ((f32) (temp_t0 + 0x190 + (D_005D0082 * 5)) / -2.0f) + (f32) temp_t0;
            spC = temp_f1_2;
            sp8 = ((((50.0f + (f32) (((D_005D0082 + 1) * 0x64) + 0x88)) / 2.0f) - 64.0f) - 50.0f) - 0.0f;
            if (*(f32 *)((u8 *)temp_v1 + 0x30) < temp_f1_2) {
                return 1;
            }
            *(f32 *)((u8 *)temp_v1 + 0x30) = temp_f1_2;
            return 0;
        default:
            return 0;
        }
    } else {
        temp_f2 = ((((50.0f + (f32) (((D_005D0082 + 1) * 0x64) + 0x88)) / 2.0f) - 64.0f) - 50.0f) - 0.0f;
        sp8 = temp_f2;
        spC = 200.0f + ((f32) ((((1 << D_005D0082) - 1) * 0x64) + 0x190 + (D_005D0082 * 5)) / -2.0f) + 0.0f;
        temp_f1_3 = temp_f2 - 100.0f;
        if (*(f32 *)((u8 *)temp_t1 + 4) < temp_f1_3) {
            return 1;
        }
        *(f32 *)((u8 *)temp_t1 + 4) = temp_f1_3;
        return 0;
    }
}
