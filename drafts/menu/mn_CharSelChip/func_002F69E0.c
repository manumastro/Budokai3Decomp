/* Draft (not built): func_002F69E0 at 0x002F69E0, size 0x418, segment menu/mn_CharSelChip (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_CharSelChip.s */

void func_002F69E0(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u8 *, 0) = (u8) ((M2C_FIELD(arg1, s16 *, 0x20) * 4) & 0xFC);
    M2C_FIELD(arg0, u8 *, 0) = (u8) (M2C_FIELD(arg0, u8 *, 0) | (((s16) M2C_FIELD(arg1, s16 *, 0x22) >> 4) & 3));
    M2C_FIELD(arg0, u8 *, 1) = (u8) ((M2C_FIELD(arg1, s16 *, 0x22) * 0x10) & 0xF0);
    M2C_FIELD(arg0, u8 *, 1) = (u8) (M2C_FIELD(arg0, u8 *, 1) | (((s16) M2C_FIELD(arg1, s16 *, 0x24) >> 2) & 0xF));
    M2C_FIELD(arg0, u8 *, 2) = (u8) ((M2C_FIELD(arg1, s16 *, 0x24) << 6) & 0xC0);
    M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) | (M2C_FIELD(arg1, s16 *, 0x26) & 0x3F));
    M2C_FIELD(arg0, u8 *, 3) = (u8) ((M2C_FIELD(arg1, s16 *, 0x28) * 4) & 0xFC);
    M2C_FIELD(arg0, u8 *, 3) = (u8) (M2C_FIELD(arg0, u8 *, 3) | (((s16) M2C_FIELD(arg1, s16 *, 0x2A) >> 4) & 3));
    M2C_FIELD(arg0, u8 *, 4) = (u8) ((M2C_FIELD(arg1, s16 *, 0x2A) * 0x10) & 0xF0);
    M2C_FIELD(arg0, u8 *, 4) = (u8) (M2C_FIELD(arg0, u8 *, 4) | (((s16) M2C_FIELD(arg1, s16 *, 0x2C) >> 2) & 0xF));
    M2C_FIELD(arg0, u8 *, 5) = (u8) ((M2C_FIELD(arg1, s16 *, 0x2C) << 6) & 0xC0);
    M2C_FIELD(arg0, u8 *, 5) = (u8) (M2C_FIELD(arg0, u8 *, 5) | (M2C_FIELD(arg1, s16 *, 0x2E) & 0x3F));
    M2C_FIELD(arg0, u8 *, 6) = (u8) ((M2C_FIELD(arg1, s16 *, 0x30) * 4) & 0xFC);
    M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) | (((s16) M2C_FIELD(arg1, s16 *, 0x32) >> 4) & 3));
    M2C_FIELD(arg0, u8 *, 7) = (u8) ((M2C_FIELD(arg1, s16 *, 0x32) * 0x10) & 0xF0);
    M2C_FIELD(arg0, u8 *, 7) = (u8) (M2C_FIELD(arg0, u8 *, 7) | (((s16) M2C_FIELD(arg1, s16 *, 0x34) >> 2) & 0xF));
    M2C_FIELD(arg0, u8 *, 8) = (u8) ((M2C_FIELD(arg1, s16 *, 0x34) << 6) & 0xC0);
    M2C_FIELD(arg0, u8 *, 8) = (u8) (M2C_FIELD(arg0, u8 *, 8) | (M2C_FIELD(arg1, s16 *, 0x36) & 0x3F));
    M2C_FIELD(arg0, u8 *, 9) = (u8) ((M2C_FIELD(arg1, s16 *, 0x38) * 4) & 0xFC);
    M2C_FIELD(arg0, u8 *, 9) = (u8) (M2C_FIELD(arg0, u8 *, 9) | (((s16) M2C_FIELD(arg1, s16 *, 0x3A) >> 4) & 3));
    M2C_FIELD(arg0, u8 *, 0xA) = (u8) ((M2C_FIELD(arg1, s16 *, 0x3A) * 0x10) & 0xF0);
    M2C_FIELD(arg0, u8 *, 0xA) = (u8) (M2C_FIELD(arg0, u8 *, 0xA) | (((s16) M2C_FIELD(arg1, s16 *, 0x3C) >> 2) & 0xF));
    M2C_FIELD(arg0, u8 *, 0xB) = (u8) ((M2C_FIELD(arg1, s16 *, 0x3C) << 6) & 0xC0);
    M2C_FIELD(arg0, u8 *, 0xB) = (u8) (M2C_FIELD(arg0, u8 *, 0xB) | (M2C_FIELD(arg1, s16 *, 0x3E) & 0x3F));
    M2C_FIELD(arg0, u8 *, 0xC) = (u8) ((M2C_FIELD(arg1, s16 *, 0x40) * 4) & 0xFC);
    M2C_FIELD(arg0, u8 *, 0xC) = (u8) (M2C_FIELD(arg0, u8 *, 0xC) | (((s16) M2C_FIELD(arg1, s16 *, 0x42) >> 4) & 3));
    M2C_FIELD(arg0, u8 *, 0xD) = (u8) ((M2C_FIELD(arg1, s16 *, 0x42) * 0x10) & 0xF0);
    M2C_FIELD(arg0, u8 *, 0xD) = (u8) (M2C_FIELD(arg0, u8 *, 0xD) | (((s16) M2C_FIELD(arg1, s16 *, 0x44) >> 2) & 0xF));
    M2C_FIELD(arg0, u8 *, 0xE) = (u8) ((M2C_FIELD(arg1, s16 *, 0x44) << 6) & 0xC0);
    M2C_FIELD(arg0, u8 *, 0xE) = (u8) (M2C_FIELD(arg0, u8 *, 0xE) | (M2C_FIELD(arg1, s16 *, 0x46) & 0x3F));
    M2C_FIELD(arg0, u8 *, 0xF) = (u8) ((M2C_FIELD(arg1, s16 *, 0x48) * 4) & 0xFC);
    M2C_FIELD(arg0, u8 *, 0xF) = (u8) (M2C_FIELD(arg0, u8 *, 0xF) | (((s16) M2C_FIELD(arg1, s16 *, 0x4A) >> 4) & 3));
    M2C_FIELD(arg0, u8 *, 0x10) = (u8) ((M2C_FIELD(arg1, s16 *, 0x4A) * 0x10) & 0xF0);
    M2C_FIELD(arg0, u8 *, 0x10) = (u8) (M2C_FIELD(arg0, u8 *, 0x10) | (((s16) M2C_FIELD(arg1, s16 *, 0x4C) >> 2) & 0xF));
    M2C_FIELD(arg0, u8 *, 0x11) = (u8) ((M2C_FIELD(arg1, s16 *, 0x4C) << 6) & 0xC0);
    M2C_FIELD(arg0, u8 *, 0x11) = (u8) (M2C_FIELD(arg0, u8 *, 0x11) | (M2C_FIELD(arg1, s16 *, 0x4E) & 0x3F));
    M2C_FIELD(arg0, u8 *, 0x12) = (u8) ((M2C_FIELD(arg1, s16 *, 0x50) * 4) & 0xFC);
    M2C_FIELD(arg0, u8 *, 0x12) = (u8) (M2C_FIELD(arg0, u8 *, 0x12) | (((s16) M2C_FIELD(arg1, s16 *, 0x52) >> 4) & 3));
    M2C_FIELD(arg0, u8 *, 0x13) = (u8) ((M2C_FIELD(arg1, s16 *, 0x52) * 0x10) & 0xF0);
    M2C_FIELD(arg0, u8 *, 0x13) = (u8) (M2C_FIELD(arg0, u8 *, 0x13) | (((s16) M2C_FIELD(arg1, s16 *, 0x54) >> 2) & 0xF));
    M2C_FIELD(arg0, u8 *, 0x14) = (u8) ((M2C_FIELD(arg1, s16 *, 0x54) << 6) & 0xC0);
    M2C_FIELD(arg0, u8 *, 0x14) = (u8) (M2C_FIELD(arg0, u8 *, 0x14) | (M2C_FIELD(arg1, s16 *, 0x56) & 0x3F));
    M2C_FIELD(arg0, u8 *, 0x15) = (u8) ((M2C_FIELD(arg1, s16 *, 0x58) * 4) & 0xFC);
    M2C_FIELD(arg0, u8 *, 0x15) = (u8) (M2C_FIELD(arg0, u8 *, 0x15) | (((s16) M2C_FIELD(arg1, s16 *, 0x5A) >> 4) & 3));
    M2C_FIELD(arg0, u8 *, 0x16) = (u8) ((M2C_FIELD(arg1, s16 *, 0x5A) * 0x10) & 0xF0);
    M2C_FIELD(arg0, u8 *, 0x16) = (u8) (M2C_FIELD(arg0, u8 *, 0x16) | (((s16) M2C_FIELD(arg1, s16 *, 0x5C) >> 2) & 0xF));
    M2C_FIELD(arg0, u8 *, 0x17) = (u8) ((M2C_FIELD(arg1, s16 *, 0x5C) << 6) & 0xC0);
    M2C_FIELD(arg0, u8 *, 0x17) = (u8) (M2C_FIELD(arg0, u8 *, 0x17) | (M2C_FIELD(arg1, s16 *, 0x5E) & 0x3F));
    M2C_FIELD(arg0, u8 *, 0x18) = (u8) ((M2C_FIELD(arg1, s16 *, 0x60) * 4) & 0xFC);
    M2C_FIELD(arg0, u8 *, 0x18) = (u8) (M2C_FIELD(arg0, u8 *, 0x18) | (((s16) M2C_FIELD(arg1, s16 *, 0x62) >> 4) & 3));
    M2C_FIELD(arg0, u8 *, 0x19) = (u8) ((M2C_FIELD(arg1, s16 *, 0x62) * 0x10) & 0xF0);
    M2C_FIELD(arg0, u8 *, 0x19) = (u8) (M2C_FIELD(arg0, u8 *, 0x19) | (((s16) M2C_FIELD(arg1, s16 *, 0x64) >> 2) & 0xF));
    M2C_FIELD(arg0, u8 *, 0x1A) = (u8) ((M2C_FIELD(arg1, s16 *, 0x64) << 6) & 0xC0);
    M2C_FIELD(arg0, u8 *, 0x1A) = (u8) (M2C_FIELD(arg0, u8 *, 0x1A) | (M2C_FIELD(arg1, s16 *, 0x66) & 0x3F));
}
