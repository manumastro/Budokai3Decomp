/* Draft (not built): func_00288BF0 at 0x00288BF0, size 0x280, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

M2C_UNK SoundRpc_Send3(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK SoundRpc_SetVolume(M2C_UNK, M2C_UNK, f32, u16, f32); /* extern */
M2C_UNK amMc_GetInfo(s32, M2C_UNK, M2C_UNK);        /* extern */
M2C_UNK func_002880B0(s32);                         /* extern */
M2C_UNK func_00288870(M2C_UNK);                     /* extern */
extern s32 D_0047084C;
extern s32 D_00470854;
extern s32 D_00470858;
extern M2C_UNK *D_00470894;
extern u16 D_00492FCE;
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern f32 D_004E0614;
extern M2C_UNK func_00289210;
extern M2C_UNK func_00289380;
extern M2C_UNK func_0028DDA0;
extern M2C_UNK func_0028DDB0;
extern s32 gMcResult;
extern s32 gMcState;

void func_00288BF0(void *arg0) {
    M2C_UNK *var_v1;
    M2C_UNK *var_v1_2;
    M2C_UNK *var_v1_3;
    s32 temp_a0;
    s32 temp_a2;

    switch (gMcState) {                             /* switch 1; irregular */
    case 2:                                         /* switch 1 */
        switch (gMcResult) {                        /* switch 2; irregular */
        case -2:                                    /* switch 2 */
        case -1:                                    /* switch 2 */
            func_00288870(0x20);
            var_v1 = &func_00289210;
            if (&func_00289210 == NULL) {
                var_v1 = NULL;
            }
            M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
            return;
        default:                                    /* switch 2 */
        case -5:                                    /* switch 2 */
            func_00288870(5);
            /* fallthrough */
        default:                                    /* switch 1 */
        case 0:                                     /* switch 2 */
            amMc_GetInfo(D_0047084C, 0, 0);
            func_002880B0(D_00470854);
            if ((D_00492FCE | D_00493086) & 0x4000) {
                if (D_00470854 != 0) {
                    SoundRpc_SetVolume(0, 0, D_004E0614);
                    if (!(D_004E0614 <= 0.0f)) {
                        SoundRpc_Send3(0, 0, 5, 0);
                    }
                    return;
                }
                SoundRpc_SetVolume(0, 0, D_004E0614);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 3, 0);
                }
                func_00288870(-1);
                var_v1_2 = &func_0028DDB0;
                if (&func_0028DDB0 == NULL) {
                    var_v1_2 = NULL;
                }
                M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_2;
                D_00470894 = &func_0028DDA0;
                D_00470858 = 1;
                return;
            }
            temp_a2 = D_00492FD2 | D_00493032;
            temp_a0 = (temp_a2 | (D_0049308A | D_004930EA)) & 0x50;
            if ((temp_a0 != 0x40) && (temp_a0 != 0x10)) {
                return;
            }
            SoundRpc_SetVolume(0, 0, M2C_BITWISE(f32, temp_a2), D_00492FD2, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
            D_00470854 ^= 1;
            return;
        }
        break;
    case 3:                                         /* switch 1 */
        var_v1_3 = &func_00289380;
        if (&func_00289380 == NULL) {
            var_v1_3 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_3;
        return;
    }
}
