/* Draft (not built): func_002F91B0 at 0x002F91B0, size 0x8, segment menu/mn_CharSelChip (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_CharSelChip.s */

M2C_UNK func_002F8A40();                            /* extern */

void func_002F91B0(void) {
    func_002F8A40();
}

/* Similar function already in C: Character_PauseVoice (src/battle/character.c), similarity 1.00, same instructions apart from immediates/symbols.
 * It is the template below (not built). */
#if 0
void Character_PauseVoice(s32 *a) {
    AdxSlot_Pause((void *)a[15]);
}
#endif
