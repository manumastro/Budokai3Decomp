/* Draft (not built): func_001CCDD0 at 0x001CCDD0, size 0x158, segment unk/unk_1CBD90 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ' to 'int' mwccps2.exe Compiler: @ 771: *)((u8 *)(*(u8 **)((u8 *)((temp_v1_2 * 4) + gBattle) + 0x8934)) + 0x1350)))))));
 * Original: asm/nonmatchings/unk/unk_1CBD90/func_001CCDD0.s */

// src/unk/unk_1CBD90.c func_001CCDD0 cerr diff=-1/0
s32 func_001CCDD0(u8 *arg1) {
    s32 sp40;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp70;
    u8 *sp74;
    s32 sp78;
    s32 sp7C;
    f32 sp84;
    f32 sp8C;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f23;
    f32 var_f0;
    f32 var_f22;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v1_2;
    u8 *temp_v1;

    temp_v1 = *(u8 **)((u8 *)arg1 + 0x2C);
    temp_f23 = *(f32 *)((u8 *)temp_v1 + 0);
    temp_s1 = *(s32 *)((u8 *)temp_v1 + 0x10);
    var_f22 = *(f32 *)((u8 *)temp_v1 + 4);
    temp_s0 = *(s32 *)((u8 *)temp_v1 + 0x14);
    temp_f21 = *(f32 *)((u8 *)temp_v1 + 8);
    temp_f20 = *(f32 *)((u8 *)temp_v1 + 0xC);
    temp_v1_2 = *(s32 *)((u8 *)temp_v1 + 0x18);
    switch (temp_v1_2) {                            /* irregular */
    case 1:
    case 0:
        sp74 = BtlChara_GetF270C((s32)((u8 *)((s32)((u8 *)((s32)((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)((temp_v1_2 * 4) + gBattle) + 0x8934)) + 0x1350))))))));
        break;
    case 3:
        sp74 = *(u8 **)((u8 *)gBattle + 0x81C);
        break;
    case 2:
        sp74 = func_001F9A20();
        break;
    }
    sp60 = 1;
    var_f0 = 0.0f;
    sp78 = temp_s0;
    sp64 = 7;
    sp84 = temp_f20;
    sp70 = temp_s1;
    sp7C = 0;
    if (temp_s1 & 8) {
        var_f0 = (f32)(D_004B4218);
    }
    sp8C = var_f0;
    if (!(temp_s1 & 0x01000000)) {
        var_f22 += func_00200270(0, temp_f21, temp_f23);
    }
    sp5C = 0x3F800000;
    sp50 = temp_f21;
    sp54 = var_f22;
    sp58 = temp_f23;
    func_001A8770(1, &sp40);
    return 1;
}
