/* Draft (not built): func_002FACA0 at 0x002FACA0, size 0x350, segment menu/mn_CharSelChip (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_CharSelChip.s */

u32 func_0012EAE0(M2C_UNK, u32);                    /* extern */
M2C_UNK memset(s32, M2C_UNK, M2C_UNK);              /* extern */
extern M2C_UNK D_00458C70;
extern M2C_UNK D_00458C90;
extern s128 D_00458CB0;
extern M2C_UNK D_00458DA0;
extern s8 D_00470978;
extern M2C_UNK D_005CA030;
extern s8 D_005D0082;
extern void *gTourMap;

void func_002FACA0(void) {
    s32 sp1B0;
    s32 sp190;
    s128 spA0;
    M2C_UNK sp60;
    f32 temp_f0;
    f32 temp_f1;
    s128 *var_a1_2;
    s128 *var_a2_3;
    s16 temp_t3;
    s32 *var_a1;
    s32 *var_s3;
    s32 *var_t1;
    s32 temp_s0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1_3;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_s4;
    s32 var_t2_2;
    s32 var_t4;
    s8 temp_a1_2;
    void *temp_a1;
    void *temp_s1;
    void *temp_t1;
    void *var_s2;
    void *var_t2;

    temp_s0 = M2C_FIELD(gTourMap, s32 *, 0x40) + 0x30;
    memset(temp_s0 + 0xC, -1, 0xA);
    temp_a1 = M2C_FIELD(gTourMap, void **, 0x70);
    if (temp_a1 != NULL) {
        var_a3 = 0x64;
        var_a2 = 0;
        var_a1 = &sp1B0;
        M2C_FIELD(var_a1, s128 *, 0) = (s128) M2C_FIELD(&D_00458C70, s128 *, 0);
        M2C_FIELD(var_a1, s64 *, 0x10) = (s64) M2C_FIELD(&D_00458C70, s64 *, 0x10);
        temp_t1 = &D_005CA030 + (M2C_FIELD(temp_a1, s16 *, 0xA) * 0xB80);
        M2C_FIELD(var_a1, f32 *, 0x18) = (f32) M2C_FIELD(&D_00458C70, f32 *, 0x18);
        temp_t3 = M2C_FIELD(temp_t1, s16 *, 0xB80);
        do {
            var_t4 = 0;
            if (temp_t3 > 0) {
                var_t2 = temp_t1 + 0xB80;
                do {
                    if (M2C_FIELD(var_t2, s16 *, 2) == (var_a2 + 0x1BE)) {
                        var_a3 += *var_a1;
                    }
                    var_t4 += 1;
                    var_t2 += 2;
                } while (var_t4 < temp_t3);
            }
            var_a2 += 1;
            var_a1 += 4;
        } while (var_a2 < 7);
        temp_a1_2 = M2C_FIELD(M2C_FIELD(gTourMap, void **, 0x70), s8 *, 7);
        temp_f1 = (f32) ((((D_005D0082 - 3) * 0x4E20) + 0x2710) * var_a3);
        temp_f0 = temp_f1 / 100.0f;
        if (temp_a1_2 == D_005D0082) {
            M2C_FIELD(gTourMap, s32 *, 0x58) = (s32) (((M2C_BITWISE(s32, (temp_f1 / 100.0f)) / 100) + (M2C_BITWISE(u32, temp_f0) >> 0x1F)) * 0x64);
        } else {
            var_a2_2 = M2C_BITWISE(s32, temp_f1) / 2240806912;
            if (temp_a1_2 == (D_005D0082 - 1)) {
                if (M2C_BITWISE(s32, temp_f0) < 0) {
                    var_a2_2 = (s32) (M2C_BITWISE(s32, temp_f0) + 1) >> 1;
                }
                M2C_FIELD(gTourMap, s32 *, 0x58) = (s32) (((var_a2_2 / 100) + ((u32) var_a2_2 >> 0x1F)) * 0x64);
            } else {
                M2C_FIELD(gTourMap, s32 *, 0x58) = 0;
            }
        }
    } else {
        M2C_FIELD(gTourMap, s32 *, 0x58) = 0;
    }
    var_a2_3 = &D_00458CB0;
    var_a1_2 = &spA0;
    var_a0 = 0xF;
    M2C_FIELD(&sp190, s128 *, 0) = (s128) M2C_FIELD(&D_00458C90, s128 *, 0);
    M2C_FIELD(&sp190, s64 *, 0x10) = (s64) M2C_FIELD(&D_00458C90, s64 *, 0x10);
    do {
        var_a0 -= 1;
        *var_a1_2 = *var_a2_3;
        var_a2_3 += 0x10;
        var_a1_2 += 0x10;
    } while (var_a0 > 0);
    var_t2_2 = 0;
    var_t1 = &sp190;
    M2C_FIELD(&sp60, s128 *, 0) = (s128) M2C_FIELD(&D_00458DA0, s128 *, 0);
    M2C_FIELD(&sp60, s128 *, 0x10) = (s128) M2C_FIELD(&D_00458DA0, s128 *, 0x10);
    M2C_FIELD(&sp60, s128 *, 0x20) = (s128) M2C_FIELD(&D_00458DA0, s128 *, 0x20);
    M2C_FIELD(&sp60, s64 *, 0x30) = (s64) M2C_FIELD(&D_00458DA0, s64 *, 0x30);
    M2C_FIELD(&sp60, f32 *, 0x38) = (f32) M2C_FIELD(&D_00458DA0, f32 *, 0x38);
loop_20:
    var_a1_3 = var_t2_2;
    if (*var_t1 < M2C_FIELD(gTourMap, s32 *, 0x58)) {
        var_t2_2 += 1;
        var_t1 += 4;
        if (var_t2_2 < 6) {
            goto loop_20;
        }
    }
    var_s4 = 0;
    var_s3 = (var_a1_3 * 0x28) + sp + 0xA0;
    var_s2 = (var_a1_3 * 0xA) + sp + 0x60;
loop_23:
    temp_v1 = *var_s3;
    temp_s1 = temp_s0 + var_s4;
    if (temp_v1 != -1) {
        M2C_FIELD(temp_s1, s8 *, 0xC) = (s8) temp_v1;
        if ((var_s4 > 0) && (M2C_FIELD(var_s2, s8 *, -1) != -1)) {
            var_a1_3 = (s32) (func_0012EAE0(0x20, (u32) var_a1_3) % 10U);
            M2C_FIELD(temp_s1, s8 *, 0x15) = (s8) (D_00470978 + (M2C_FIELD(var_s2, s8 *, -1) + var_a1_3));
        }
        var_s4 += 1;
        var_s3 += 4;
        var_s2 += 1;
        if (var_s4 >= 0xA) {

        } else {
            goto loop_23;
        }
    }
}
