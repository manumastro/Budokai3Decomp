/* Draft (not built): func_00287C30 at 0x00287C30, size 0x28, segment menu/mn_StageSel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_StageSel.s */

void func_00287C30(void *arg0, s32 arg1) {
    void *temp_a2;

    if (arg0 != NULL) {
        temp_a2 = M2C_FIELD(arg0, void **, 0x30);
        M2C_FIELD(temp_a2, u16 *, 0x240) = (u16) (M2C_FIELD(temp_a2, u16 *, 0x240) | (arg1 & 0xFFFF));
    }
}
