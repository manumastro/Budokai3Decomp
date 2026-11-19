/* Draft (not built): func_001F8AA0 at 0x001F8AA0, size 0x184, segment battle/btb_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); nt' to 'struct StageGroupSrc *' @ 131: *(s32 *)(*(s32 *)((u8 *)arg0 + 0x20) + var_s1),(struct StageGroupSrc *)(var_s2));
 * Original: asm/nonmatchings/battle/btb_main/func_001F8AA0.s */

// src/battle/btb_main.c func_001F8AA0 cerr diff=-1/0
StageGroup *func_001F8AA0(StageHeader *arg0) {
    s32 temp_v1;
    s32 var_a2;
    s32 var_a3;
    s32 var_s0;
    s32 var_s1;
    s32 var_s4;
    u8 *temp_v0;
    u8 *var_s2;
    u8 *var_v1;

    temp_v1 = *(s32 *)((u8 *)arg0 + 4);
    if (temp_v1 <= 0) {
        return NULL;
    }
    temp_v0 = amHeap_Alloc(temp_v1 * 0x24, 0, D_004698D8, 0x5F2);
    memset(temp_v0, 0, *(s32 *)((u8 *)arg0 + 4) * 0x24);
    var_s4 = 0;
    if (*(s32 *)((u8 *)arg0 + 4) > 0) {
        var_s2 = temp_v0;
        var_s1 = 0;
        var_s0 = 0;
        do {
            func_001F89D0(var_s4, *(s32 *)(*(s32 *)((u8 *)arg0 + 0x20) + var_s1),(struct StageGroupSrc *)(var_s2));
            var_v1 = *(u8 **)((u8 *)(*(u8 **)((u8 *)var_s2 + 0xC)) + 4);
            if (*(s32 *)((u8 *)(*(u8 **)((u8 *)var_v1 + 0)) + 0x20) >= 2) {
                var_a3 = 0;
                if (*(s32 *)((u8 *)var_v1 + 4) > 0) {
                    var_a2 = 0;
                    do {
                        var_a3 += 1;
                        *(s32 *)((u8 *)(var_v1 + var_a2) + 8) = (s32) *(s32 *)((u8 *)(((u8 *)&D_0044AE50) + var_s0 + ((*(s32 *)(&gBtbBg)) * 0x5C)) + 0x28);
                        var_v1 = *(u8 **)((u8 *)(*(u8 **)((u8 *)var_s2 + 0xC)) + 4);
                        var_a2 += 8;
                    } while (var_a3 < *(s32 *)((u8 *)var_v1 + 4));
                }
            }
            var_s4 += 1;
            var_s2 += 0x24;
            var_s1 += 4;
            var_s0 += 0x20;
        } while (var_s4 < *(s32 *)((u8 *)arg0 + 4));
    }
    return (struct StageGroup *)(temp_v0);
}
