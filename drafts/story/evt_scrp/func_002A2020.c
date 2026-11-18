/* Draft (not built): func_002A2020 at 0x002A2020, size 0x1BC, segment story/evt_scrp (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal operands 'int[]' = 'int' mwccps2.exe Compiler: 441: D_005AB490 = 0; @ 440: D_005AB49C = 0x3F800000;
 * Original: asm/nonmatchings/story/evt_scrp/func_002A2020.s */

// src/story/evt_scrp.c func_002A2020 cerr diff=-1/0
void func_002A2020(s32 arg0, s32 arg1, u8 *arg2, u8 *arg3) {
    s32 var_a1;
    u8 *temp_a0;
    u8 *temp_a3;
    u8 *temp_a3_2;
    u8 *temp_s0;

    var_a1 = arg1;
    if (var_a1 >= 0) {
        if (var_a1 >= 2) {
            goto block_3;
        }
    } else {
block_3:
        var_a1 = 0;
    }
    temp_s0 = (u8 *)((var_a1 * 0x34) + (D_005AB3C0 + (arg0 * 0x68)));
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 0);
    if (temp_a0 != NULL) {
        amCdFs_ReleaseCache((s32)((void *)(temp_a0)));
        *(u8 **)((u8 *)temp_s0 + 0) = NULL;
    }
    *(u8 **)((u8 *)temp_s0 + 0) = arg2;
    *(u8 **)((u8 *)temp_s0 + 4) = arg3;
    temp_a3 = *(u8 **)((u8 *)temp_s0 + 4);
    *(s32 **)((u8 *)temp_s0 + 8) = (s32 *) (temp_a3 + *(s8 *)((u8 *)temp_a3 + 4));
    temp_a3_2 = *(u8 **)((u8 *)temp_s0 + 4);
    *(u8 **)((u8 *)temp_s0 + 0xC) = (u8 *) (temp_a3_2 + *(s8 *)((u8 *)temp_a3_2 + 8));
    *(s32 *)((u8 *)temp_s0 + 0x10) = (s32) **(s32 **)((u8 *)temp_s0 + 8);
    *(u8 **)((u8 *)temp_s0 + 0x14) = (u8 *) *(u8 **)((u8 *)temp_s0 + 0xC);
    *(u8 **)((u8 *)temp_s0 + 0x18) = (u8 *) (*(u8 **)((u8 *)temp_s0 + 0xC) + 0x98);
    *(u8 **)((u8 *)temp_s0 + 0x1C) = (u8 *) (*(u8 **)((u8 *)temp_s0 + 0xC) + 0x130);
    *(u8 **)((u8 *)temp_s0 + 0x20) = (u8 *) (*(u8 **)((u8 *)temp_s0 + 0xC) + 0x1C8);
    *(u8 **)((u8 *)temp_s0 + 0x24) = (u8 *) (*(u8 **)((u8 *)temp_s0 + 0xC) + 0x260);
    *(u8 **)((u8 *)temp_s0 + 0x28) = (u8 *) (*(u8 **)((u8 *)temp_s0 + 0xC) + 0x2F8);
    *(u8 **)((u8 *)temp_s0 + 0x2C) = (u8 *) (*(u8 **)((u8 *)temp_s0 + 0xC) + 0x390);
    *(u8 **)((u8 *)temp_s0 + 0x30) = (u8 *) (*(u8 **)((u8 *)temp_s0 + 0xC) + 0x428);
    D_005AB49C = 0x3F800000;
    D_005AB490 = 0;
    D_005AB494 = 0;
    D_005AB498 = 0;
    memset(&D_005AB490, 0, 0x180);
    D_005AB5E6 = -1;
    D_005AB4B8 = 8;
    D_005AB4BE = 1;
    D_005AB508 = 8;
    D_005AB50E = 1;
    D_005AB558 = 8;
    D_005AB5A8 = 8;
    D_005AB55E = 1;
    D_005AB5AE = 1;
}
