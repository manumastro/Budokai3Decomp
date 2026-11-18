/* Draft (not built): func_0028A730 at 0x0028A730, size 0x2A8, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

M2C_UNK SoundRpc_Send3(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK SoundRpc_SetVolume(M2C_UNK, M2C_UNK, f32, u16, f32); /* extern */
M2C_UNK func_001EF510(s32, M2C_UNK);                /* extern */
M2C_UNK func_001EF730(s32);                         /* extern */
M2C_UNK func_001EF930(M2C_UNK *, s32);              /* extern */
M2C_UNK func_002880B0(s32);                         /* extern */
M2C_UNK func_00288870(M2C_UNK);                     /* extern */
extern s32 D_00470850;
extern s32 D_00470854;
extern s32 D_00470858;
extern s32 D_00470870;
extern void *D_0047088C;
extern M2C_UNK *D_00470894;
extern u16 D_00492FCE;
extern u16 D_00492FD2;
extern u16 D_00493032;
extern u16 D_00493086;
extern u16 D_0049308A;
extern u16 D_004930EA;
extern M2C_UNK D_004B4B40;
extern s8 D_004B4B64;
extern s32 D_004B4BE0;
extern f32 D_004E0614;
extern M2C_UNK func_0028A9E0;
extern M2C_UNK func_0028DDA0;
extern M2C_UNK func_0028DDB0;
extern M2C_UNK func_0028DDF0;

void func_0028A730(void *arg0) {
    M2C_UNK *var_v1;
    M2C_UNK *var_v1_2;
    M2C_UNK *var_v1_3;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a2;

    func_002880B0(D_00470854);
    temp_a0 = D_00492FCE | D_00493086;
    if (temp_a0 & 0x1000) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        D_00470858 = 2;
        func_00288870(-1);
        var_v1 = &func_0028DDB0;
        if (&func_0028DDB0 == NULL) {
            var_v1 = NULL;
        }
        M2C_FIELD(D_0047088C, M2C_UNK **, 0x1C) = var_v1;
        D_00470894 = &func_0028DDA0;
        return;
    }
    if (temp_a0 & 0x4000) {
        if (D_00470854 != 0) {
            SoundRpc_SetVolume(0, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 5, 0);
            }
            D_00470858 = 2;
            func_00288870(-1);
            var_v1_2 = &func_0028DDB0;
            if (&func_0028DDB0 == NULL) {
                var_v1_2 = NULL;
            }
            M2C_FIELD(D_0047088C, M2C_UNK **, 0x1C) = var_v1_2;
            D_00470894 = &func_0028DDA0;
        } else {
            SoundRpc_SetVolume(0, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(0, 0, 3, 0);
            }
            func_001EF510(D_00470870, 0xD680);
            func_001EF930(&D_004B4B40, D_00470870);
            func_001EF730(D_00470870);
            D_004B4BE0 = 0;
            D_004B4B64 = -1;
            func_00288870(3);
            var_v1_3 = &func_0028DDF0;
            if (&func_0028DDF0 == NULL) {
                var_v1_3 = NULL;
            }
            M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1_3;
            D_00470894 = &func_0028A9E0;
            D_00470850 = 0x78;
        }
    }
    temp_a2 = D_00492FD2 | D_00493032;
    temp_a0_2 = (temp_a2 | (D_0049308A | D_004930EA)) & 0x50;
    if ((temp_a0_2 != 0x40) && (temp_a0_2 != 0x10)) {
        return;
    }
    SoundRpc_SetVolume(0, 0, M2C_BITWISE(f32, temp_a2), D_00492FD2, D_004E0614);
    if (!(D_004E0614 <= 0.0f)) {
        SoundRpc_Send3(0, 0, 2, 0);
    }
    D_00470854 ^= 1;
}
