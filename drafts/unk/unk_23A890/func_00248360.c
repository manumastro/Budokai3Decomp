/* Draft (not built): func_00248360 at 0x00248360, size 0xA8, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 15 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xAC, original 0xA8
 * Original: asm/nonmatchings/unk/unk_23A890/func_00248360.s */

// src/unk/unk_23A890.c func_00248360 size diff=15/43
void func_00248360(void) {
    s32 temp_a0;
    s32 var_s0;

    func_001F7DB0();
    func_001F7BF0();
    func_001F7820();
    func_001F7690();
    func_001F6E50();
    func_001F6D60();
    var_s0 = *D_0051CD0C;
    if (*D_0051CD20 != 0) {
        return;
    }
    temp_a0 = var_s0;
    var_s0 = func_001F5EF0(3, 1);
    *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x10)) + 0) = func_001A50F0(temp_a0, 0x27F);
    *(s16 *)((u8 *)(*(u8 **)((u8 *)var_s0 + 0x10)) + 0xE) = 1;
    func_001F5B70(var_s0);
    func_001F7470(0);
}

/* Similar function already in C: func_002CF0E0 (src/unk/unk_2CD5F0.c), similarity 0.64.
 * It is the template below (not built). */
#if 0
void func_002CF0E0(void) {
    u8 *v;
    func_001F7DB0();
    func_001F7BF0();
    func_001F7820();
    func_001F7690();
    func_001F6E50();
    switch (D_0051CD20[0]) {
    case 0:
        v = (u8 *)func_001F5EF0(3, 1);
        func_001F5B10(*(u8 **)(v + 4), 0);
        BtbObj_RemoveByIdx(4, 3);
        func_001F7470(2);
        break;
    case 1:
        func_002CDC20();
        break;
    }
}
#endif
