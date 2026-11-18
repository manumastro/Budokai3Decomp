/* Draft (not built): func_001DDD50 at 0x001DDD50, size 0x738, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal implicit conversion from 'int' to 'void *' @ 1994: func_001E9B00(1, 0x27, 0, 0, 0, 0x3F800000);
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001DDD50.s */

// src/unk/unk_1D5B30.c func_001DDD50 cerr diff=-1/0
void func_001DDD50(u8 *arg0) {
    s32 sp60;
    s32 sp64;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f1;
    f32 var_f2;
    f32 var_f3;
    f32 var_f4;
    f32 var_s0;
    f32 var_s0_2;
    f32 var_s0_3;
    f32 var_s4;
    f32 var_v0;
    s16 temp_a1;
    s16 temp_v1;
    s16 temp_v1_3;
    s16 temp_v1_4;
    u8 temp_v1_2;
    u8 *temp_s1;
    u8 *var_s2;

    temp_v1 = *(s16 *)((u8 *)arg0 + 0x1FEE);
    if (temp_v1 != 0) {
        *(s16 *)((u8 *)arg0 + 0x1FF0) = temp_v1;
        *(s16 *)((u8 *)arg0 + 0x1FEE) = 0;
        *(f32 *)((u8 *)arg0 + 0x1FF4) = (f32) *(f32 *)((u8 *)gBattle + 0x8908);
        func_001D80A0((void *)(arg0), 2);
        temp_a1 = *(s16 *)((u8 *)arg0 + 0x1FF0);
        var_s2 = &D_004E0660 + (temp_a1 * 0x28);
        if (*(u8 *)((u8 *)var_s2 + 0x15) == 0x71) {
            *(s16 *)((u8 *)arg0 + 0x1FF0) = (s16) (((func_0012EAE0(0x20) / 10) & 0xF) + 0x242);
            var_s2 = &D_004E0660 + (*(s16 *)((u8 *)arg0 + 0x1FF0) * 0x28);
        }
        temp_v1_2 = *(u8 *)((u8 *)var_s2 + 0x15);
        temp_s1 = func_0021C660(*(s32 *)((u8 *)arg0 + 0x1350));
        switch (temp_v1_2) {
        case 0x64:
            temp_v1_3 = *(s16 *)((u8 *)var_s2 + 0x16);
            if (temp_v1_3 >= 0) {
                var_s0 = 0.5f + (((f32) (temp_v1_3 * 0x64) * (100.0f + *(f32 *)((u8 *)arg0 + 0x1FB8))) / 100.0f);
            } else {
                var_f2 = ((f32) -temp_v1_3 * (100.0f + *(f32 *)((u8 *)arg0 + 0x1FB8))) / 100.0f;
                if (!(var_f2 <= 0.0f)) {

                } else {
                    var_f2 = 0.0f;
                }
                temp_f1 = var_f2 * *(f32 *)((u8 *)arg0 + 0x17C4);
                var_s0 = M2C_BITWISE(f32, ((M2C_BITWISE(s32, (0.5f + temp_f1)) / 100) + (M2C_BITWISE(u32, (0.5f + temp_f1)) >> 0x1F)));
            }
            if (M2C_BITWISE(s32, var_s0) >= 2) {

            } else {
                var_s0 = 1e-45f;
            }
            func_001E0200(arg0, -M2C_BITWISE(s32, var_s0), 0);
            *(f32 *)((u8 *)temp_s1 + 0xD0) = var_s0;
            *(s16 *)((u8 *)arg0 + 0x1FF0) = 0;
block_50:
            sp60 = *(s32 *)((u8 *)arg0 + 0x1350);
            sp64 = (s32) *(u8 *)((u8 *)var_s2 + 0x15);
            A2d_CallHandler(0x32, &sp60);
            func_001E9B00(1, 0x27, 0, 0, 0, 0x3F800000);
            break;
        case 0x65:
            var_s0_2 = 0.5f + (((f32) (*(s16 *)((u8 *)var_s2 + 0x16) * 0x64) * (100.0f + *(f32 *)((u8 *)arg0 + 0x1FB8))) / 100.0f);
            if (M2C_BITWISE(s32, var_s0_2) >= 2) {

            } else {
                var_s0_2 = 1e-45f;
            }
            func_001DFE60(arg0, 0x10, (f32) -M2C_BITWISE(s32, var_s0_2));
            *(f32 *)((u8 *)temp_s1 + 0xD4) = var_s0_2;
            *(s16 *)((u8 *)arg0 + 0x1FF0) = 0;
            goto block_50;
        case 0x66:
            temp_v1_4 = *(s16 *)((u8 *)var_s2 + 0x16);
            if (temp_v1_4 >= 0) {
                var_f3 = 100.0f + *(f32 *)((u8 *)arg0 + 0x1FB8);
                var_s0_3 = 0.5f + (((f32) (temp_v1_4 * 0x64) * var_f3) / 100.0f);
            } else {
                var_f3 = 100.0f + *(f32 *)((u8 *)arg0 + 0x1FB8);
                var_f4 = ((f32) -temp_v1_4 * var_f3) / 100.0f;
                if (!(var_f4 <= 0.0f)) {

                } else {
                    var_f4 = 0.0f;
                }
                temp_f0 = var_f4 * *(f32 *)((u8 *)arg0 + 0x17C4);
                var_s0_3 = M2C_BITWISE(f32, ((M2C_BITWISE(s32, (0.5f + temp_f0)) / 100) + (M2C_BITWISE(u32, (0.5f + temp_f0)) >> 0x1F)));
            }
            if (M2C_BITWISE(s32, var_s0_3) >= 2) {

            } else {
                var_s0_3 = 1e-45f;
            }
            var_s4 = 0.5f + (((f32) (*(s16 *)((u8 *)(var_s2 + 0x16) + 2) * 0x64) * var_f3) / 100.0f);
            if (M2C_BITWISE(s32, var_s4) >= 2) {

            } else {
                var_s4 = 1e-45f;
            }
            func_001E0200(arg0, -M2C_BITWISE(s32, var_s0_3), 0);
            func_001DFE60(arg0, 0x10, (f32) -M2C_BITWISE(s32, var_s4));
            *(f32 *)((u8 *)temp_s1 + 0xD0) = var_s0_3;
            *(f32 *)((u8 *)temp_s1 + 0xD4) = var_s4;
            *(s16 *)((u8 *)arg0 + 0x1FF0) = 0;
            goto block_50;
        case 0x67:
            var_v0 = ((f32) (*(s16 *)((u8 *)var_s2 + 0x16) * 0x64) * (100.0f + *(f32 *)((u8 *)arg0 + 0x1FB8))) / 100.0f;
            if (M2C_BITWISE(s32, var_v0) >= 2) {

            } else {
                var_v0 = 1e-45f;
            }
            func_001DFC80(arg0, 0, (f32) -M2C_BITWISE(s32, var_v0));
            *(s16 *)((u8 *)arg0 + 0x1FF0) = 0;
            goto block_50;
        case 0x68:
            *(f32 *)((u8 *)temp_s1 + 0xD4) = (f32) (((f32) *(s16 *)((u8 *)var_s2 + 0x16) * (100.0f + *(f32 *)((u8 *)arg0 + 0x1FB8))) / 100.0f);
            *(f32 *)((u8 *)temp_s1 + 0xE4) = (f32) *(s16 *)((u8 *)var_s2 + 0x18);
            *(f32 *)((u8 *)temp_s1 + 0xE0) = (f32) *(s16 *)((u8 *)var_s2 + 0x18);
            goto block_50;
        case 0x69:
        case 0x6A:
            *(f32 *)((u8 *)temp_s1 + 0xD8) = (f32) (((f32) *(s16 *)((u8 *)var_s2 + 0x16) * (100.0f + *(f32 *)((u8 *)arg0 + 0x1FB8))) / 100.0f);
            *(f32 *)((u8 *)temp_s1 + 0xE4) = (f32) (60.0f * (f32) *(s16 *)((u8 *)var_s2 + 0x18));
            *(f32 *)((u8 *)temp_s1 + 0xE0) = (f32) (60.0f * (f32) *(s16 *)((u8 *)var_s2 + 0x18));
            goto block_50;
        case 0x6B:
            temp_f0_2 = ((f32) *(s16 *)((u8 *)var_s2 + 0x16) * (100.0f + *(f32 *)((u8 *)arg0 + 0x1FB8))) / 100.0f;
            *(f32 *)((u8 *)temp_s1 + 0xD8) = temp_f0_2;
            *(f32 *)((u8 *)temp_s1 + 0xDC) = temp_f0_2;
            goto block_50;
        case 0x6C:
            *(f32 *)((u8 *)temp_s1 + 0xDC) = (f32) (((f32) *(s16 *)((u8 *)var_s2 + 0x16) * (100.0f + *(f32 *)((u8 *)arg0 + 0x1FB8))) / 100.0f);
            *(f32 *)((u8 *)temp_s1 + 0xE4) = (f32) (60.0f * (f32) *(s16 *)((u8 *)var_s2 + 0x18));
            *(f32 *)((u8 *)temp_s1 + 0xE0) = (f32) (60.0f * (f32) *(s16 *)((u8 *)var_s2 + 0x18));
            goto block_50;
        case 0x6D:
        case 0x6E:
        case 0x70:
            *(f32 *)((u8 *)temp_s1 + 0xE4) = (f32) (60.0f * (f32) *(s16 *)((u8 *)var_s2 + 0x16));
            *(f32 *)((u8 *)temp_s1 + 0xE0) = (f32) (60.0f * (f32) *(s16 *)((u8 *)var_s2 + 0x16));
            goto block_50;
        default:
            return;
        }
    }
}
