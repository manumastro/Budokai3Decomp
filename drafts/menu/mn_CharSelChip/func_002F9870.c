/* Draft (not built): func_002F9870 at 0x002F9870, size 0xBC, segment menu/mn_CharSelChip (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_CharSelChip.s */

s32 amAdx_IsStopped(M2C_UNK);                       /* extern */
M2C_UNK amAdx_Pause(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK amAdx_PlayAfs(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK amAdx_SetVolume(M2C_UNK, f32);              /* extern */
M2C_UNK amTask_Kill(void *);                        /* extern */
extern f32 D_004E0618;
extern void *gTourMap;

void func_002F9870(void *arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s0 = arg0 + 0x30;
    if (M2C_FIELD(arg0, s32 *, 0x34) != 0) {
        if (amAdx_IsStopped(1) & 5) {
            M2C_FIELD(gTourMap, s16 *, 0x5E) = (s16) (M2C_FIELD(gTourMap, s16 *, 0x5E) + 1);
            amTask_Kill(arg0);
        }
    } else if (M2C_FIELD(gTourMap, s16 *, 0x5E) == M2C_FIELD(temp_s0, s32 *, 8)) {
        temp_s1 = M2C_FIELD(arg0, s32 *, 0x30);
        amAdx_SetVolume(1, D_004E0618);
        amAdx_Pause(1, 0);
        amAdx_PlayAfs(1, temp_s1 | 0x20000, 0);
        M2C_FIELD(temp_s0, s32 *, 4) = 1;
    }
}
