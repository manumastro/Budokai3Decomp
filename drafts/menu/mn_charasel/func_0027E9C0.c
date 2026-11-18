/* Draft (not built): func_0027E9C0 at 0x0027E9C0, size 0x98, segment menu/mn_charasel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_charasel.s */

void *A2d_AllocObj(M2C_UNK, M2C_UNK);               /* extern */
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);           /* extern */
extern f32 D_0047042C;
extern f32 D_00470430;

void func_0027E9C0(void *arg0) {
    void *temp_v0;

    temp_v0 = A2d_AllocObj(0, 0);
    M2C_FIELD(arg0, void **, 0x38) = temp_v0;
    memset(temp_v0, 0, 0x60);
    M2C_FIELD(temp_v0, s32 *, 4) = 1;
    M2C_FIELD(temp_v0, s32 *, 0x14) = -1;
    M2C_FIELD(temp_v0, s16 *, 0x18) = -1;
    M2C_FIELD(temp_v0, s32 *, 0x20) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x24) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x28) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x2C) = 0x3F800000;
    M2C_FIELD(temp_v0, s32 *, 0x34) = 0;
    M2C_FIELD(temp_v0, f32 *, 0x3C) = (f32) D_00470430;
    M2C_FIELD(temp_v0, s32 *, 0x30) = 0;
    M2C_FIELD(temp_v0, f32 *, 0x38) = (f32) D_0047042C;
    M2C_FIELD(temp_v0, s32 *, 0x50) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x54) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x58) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x5C) = 0;
    M2C_FIELD(temp_v0, s32 *, 8) = 1;
}
