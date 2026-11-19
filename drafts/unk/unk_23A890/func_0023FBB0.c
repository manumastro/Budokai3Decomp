/* Draft (not built): func_0023FBB0 at 0x0023FBB0, size 0xC4, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_23A890/func_0023FBB0.s */

void func_0023FBB0(void) {
    f32 sp38;
    f32 sp3C;
    s32 temp_a0_2;
    s32 var_s0;
    u8 *temp_a0;
    u8 *var_s1;
    sp3C = D_00470690;
    func_0022DB20(sp3C, sp38);
    sp38 = D_00470694;
    func_0023D680();
    func_0022DB20(0.0f, 0.0f);
    temp_a0 = gBattle;
    var_s0 = 0;
    if (0 < *(u8 **)((u8 *)temp_a0 + 0x88D8)) {
        var_s1 = D_0058BF70;
        do {
            if (*(s16 *)((u8 *)temp_a0 + 0x8944) == 0) {
                temp_a0_2 = *(s32 *)((u8 *)var_s1 + 0x26C);
                if (temp_a0_2 != 0) {
                    func_0022C560(temp_a0_2);
                }
            }
            var_s0 += 1;
            var_s1 += 0x64;
        }
        while (var_s0 < *(s32 *)((u8 *)gBattle + 0x88D8));
    }
}
