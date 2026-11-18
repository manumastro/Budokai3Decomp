/* Draft (not built): func_0027DAF0 at 0x0027DAF0, size 0x2C, segment menu/mn_charasel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_charasel.s */

M2C_UNK memcpy(s32, s32, M2C_UNK);                  /* extern */

s32 func_0027DAF0(void *arg0, s32 arg1) {
    memcpy(arg1, M2C_FIELD(arg0, s32 *, 0x30) + 0x6C, 0xC);
    return 1;
}
