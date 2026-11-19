/* Draft (not built): func_002F6E00 at 0x002F6E00, size 0x40, segment menu/mn_CharSelChip (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_CharSelChip.s */

M2C_UNK func_002F57E0(s32, M2C_UNK *);              /* extern */
M2C_UNK func_002F66E0(M2C_UNK *);                   /* extern */
M2C_UNK func_002F69E0(M2C_UNK *, s32);              /* extern */

void func_002F6E00(s32 arg0) {
    M2C_UNK sp20;

    func_002F69E0(&sp20, arg0);
    func_002F66E0(&sp20);
    func_002F57E0(arg0, &sp20);
}

/* Similar function already in C: Character_Release (src/battle/character.c), similarity 0.65.
 * It is the template below (not built). */
#if 0
void Character_Release(s32 *c) {
    if (c != 0) {
        CharLight_Release(c[7]);
        CharBody_Release(c[1]);
        func_001C9840(c[0]);
        amHeap_Free(c);
    }
}
#endif
