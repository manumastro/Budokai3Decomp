/* Draft (not built): func_00247820 at 0x00247820, size 0xD8, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  *, int, void (*)(), void (*)())' @ 2386: temp_v0_2 = (u8 *)(func_001F5FD0(0x85000000, &D_0046AD90, 0, &func_002477C0));
 * Original: asm/nonmatchings/unk/unk_23A890/func_00247820.s */

// src/unk/unk_23A890.c func_00247820 cerr diff=-1/0
void func_00247820(void) {
    s32 temp_a3;
    s32 temp_v0;
    s32 var_s1;
    s8 *temp_s2;
    u8 *temp_v0_2;

    var_s1 = 0;
    temp_s2 = (s8 *)(*D_0051CD0C);
    temp_v0 = func_001A50F0((s32)(temp_s2), 0x208);
    if (temp_v0 != 0) {
        var_s1 = func_00209540(temp_v0, 0x02000004, 0);
    }
    if (var_s1 != 0) {
        temp_v0_2 = (u8 *)(func_001F5FD0(0x85000000, &D_0046AD90, 0, &func_002477C0));
        temp_a3 = *(s32 *)((u8 *)temp_v0_2 + 0x20);
        *(s32 *)((u8 *)temp_v0_2 + 0x20) = (s32) (temp_a3 & ~0x800);
        *(s32 *)((u8 *)temp_v0_2 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0_2 + 0x20) | 0x800);
        memset(temp_v0_2 + 0x30, 0, 0x80);
        *(s32 *)((u8 *)temp_v0_2 + 0x38) = var_s1;
        *(s32 *)((u8 *)(temp_v0_2 + 0x30) + 4) = func_001A50F0((s32)(temp_s2), 0x280);
    }
}
