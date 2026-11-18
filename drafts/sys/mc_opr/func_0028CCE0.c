/* Draft (not built): func_0028CCE0 at 0x0028CCE0, size 0x130, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

M2C_UNK SoundRpc_Send3(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK SoundRpc_SetVolume(M2C_UNK, M2C_UNK, f32);  /* extern */
s32 amMc_GetInfo(s32, M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00288870(M2C_UNK);                     /* extern */
extern s32 D_0047084C;
extern s32 D_00470850;
extern s32 D_00470854;
extern s32 D_00470858;
extern s32 D_00470864;
extern s32 D_00470868;
extern M2C_UNK *D_00470894;
extern u16 D_00492FCE;
extern u16 D_00493086;
extern f32 D_004E0614;
extern M2C_UNK func_0028C580;
extern M2C_UNK func_0028D4D0;
extern M2C_UNK func_0028DDF0;

void func_0028CCE0(void *arg0) {
    M2C_UNK *var_v1;
    M2C_UNK *var_v1_2;
    s32 temp_v1;

    temp_v1 = D_00470850 - 1;
    D_00470850 = temp_v1;
    if ((temp_v1 == 0) || ((D_00492FCE | D_00493086) & 0x4000)) {
        if ((D_00492FCE | D_00493086) & 0x4000) {
            SoundRpc_SetVolume(0, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 3, 0);
            }
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
            return;
        }
        D_00470864 = 0;
        D_00470868 = 0;
        func_00288870(0x20);
        var_v1_2 = &func_0028D4D0;
        if (&func_0028D4D0 == NULL) {
            var_v1_2 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_2;
    }
}
