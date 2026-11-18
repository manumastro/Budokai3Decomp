/* Draft (not built): func_002870D0 at 0x002870D0, size 0x38, segment menu/mn_StageSel (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/menu/mn_StageSel.s */

M2C_UNK func_00284AA0(s32);                         /* extern */
M2C_UNK func_00285EF0(s32);                         /* extern */
M2C_UNK func_002861B0(s32);                         /* extern */

void func_002870D0(void *arg0) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x30);
    func_00284AA0(temp_s0);
    func_002861B0(temp_s0);
    func_00285EF0(temp_s0);
}
