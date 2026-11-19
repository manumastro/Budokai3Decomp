/* Draft (not built): func_002FDAC0 at 0x002FDAC0, size 0x4B0, segment unk/unk_2FAFF0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); & ~(1 << (s64) *((s32) &D_0046B560 + (*(s8 *)((u8 *)var_t0 + 0xB70) * 2))) & ~(1 << (s64) *((s32) &D_0046B560 + (*(s8 *)
 * Original: asm/nonmatchings/unk/unk_2FAFF0/func_002FDAC0.s */

// src/unk/unk_2FAFF0.c func_002FDAC0 cerr diff=-1/0
extern s32 D_0046B560;
extern s64 D_004B4B48;
extern s8 D_005D0082;
void func_002FDAC0(s32 unused_arg0, s32 unused_arg1, s32 arg2) {
    s16 var_s3;
    s32 temp_a0_2;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v1;
    s32 var_a2;
    s32 var_a3;
    s32 var_s4;
    s32 var_t2;
    s64 var_s0_2;
    s8 *var_s0;
    s8 *var_t0;
    s8 var_a3_2;
    u32 var_a3_3;
    u8 *temp_a0;
    u8 *temp_a0_3;
    u8 *temp_a1;
    u8 *temp_a1_2;
    u8 *temp_s1;
    u8 *var_a1;
    u8 *var_a1_2;
    u8 *var_a1_3;
    u8 *var_t0_2;

    var_a2 = arg2;
    var_a3 = 0;
    temp_s2 = 1 << D_005D0082;
    temp_s1 = (unsigned char *)(gTourMap + 0x2EC);
    if (temp_s2 > 0) {
        var_a2 = temp_s2 - 8;
        if (temp_s2 >= 9) {
            var_a1 = temp_s1;
            do {
                *(s16 *)((u8 *)var_a1 + 8) = -1;
                *(s16 *)((u8 *)var_a1 + 0x1C) = -1;
                var_a3 += 8;
                *(s16 *)((u8 *)var_a1 + 0x30) = -1;
                *(s16 *)((u8 *)var_a1 + 0x44) = -1;
                *(s16 *)((u8 *)var_a1 + 0x58) = -1;
                *(s16 *)((u8 *)var_a1 + 0x6C) = -1;
                *(s16 *)((u8 *)var_a1 + 0x80) = -1;
                *(s16 *)((u8 *)var_a1 + 0x94) = -1;
                var_a1 += 0xA0;
            } while (var_a3 < var_a2);
        }
        if (var_a3 < temp_s2) {
            var_a1_2 = temp_s1 + (var_a3 * 0x14);
            do {
                var_a3 += 1;
                *(s16 *)((u8 *)var_a1_2 + 8) = -1;
                var_a1_2 += 0x14;
            } while (var_a3 < temp_s2);
        }
    }
    var_a3_2 = (*(signed char *)(D_005CA030));
    var_s3 = 0;
    if (var_a3_2 > 0) {
        var_s0 = (signed char *)(&D_005CA030);
        do {
            var_a3_3 = func_0012EAE0(0x20) % (u32) (temp_s2 - var_s3);
            var_a2 = 0;
            if ((s32) var_a3_3 >= 0) {
                var_a1_3 = temp_s1;
                do {
                    if (*(s16 *)((u8 *)var_a1_3 + 8) != -1) {
                        var_a3_3 += 1;
                    }
                    var_a2 += 1;
                    var_a1_3 += 0x14;
                } while ((s32) var_a3_3 >= var_a2);
            }
            temp_a0 = temp_s1 + (var_a3_3 * 0x14);
            *(s16 *)((u8 *)temp_a0 + 8) = (s16) *(s8 *)((u8 *)var_s0 + 0xB70);
            *(s16 *)((u8 *)temp_a0 + 0xA) = var_s3;
            var_a3_2 = (*(signed char *)(D_005CA030));
            var_s3 += 1;
            var_s0 += 0xB80;
        } while (var_s3 < var_a3_2);
    }
    var_s0_2 = D_004B4B48;
    var_t2 = 0;
    if (var_a3_2 > 0) {
        if (var_a3_2 >= 9) {
            var_t0 = (signed char *)(&D_005CA030);
            var_a2 = (s32) &D_0046B560;
            do {
                var_t2 += 8;
                temp_s0 = var_s0_2 & ~(1 << (s64) *((s32) &D_0046B560 + (*(s8 *)((u8 *)var_t0 + 0xB70) * 2))) & ~(1 << (s64) *((s32) &D_0046B560 + (*(s8 *)((u8 *)var_t0 + 0x16F0) * 2))) & ~(1 << (s64) *((s32) &D_0046B560 + (*(s8 *)((u8 *)var_t0 + 0x2270) * 2))) & ~(1 << (s64) *((s32) &D_0046B560 + (*(s8 *)((u8 *)var_t0 + 0x2DF0) * 2))) & ~(1 << (s64) *((s32) &D_0046B560 + (*(s8 *)((u8 *)var_t0 + 0x3970) * 2))) & ~(1 << (s64) *((s32) &D_0046B560 + (*(s8 *)((u8 *)var_t0 + 0x44F0) * 2))) & ~(1 << (s64) *((s32) &D_0046B560 + (*(s8 *)((u8 *)var_t0 + 0x5070) * 2)));
                temp_v1 = *(s8 *)((u8 *)var_t0 + 0x5BF0) * 2;
                var_t0 += 0x5C00;
                var_s0_2 = temp_s0 & ~(1 << (s64) *((s32) &D_0046B560 + temp_v1));
            } while (var_t2 < (var_a3_2 - 8));
        }
        if (var_t2 < var_a3_2) {
            var_a3_2 = (s8) ((s64) ((s64) var_a3_2 << 0x38) >> 0x38);
            var_t0_2 = ((u8 *)&D_005CA030) + (var_t2 * 0xB80);
            var_a2 = (s32) &D_0046B560;
            do {
                var_t2 += 1;
                temp_a0_2 = *(s8 *)((u8 *)var_t0_2 + 0xB70) * 2;
                var_t0_2 += 0xB80;
                var_s0_2 &= ~(1 << (s64) *((s32) &D_0046B560 + temp_a0_2));
            } while (var_t2 < var_a3_2);
        }
    }
    var_s4 = 0;
loop_33:
    if (var_s4 < temp_s2) {
        temp_s3 = var_s4 * 0x14;
        temp_a1 = temp_s3 + temp_s1;
        if (*(s16 *)((u8 *)temp_a1 + 8) == -1) {
            *(s16 *)((u8 *)temp_a1 + 0xA) = -1;
            *(s16 *)((u8 *)temp_a1 + 8) = func_002FD9F0(var_s0_2, temp_a1, var_a2, (s64) var_a3_2);
            var_s0_2 &= ~(1 << (s64) *(&D_0046B560 + (*(s16 *)((u8 *)temp_a1 + 8) * 2)));
        }
        temp_a0_3 = temp_s1 + temp_s3;
        var_a3_2 = D_005D0082 * 5;
        var_a2 = (((1 << D_005D0082) - 1) * 0x64) + 0x190 + var_a3_2;
        if ((temp_a0_3 + 0x10) != NULL) {
            *(f32 *)((u8 *)temp_a0_3 + 0x10) = (f32) (((((50.0f + (f32) (((D_005D0082 + 1) * 0x64) + 0x88)) / 2.0f) - 64.0f) - 50.0f) - 0.0f);
        }
        temp_a1_2 = temp_s1 + temp_s3;
        if ((temp_a1_2 + 0xC) != NULL) {
            *(f32 *)((u8 *)temp_a1_2 + 0xC) = (f32) (200.0f + ((f32) var_a2 / -2.0f) + (f32) (var_s4 * 0x64));
        }
        var_s4 += 1;
        goto loop_33;
    }
}
