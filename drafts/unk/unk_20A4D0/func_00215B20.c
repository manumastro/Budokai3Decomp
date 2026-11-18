/* Draft (not built): func_00215B20 at 0x00215B20, size 0xF0, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 6 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00215B20.s */

// src/unk/unk_20A4D0.c func_00215B20 diff diff=6/60
void func_00215B20(void) {
    s32 temp_v0;
    u8 *var_s0;
    u8 *var_s0_2;

    var_s0 = D_00568B90;
    if (var_s0 != &D_00568C10) {
        do {
            if (((u64) ((s64) *(s16 *)((u8 *)var_s0 + 0x1E) << 0x20) >> 0x20) != 0) {
                *(s32 *)((u8 *)var_s0 + 8) = -1;
                temp_v0 = *(s32 *)((u8 *)var_s0 + 0xC);
                if (temp_v0 > 0) {
                    ((s32 (*)(u8 *)) temp_v0)(var_s0);
                }
            }
            var_s0 = *(u8 **)((u8 *)var_s0 + 0);
        } while (var_s0 != &D_00568C10);
    }
    var_s0_2 = D_00568B90;
    if (var_s0_2 != &D_00568C10) {
        do {
            if (*(s32 *)((u8 *)var_s0_2 + 8) == -1) {
                func_0020CB90(var_s0_2);
            }
            var_s0_2 = *(u8 **)((u8 *)var_s0_2 + 0);
        } while (var_s0_2 != &D_00568C10);
    }
    func_0020F700(-1);
    func_0020A7F0(-1);
    func_002185E0();
    Sp_KillTasks();
    func_00247410();
}
