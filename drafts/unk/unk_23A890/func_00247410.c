/* Draft (not built): func_00247410 at 0x00247410, size 0xF0, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 18 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_23A890/func_00247410.s */

void func_00247410(void) {
    s32 var_s3;
    s32 temp_a0;
    s32 var_s1;
    u8 *temp_s2;
    u8 *var_s0;
    var_s3 = 0;
    var_s1 = 0;
    var_s0 = D_0058CAA0;
    do {
        temp_s2 = var_s0 + 0x10;
        if (*(s16 *)((u8 *)var_s0 + 0x3E) == 0) {
            func_00244CC0(*(s32 *)((u8 *)(&gBattle[var_s1] + 0x830) + 0x1350), 1);
        }
        temp_a0 = *(s32 *)((u8 *)temp_s2 + 0x30);
        if (temp_a0 != 0) {
            *(s32 *)((u8 *)temp_s2 + 0x30) = 0;
            Obj_ResetF38(temp_a0);
        }
        var_s3 += 1;
        var_s1 += 0x2020;
        var_s0 += 0x480;
    }
    while (var_s3 < 2);
    amTask_KillGroup(0x400, 0x800002, 0);
    if (*(s16 *)((u8 *)D_0046FE4C + 0x916) != 0) {
        func_0020DE30();
        *(s16 *)((u8 *)D_0046FE4C + 0x916) = 0;
    }
    *(s16 *)((u8 *)D_0046FE4C + 0x914) = 0;
    func_00248C80();
    func_00252B20();
    Wave_Create();
    func_002CA490();
}
