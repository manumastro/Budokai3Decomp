/* Draft (not built): func_002F6E40 at 0x002F6E40, size 0x460, segment menu/mn_CharSelChip (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_CharSelChip.s */

void func_002F6E40(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s16 *, 0x20) = (s16) (((s32) M2C_FIELD(arg1, u8 *, 0) >> 2) & 0x3F);
    M2C_FIELD(arg0, s16 *, 0x22) = (s16) ((M2C_FIELD(arg1, u8 *, 0) * 0x10) & 0x30);
    M2C_FIELD(arg0, s16 *, 0x22) = (s16) (M2C_FIELD(arg0, s16 *, 0x22) | ((s64) ((((s32) M2C_FIELD(arg1, u8 *, 1) >> 4) & 0xF) << 0x30) >> 0x30));
    M2C_FIELD(arg0, s16 *, 0x24) = (s16) ((M2C_FIELD(arg1, u8 *, 1) * 4) & 0x3C);
    M2C_FIELD(arg0, s16 *, 0x24) = (s16) (M2C_FIELD(arg0, s16 *, 0x24) | ((s64) ((((s32) M2C_FIELD(arg1, u8 *, 2) >> 6) & 3) << 0x30) >> 0x30));
    M2C_FIELD(arg0, s16 *, 0x26) = (s16) (M2C_FIELD(arg1, u8 *, 2) & 0x3F);
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) (((s32) M2C_FIELD(arg1, u8 *, 3) >> 2) & 0x3F);
    M2C_FIELD(arg0, s16 *, 0x2A) = (s16) ((M2C_FIELD(arg1, u8 *, 3) * 0x10) & 0x30);
    M2C_FIELD(arg0, s16 *, 0x2A) = (s16) (M2C_FIELD(arg0, s16 *, 0x2A) | ((s64) ((((s32) M2C_FIELD(arg1, u8 *, 4) >> 4) & 0xF) << 0x30) >> 0x30));
    M2C_FIELD(arg0, s16 *, 0x2C) = (s16) ((M2C_FIELD(arg1, u8 *, 4) * 4) & 0x3C);
    M2C_FIELD(arg0, s16 *, 0x2C) = (s16) (M2C_FIELD(arg0, s16 *, 0x2C) | ((s64) ((((s32) M2C_FIELD(arg1, u8 *, 5) >> 6) & 3) << 0x30) >> 0x30));
    M2C_FIELD(arg0, s16 *, 0x2E) = (s16) (M2C_FIELD(arg1, u8 *, 5) & 0x3F);
    M2C_FIELD(arg0, s16 *, 0x30) = (s16) (((s32) M2C_FIELD(arg1, u8 *, 6) >> 2) & 0x3F);
    M2C_FIELD(arg0, s16 *, 0x32) = (s16) ((M2C_FIELD(arg1, u8 *, 6) * 0x10) & 0x30);
    M2C_FIELD(arg0, s16 *, 0x32) = (s16) (M2C_FIELD(arg0, s16 *, 0x32) | ((s64) ((((s32) M2C_FIELD(arg1, u8 *, 7) >> 4) & 0xF) << 0x30) >> 0x30));
    M2C_FIELD(arg0, s16 *, 0x34) = (s16) ((M2C_FIELD(arg1, u8 *, 7) * 4) & 0x3C);
    M2C_FIELD(arg0, s16 *, 0x34) = (s16) (M2C_FIELD(arg0, s16 *, 0x34) | ((s64) ((((s32) M2C_FIELD(arg1, u8 *, 8) >> 6) & 3) << 0x30) >> 0x30));
    M2C_FIELD(arg0, s16 *, 0x36) = (s16) (M2C_FIELD(arg1, u8 *, 8) & 0x3F);
    M2C_FIELD(arg0, s16 *, 0x38) = (s16) (((s32) M2C_FIELD(arg1, u8 *, 9) >> 2) & 0x3F);
    M2C_FIELD(arg0, s16 *, 0x3A) = (s16) ((M2C_FIELD(arg1, u8 *, 9) * 0x10) & 0x30);
    M2C_FIELD(arg0, s16 *, 0x3A) = (s16) (M2C_FIELD(arg0, s16 *, 0x3A) | ((s64) ((((s32) M2C_FIELD(arg1, u8 *, 0xA) >> 4) & 0xF) << 0x30) >> 0x30));
    M2C_FIELD(arg0, s16 *, 0x3C) = (s16) ((M2C_FIELD(arg1, u8 *, 0xA) * 4) & 0x3C);
    M2C_FIELD(arg0, s16 *, 0x3C) = (s16) (M2C_FIELD(arg0, s16 *, 0x3C) | ((s64) ((((s32) M2C_FIELD(arg1, u8 *, 0xB) >> 6) & 3) << 0x30) >> 0x30));
    M2C_FIELD(arg0, s16 *, 0x3E) = (s16) (M2C_FIELD(arg1, u8 *, 0xB) & 0x3F);
    M2C_FIELD(arg0, s16 *, 0x40) = (s16) (((s32) M2C_FIELD(arg1, u8 *, 0xC) >> 2) & 0x3F);
    M2C_FIELD(arg0, s16 *, 0x42) = (s16) ((M2C_FIELD(arg1, u8 *, 0xC) * 0x10) & 0x30);
    M2C_FIELD(arg0, s16 *, 0x42) = (s16) (M2C_FIELD(arg0, s16 *, 0x42) | ((s64) ((((s32) M2C_FIELD(arg1, u8 *, 0xD) >> 4) & 0xF) << 0x30) >> 0x30));
    M2C_FIELD(arg0, s16 *, 0x44) = (s16) ((M2C_FIELD(arg1, u8 *, 0xD) * 4) & 0x3C);
    M2C_FIELD(arg0, s16 *, 0x44) = (s16) (M2C_FIELD(arg0, s16 *, 0x44) | ((s64) ((((s32) M2C_FIELD(arg1, u8 *, 0xE) >> 6) & 3) << 0x30) >> 0x30));
    M2C_FIELD(arg0, s16 *, 0x46) = (s16) (M2C_FIELD(arg1, u8 *, 0xE) & 0x3F);
    M2C_FIELD(arg0, s16 *, 0x48) = (s16) (((s32) M2C_FIELD(arg1, u8 *, 0xF) >> 2) & 0x3F);
    M2C_FIELD(arg0, s16 *, 0x4A) = (s16) ((M2C_FIELD(arg1, u8 *, 0xF) * 0x10) & 0x30);
    M2C_FIELD(arg0, s16 *, 0x4A) = (s16) (M2C_FIELD(arg0, s16 *, 0x4A) | ((s64) ((((s32) M2C_FIELD(arg1, u8 *, 0x10) >> 4) & 0xF) << 0x30) >> 0x30));
    M2C_FIELD(arg0, s16 *, 0x4C) = (s16) ((M2C_FIELD(arg1, u8 *, 0x10) * 4) & 0x3C);
    M2C_FIELD(arg0, s16 *, 0x4C) = (s16) (M2C_FIELD(arg0, s16 *, 0x4C) | ((s64) ((((s32) M2C_FIELD(arg1, u8 *, 0x11) >> 6) & 3) << 0x30) >> 0x30));
    M2C_FIELD(arg0, s16 *, 0x4E) = (s16) (M2C_FIELD(arg1, u8 *, 0x11) & 0x3F);
    M2C_FIELD(arg0, s16 *, 0x50) = (s16) (((s32) M2C_FIELD(arg1, u8 *, 0x12) >> 2) & 0x3F);
    M2C_FIELD(arg0, s16 *, 0x52) = (s16) ((M2C_FIELD(arg1, u8 *, 0x12) * 0x10) & 0x30);
    M2C_FIELD(arg0, s16 *, 0x52) = (s16) (M2C_FIELD(arg0, s16 *, 0x52) | ((s64) ((((s32) M2C_FIELD(arg1, u8 *, 0x13) >> 4) & 0xF) << 0x30) >> 0x30));
    M2C_FIELD(arg0, s16 *, 0x54) = (s16) ((M2C_FIELD(arg1, u8 *, 0x13) * 4) & 0x3C);
    M2C_FIELD(arg0, s16 *, 0x54) = (s16) (M2C_FIELD(arg0, s16 *, 0x54) | ((s64) ((((s32) M2C_FIELD(arg1, u8 *, 0x14) >> 6) & 3) << 0x30) >> 0x30));
    M2C_FIELD(arg0, s16 *, 0x56) = (s16) (M2C_FIELD(arg1, u8 *, 0x14) & 0x3F);
    M2C_FIELD(arg0, s16 *, 0x58) = (s16) (((s32) M2C_FIELD(arg1, u8 *, 0x15) >> 2) & 0x3F);
    M2C_FIELD(arg0, s16 *, 0x5A) = (s16) ((M2C_FIELD(arg1, u8 *, 0x15) * 0x10) & 0x30);
    M2C_FIELD(arg0, s16 *, 0x5A) = (s16) (M2C_FIELD(arg0, s16 *, 0x5A) | ((s64) ((((s32) M2C_FIELD(arg1, u8 *, 0x16) >> 4) & 0xF) << 0x30) >> 0x30));
    M2C_FIELD(arg0, s16 *, 0x5C) = (s16) ((M2C_FIELD(arg1, u8 *, 0x16) * 4) & 0x3C);
    M2C_FIELD(arg0, s16 *, 0x5C) = (s16) (M2C_FIELD(arg0, s16 *, 0x5C) | ((s64) ((((s32) M2C_FIELD(arg1, u8 *, 0x17) >> 6) & 3) << 0x30) >> 0x30));
    M2C_FIELD(arg0, s16 *, 0x5E) = (s16) (M2C_FIELD(arg1, u8 *, 0x17) & 0x3F);
    M2C_FIELD(arg0, s16 *, 0x60) = (s16) (((s32) M2C_FIELD(arg1, u8 *, 0x18) >> 2) & 0x3F);
    M2C_FIELD(arg0, s16 *, 0x62) = (s16) ((M2C_FIELD(arg1, u8 *, 0x18) * 0x10) & 0x30);
    M2C_FIELD(arg0, s16 *, 0x62) = (s16) (M2C_FIELD(arg0, s16 *, 0x62) | ((s64) ((((s32) M2C_FIELD(arg1, u8 *, 0x19) >> 4) & 0xF) << 0x30) >> 0x30));
    M2C_FIELD(arg0, s16 *, 0x64) = (s16) ((M2C_FIELD(arg1, u8 *, 0x19) * 4) & 0x3C);
    M2C_FIELD(arg0, s16 *, 0x64) = (s16) (M2C_FIELD(arg0, s16 *, 0x64) | ((s64) ((((s32) M2C_FIELD(arg1, u8 *, 0x1A) >> 6) & 3) << 0x30) >> 0x30));
    M2C_FIELD(arg0, s16 *, 0x66) = (s16) (M2C_FIELD(arg1, u8 *, 0x1A) & 0x3F);
}
