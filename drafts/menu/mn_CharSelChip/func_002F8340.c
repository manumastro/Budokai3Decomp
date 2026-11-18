/* Draft (not built): func_002F8340 at 0x002F8340, size 0x154, segment menu/mn_CharSelChip (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_CharSelChip.s */

s32 func_0012EAE0(M2C_UNK);                         /* extern */
M2C_UNK func_002F6E40(void *, M2C_UNK *);           /* extern */
M2C_UNK func_002F72A0(M2C_UNK *);                   /* extern */
M2C_UNK func_002F75A0(void *, u64, M2C_UNK *);      /* extern */
M2C_UNK memcpy(M2C_UNK *, M2C_UNK *, M2C_UNK);      /* extern */
extern M2C_UNK D_005C9FF0;
extern M2C_UNK D_005CA00B;

s32 func_002F8340(void *arg0) {
    M2C_UNK sp30;
    s32 temp_s1;
    u64 temp_a1;

    temp_s1 = (func_0012EAE0(0x10) << 0x10) & 0xFFFF0000;
    temp_a1 = (u64) ((temp_s1 | (func_0012EAE0(0x10) & 0xFFFF)) << 0x20) >> 0x20;
    M2C_FIELD(arg0, s16 *, 0) = (s16) (M2C_FIELD(arg0, s16 *, 0) + 7);
    M2C_FIELD(arg0, s16 *, 2) = (s16) (M2C_FIELD(arg0, s16 *, 2) + 7);
    M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) + 7);
    M2C_FIELD(arg0, s16 *, 8) = (s16) (M2C_FIELD(arg0, s16 *, 8) + 7);
    M2C_FIELD(arg0, s16 *, 0xA) = (s16) (M2C_FIELD(arg0, s16 *, 0xA) + 7);
    M2C_FIELD(arg0, s16 *, 0xC) = (s16) (M2C_FIELD(arg0, s16 *, 0xC) + 7);
    M2C_FIELD(arg0, s16 *, 0xE) = (s16) (M2C_FIELD(arg0, s16 *, 0xE) + 7);
    M2C_FIELD(arg0, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, s16 *, 0x10) + 7);
    M2C_FIELD(arg0, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, s16 *, 0x12) + 0x12C);
    M2C_FIELD(arg0, s16 *, 0x14) = (s16) (M2C_FIELD(arg0, s16 *, 0x14) + 0x12C);
    M2C_FIELD(arg0, s16 *, 0x16) = (s16) (M2C_FIELD(arg0, s16 *, 0x16) + 0x12C);
    M2C_FIELD(arg0, s16 *, 0x18) = (s16) (M2C_FIELD(arg0, s16 *, 0x18) + 0x12C);
    M2C_FIELD(arg0, s16 *, 0x1A) = (s16) (M2C_FIELD(arg0, s16 *, 0x1A) + 0x12C);
    M2C_FIELD(arg0, s16 *, 0x1C) = (s16) (M2C_FIELD(arg0, s16 *, 0x1C) + 0x12C);
    M2C_FIELD(arg0, s16 *, 0x1E) = (s16) (M2C_FIELD(arg0, s16 *, 0x1E) + 0x12C);
    func_002F75A0(arg0, temp_a1, &sp30);
    memcpy(&D_005CA00B, &sp30, 0x1B);
    func_002F72A0(&sp30);
    memcpy(&D_005C9FF0, &sp30, 0x1B);
    func_002F6E40(arg0, &sp30);
    return 0;
}
