/* Draft (not built): func_0027FEB0 at 0x0027FEB0, size 0x238, segment menu/mn_charasel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_charasel.s */

M2C_UNK SoundRpc_Send3(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK SoundRpc_SetVolume(M2C_UNK, M2C_UNK, f32);  /* extern */
M2C_UNK func_0027D330(s32, s64);                    /* extern */
s64 func_0027DAA0(s32);                             /* extern */
s64 func_0027DAB0(s32);                             /* extern */
M2C_UNK func_0027EA60(s32 *);                       /* extern */
M2C_UNK func_0027F070(void *);                      /* extern */
M2C_UNK func_0027F290(void *);                      /* extern */
M2C_UNK func_0027F4A0(void *);                      /* extern */
M2C_UNK func_0027F680(void *);                      /* extern */
extern s32 D_00470838;
extern s64 D_004B4B48;
extern f32 D_004E0614;
extern M2C_UNK D_0058F680;
extern M2C_UNK func_0027FE10;
extern f32 gFrameDelta;

void func_0027FEB0(void *arg0) {
    M2C_UNK *var_a1;
    M2C_UNK *var_v1;
    f32 temp_f0;
    f32 temp_f2;
    s32 *temp_s0;
    s32 *var_a2;
    s32 *var_s1;
    s32 *var_s3;
    s32 *var_s3_2;
    s32 var_a3;
    s32 var_s3_3;
    s32 var_s4;
    s32 var_s4_2;
    s8 temp_v1;

    temp_s0 = M2C_FIELD(arg0, s32 **, 0x38);
    func_0027EA60(temp_s0);
    var_a3 = 0;
    var_a2 = &D_00470838;
    var_a1 = &D_0058F680;
    do {
        if ((*var_a2 & 0x7FFF) == 4) {
            D_004B4B48 |= M2C_FIELD(var_a1, s64 *, 0x90);
        }
        var_a3 += 1;
        var_a1 = var_a1 + 0x7FFF + 0x5681;
        var_a2 += 4;
    } while (var_a3 < 2);
    var_s4 = 0;
    var_s3 = temp_s0;
    do {
        func_0027D330(*var_s3, D_004B4B48);
        var_s4 += 1;
        var_s3 += 4;
    } while (var_s4 < 2);
    temp_f2 = M2C_FIELD(temp_s0, f32 *, 0x44);
    if (temp_f2 < 40.0f) {
        temp_f0 = temp_f2 + gFrameDelta;
        M2C_FIELD(temp_s0, f32 *, 0x44) = temp_f0;
        if (!(temp_f0 < 40.0f)) {
            SoundRpc_SetVolume(1, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(1, 0, 0xA, 0);
            }
        }
    }
    var_s4_2 = 0;
    var_s3_2 = temp_s0;
loop_11:
    if (((s64) (func_0027DAB0(*var_s3_2) << 0x38) >> 0x38) >= 4) {
        var_s4_2 += 1;
        var_s3_2 += 4;
        if (var_s4_2 >= 2) {
            temp_v1 = M2C_FIELD((arg0 + 0x30), s8 *, 5);
            switch (temp_v1) {                      /* irregular */
            case 0:
                func_0027F680(arg0);
                break;
            case 1:
                func_0027F4A0(arg0);
                break;
            case 2:
                func_0027F290(arg0);
                break;
            case 3:
                func_0027F070(arg0);
                break;
            }
            var_s3_3 = 0;
            var_s1 = temp_s0;
loop_23:
            if (((s64) (func_0027DAA0(*var_s1) << 0x38) >> 0x38) == 1) {
                var_s3_3 += 1;
                var_s1 += 4;
                if (var_s3_3 >= 2) {
                    M2C_FIELD(temp_s0, s32 *, 0x40) = 0x41F00000;
                    var_v1 = &func_0027FE10;
                    M2C_FIELD(temp_s0, s8 *, 0x3D) = 3;
                    if (&func_0027FE10 == NULL) {
                        var_v1 = NULL;
                    }
                    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
                } else {
                    goto loop_23;
                }
            }
        } else {
            goto loop_11;
        }
    }
}
