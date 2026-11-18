/* Draft (not built): func_0028CEF0 at 0x0028CEF0, size 0x2E8, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

M2C_UNK SoundRpc_Send3(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK SoundRpc_SetVolume(M2C_UNK, M2C_UNK, f32, u16, f32); /* extern */
s32 amMc_GetInfo(s32, M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_002880B0(s32);                         /* extern */
M2C_UNK func_00288870(s32, s32);                    /* extern */
extern s32 D_00470048;
extern s32 D_0047084C;
extern s32 D_00470854;
extern s32 D_00470858;
extern s32 D_0047085C;
extern s32 D_00470864;
extern s32 D_00470868;
extern M2C_UNK *D_00470894;
extern u16 D_00492FCE;
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern f32 D_004E0614;
extern M2C_UNK func_0028A730;
extern M2C_UNK func_0028B720;
extern M2C_UNK func_0028C580;
extern M2C_UNK func_0028D4D0;
extern M2C_UNK func_0028DDA0;
extern M2C_UNK func_0028DDB0;
extern M2C_UNK func_0028DDF0;

void func_0028CEF0(void *arg0) {
    M2C_UNK *var_v1;
    M2C_UNK *var_v1_2;
    M2C_UNK *var_v1_3;
    M2C_UNK *var_v1_4;
    M2C_UNK *var_v1_5;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a2;

    func_002880B0(D_00470854);
    temp_a0 = D_00492FCE | D_00493086;
    if (!(temp_a0 & 0x1000)) {
        if (temp_a0 & 0x4000) {
            if (D_00470854 == 0) {
                SoundRpc_SetVolume(0, 0, D_004E0614);
                if (!(D_004E0614 <= 0.0f)) {
                    SoundRpc_Send3(0, 0, 3, 0);
                }
                if (amMc_GetInfo(D_0047084C, 0, 1) != 0) {
                    func_00288870(4);
                    var_v1 = &func_0028DDF0;
                    if (&func_0028DDF0 == NULL) {
                        var_v1 = NULL;
                    }
                    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
                    D_00470858 = 3;
                    D_00470894 = &func_0028C580;
                    D_00470854 = 1;
                } else {
                    D_00470864 = 1;
                    D_00470868 = 0;
                    func_00288870(0x20);
                    var_v1_2 = &func_0028D4D0;
                    if (&func_0028D4D0 == NULL) {
                        var_v1_2 = NULL;
                    }
                    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_2;
                }
                return;
            }
            goto block_21;
        }
        temp_a2 = D_00492FD2 | D_00493032;
        temp_a0_2 = (temp_a2 | (D_0049308A | D_004930EA)) & 0x50;
        if ((temp_a0_2 != 0x40) && (temp_a0_2 != 0x10)) {

        } else {
            SoundRpc_SetVolume(0, 0, M2C_BITWISE(f32, temp_a2), D_00492FD2, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 2, 0);
            }
            D_00470854 ^= 1;
        }
        return;
    }
block_21:
    SoundRpc_SetVolume(0, 0, D_004E0614);
    if (!(D_004E0614 <= 0.0f)) {
        SoundRpc_Send3(0, 0, 5, 0);
    }
    switch (D_00470048) {                           /* irregular */
    case 0:
        func_00288870(2, D_00470048);
        var_v1_3 = &func_0028DDF0;
        if (&func_0028DDF0 == NULL) {
            var_v1_3 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_3;
        D_00470894 = &func_0028A730;
        D_00470854 = 1;
        return;
    case 2:
        D_00470858 = 2;
        func_00288870(-1, D_00470048);
        var_v1_4 = &func_0028DDB0;
        if (&func_0028DDB0 == NULL) {
            var_v1_4 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_4;
        D_00470894 = &func_0028DDA0;
        return;
    case 5:
    case 4:
        func_00288870(D_0047085C, D_00470048);
        var_v1_5 = &func_0028DDF0;
        if (&func_0028DDF0 == NULL) {
            var_v1_5 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_5;
        D_00470854 = 0;
        D_00470864 = 0;
        D_00470894 = &func_0028B720;
        D_00470868 = 0;
        return;
    }
}
