/* Draft (not built): func_00215C10 at 0x00215C10, size 0x180, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal operands 'int[]' = 'int' mwccps2.exe Compiler: 3668: D_00568B90 = &D_00568C10; @ 3667: D_00568B94 = 0;
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00215C10.s */

// src/unk/unk_20A4D0.c func_00215C10 cerr diff=-1/0
void func_00215C10(void) {
    s32 *var_s0;
    s32 *var_s0_2;
    s32 temp_v0;

    var_s0 = (s32 *)(D_00568B90);
    if (var_s0 != &D_00568C10) {
        do {
            if (((u64) ((s64) *(s16 *)((u8 *)var_s0 + 0x1E) << 0x20) >> 0x20) != 0) {
                *(s32 *)((u8 *)var_s0 + 8) = -1;
                temp_v0 = *(s32 *)((u8 *)var_s0 + 0xC);
                if (temp_v0 > 0) {
                    ((s32 (*)(s32 *)) temp_v0)(var_s0);
                }
            }
            var_s0 = *(s32 **)((u8 *)var_s0 + 0);
        } while (var_s0 != &D_00568C10);
    }
    var_s0_2 = (s32 *)(D_00568B90);
    if (var_s0_2 != &D_00568C10) {
        do {
            if (*(s32 *)((u8 *)var_s0_2 + 8) == -1) {
                func_0020CB90(var_s0_2);
            }
            var_s0_2 = *(s32 **)((u8 *)var_s0_2 + 0);
        } while (var_s0_2 != &D_00568C10);
    }
    func_0020F700(-1);
    func_0020A7F0(-1);
    func_002185E0();
    Sp_KillTasks();
    func_00247410();
    memset(gWave, 0, 0xA0);
    memset(&D_00568B90, 0, 0x80);
    memset(&D_00568C10, 0, 0x80);
    D_00568B94 = 0;
    D_00568B90 = &D_00568C10;
    D_00568C14 = &D_00568B90;
    D_00568C10 = NULL;
    func_0020F870(-1);
    func_0020DA10(-1);
    Hm_Start();
    Ar_Start();
    func_00247500();
}
