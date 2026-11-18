/* Draft (not built): func_002FAB70 at 0x002FAB70, size 0x124, segment menu/mn_CharSelChip (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_CharSelChip.s */

M2C_UNK SoundRpc_Send3(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK SoundRpc_SetVolume(M2C_UNK, M2C_UNK, f32);  /* extern */
M2C_UNK func_0022C430(s32, f32);                    /* extern */
extern f32 D_004E0614;
extern f32 gFrameDelta;
extern void *gTourMap;

void func_002FAB70(void) {
    s32 temp_s4;
    s32 var_s1;
    s32 var_s2;
    s8 temp_v1;
    void *temp_s0;
    void *temp_s3;
    void *temp_s5;

    var_s2 = 0;
    var_s1 = 0;
    temp_s5 = M2C_FIELD(gTourMap, void **, 0x34);
    temp_s3 = gTourMap + 0x28C;
    temp_s4 = M2C_FIELD(gTourMap, s32 *, 0x40) + 0x30;
loop_1:
    temp_s0 = temp_s4 + var_s1;
    temp_v1 = M2C_FIELD(temp_s0, s8 *, 0xC);
    if (temp_v1 >= 0) {
        func_0022C430(*(M2C_FIELD(temp_s5, s32 *, 0x1C) + (temp_v1 * 4)), gFrameDelta * (f32) (M2C_FIELD(temp_s3, s32 *, 8) - var_s2));
        if ((gFrameDelta * (f32) (M2C_FIELD(temp_s3, s32 *, 8) - var_s2)) == 10.0f) {
            SoundRpc_SetVolume(1, 0, D_004E0614);
            if (!(D_004E0614 <= 0.0f)) {
                SoundRpc_Send3(1, 0, 8, 0);
            }
        }
        var_s1 += 1;
        var_s2 += M2C_FIELD(temp_s0, s8 *, 0x16);
        if (var_s1 >= 0xA) {

        } else {
            goto loop_1;
        }
    }
}
