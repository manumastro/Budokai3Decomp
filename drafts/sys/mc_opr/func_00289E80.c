/* Draft (not built): func_00289E80 at 0x00289E80, size 0xAC, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

M2C_UNK SoundRpc_Send3(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK SoundRpc_SetVolume(M2C_UNK, M2C_UNK, f32);  /* extern */
M2C_UNK func_00288870(M2C_UNK);                     /* extern */
extern s32 D_00470858;
extern void *D_0047088C;
extern M2C_UNK *D_00470894;
extern u16 D_00492FCE;
extern u16 D_00493086;
extern f32 D_004E0614;
extern M2C_UNK func_0028DDA0;
extern M2C_UNK func_0028DDB0;

void func_00289E80(void) {
    M2C_UNK *var_v1;

    if ((D_00492FCE | D_00493086) & 0x4000) {
        SoundRpc_SetVolume(0, 0, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 3, 0);
        }
        D_00470858 = 2;
        func_00288870(-1);
        var_v1 = &func_0028DDB0;
        if (&func_0028DDB0 == NULL) {
            var_v1 = NULL;
        }
        M2C_FIELD(D_0047088C, M2C_UNK **, 0x1C) = var_v1;
        D_00470894 = &func_0028DDA0;
    }
}
