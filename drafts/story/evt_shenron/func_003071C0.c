/* Draft (not built): func_003071C0 at 0x003071C0, size 0xB0, segment story/evt_shenron (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 18 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xB8, original 0xB0
 * Original: asm/nonmatchings/story/evt_shenron/func_003071C0.s */

// src/story/evt_shenron.c func_003071C0 size diff=18/46
s32 amCdFs_ReadFileId(s32, s32, s32);
s32 func_00306140();
extern s128 D_00458E70;
extern void Help_Load();
extern void SoundSlot_ClearAll(void);
void func_003071C0(void) {
    s128 sp40;
    s128 *var_a0;
    s128 *var_a1;
    s128 *var_s1;
    s32 var_s2;
    s32 var_v1;
    u8 *var_s0;

    Shenron_Create();
    func_00306140();
    Help_Load();
    SoundSlot_ClearAll();
    var_s0 = (u8 *)(D_0047097C);
    var_a1 = &D_00458E70;
    var_a0 = &sp40;
    var_v1 = 0xB;
    do {
        var_v1 -= 1;
        *var_a0 = *var_a1;
        var_a1 += 0x10;
        var_a0 += 0x10;
    } while (var_v1 > 0);
    var_s2 = 0;
    var_s1 = &sp40;
    do {
        var_s2 += 1;
        *(s32 *)((u8 *)var_s0 + 0x24) = amCdFs_ReadFileId(*var_s1, 0, 1);
        var_s1 += 4;
        var_s0 += 4;
    } while (var_s2 < 0x2C);
}
