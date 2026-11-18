/* Draft (not built): func_00248360 at 0x00248360, size 0xA8, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal implicit conversion from 'unsigned char *' to 'int' @ 2651: func_001F5B70(temp_s0_2, temp_a1);
 * Original: asm/nonmatchings/unk/unk_23A890/func_00248360.s */

// src/unk/unk_23A890.c func_00248360 cerr diff=-1/0
void func_00248360(void) {
    s8 *temp_s0;
    u8 *temp_a1;
    u8 *temp_s0_2;

    func_001F7DB0();
    func_001F7BF0();
    func_001F7820();
    func_001F7690();
    func_001F6E50();
    func_001F6D60();
    temp_s0 = (s8 *)(*D_0051CD0C);
    if (D_0051CD20 != 0) {
        return;
    }
    temp_s0_2 = (u8 *)(func_001F5EF0(3, 1));
    temp_a1 = *(u8 **)((u8 *)temp_s0_2 + 0x10);
    *(s32 *)((u8 *)temp_a1 + 0) = func_001A50F0((s32)(temp_s0), 0x27F);
    *(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s0_2 + 0x10)) + 0xE) = 1;
    func_001F5B70(temp_s0_2, temp_a1);
    func_001F7470(0);
}
